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

// 0x50 (0x50 - 0x0)
// Function IKRig.IKGoalCreatorInterface.AddIKGoals
struct IIKGoalCreatorInterface_AddIKGoals_Params
{
public:
	TMap<class FName, struct FIKRigGoal>         OutGoals;                                          // 0x0(0x50)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function IKRig.IKRigComponent.SetIKRigGoalTransform
struct UIKRigComponent_SetIKRigGoalTransform_Params
{
public:
	class FName                                  GoalName;                                          // 0x0(0x8)(OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1839[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        PositionAlpha;                                     // 0x70(0x4)(Edit, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RotationAlpha;                                     // 0x74(0x4)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_183A[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// Function IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation
struct UIKRigComponent_SetIKRigGoalPositionAndRotation_Params
{
public:
	class FName                                  GoalName;                                          // 0x0(0x8)(OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)
	struct FQuat                                 Rotation;                                          // 0x20(0x20)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        PositionAlpha;                                     // 0x40(0x4)(Edit, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RotationAlpha;                                     // 0x44(0x4)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1844[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// Function IKRig.IKRigComponent.SetIKRigGoal
struct UIKRigComponent_SetIKRigGoal_Params
{
public:
	struct FIKRigGoal                            Goal;                                              // 0x0(0xA0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x170 (0x170 - 0x0)
// Function IKRig.IKRetargeter.SetRootSettingsInRetargetProfile
struct UIKRetargeter_SetRootSettingsInRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0x108)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	struct FTargetRootSettings                   RootSettings;                                      // 0x108(0x68)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x128 (0x128 - 0x0)
// Function IKRig.IKRetargeter.SetGlobalSettingsInRetargetProfile
struct UIKRetargeter_SetGlobalSettingsInRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0x108)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	struct FRetargetGlobalSettings               GlobalSettings;                                    // 0x108(0x20)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x128 (0x128 - 0x0)
// Function IKRig.IKRetargeter.SetChainSpeedPlantSettingsInRetargetProfile
struct UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0x108)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	struct FTargetChainSpeedPlantSettings        SpeedPlantSettings;                                // 0x108(0x18)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  TargetChainName;                                   // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1B8 (0x1B8 - 0x0)
// Function IKRig.IKRetargeter.SetChainSettingsInRetargetProfile
struct UIKRetargeter_SetChainSettingsInRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0x108)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	struct FTargetChainSettings                  ChainSettings;                                     // 0x108(0xA8)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  TargetChainName;                                   // 0x1B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x188 (0x188 - 0x0)
// Function IKRig.IKRetargeter.SetChainIKSettingsInRetargetProfile
struct UIKRetargeter_SetChainIKSettingsInRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0x108)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	struct FTargetChainIKSettings                IKSettings;                                        // 0x108(0x78)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  TargetChainName;                                   // 0x180(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x128 (0x128 - 0x0)
// Function IKRig.IKRetargeter.SetChainFKSettingsInRetargetProfile
struct UIKRetargeter_SetChainFKSettingsInRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0x108)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	struct FTargetChainFKSettings                FKSettings;                                        // 0x108(0x18)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  TargetChainName;                                   // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x170 (0x170 - 0x0)
// Function IKRig.IKRetargeter.GetRootSettingsFromRetargetProfile
struct UIKRetargeter_GetRootSettingsFromRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0x108)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	struct FTargetRootSettings                   ReturnValue;                                       // 0x108(0x68)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// Function IKRig.IKRetargeter.GetRootSettingsFromRetargetAsset
struct UIKRetargeter_GetRootSettingsFromRetargetAsset_Params
{
public:
	class UIKRetargeter*                         RetargetAsset;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class FName                                  OptionalProfileName;                               // 0x8(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FTargetRootSettings                   OutSettings;                                       // 0x10(0x68)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x128 (0x128 - 0x0)
// Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetProfile
struct UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0x108)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	struct FRetargetGlobalSettings               ReturnValue;                                       // 0x108(0x20)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetAsset
struct UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Params
{
public:
	class UIKRetargeter*                         RetargetAsset;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class FName                                  OptionalProfileName;                               // 0x8(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FRetargetGlobalSettings               OutSettings;                                       // 0x10(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0xB8 (0xB8 - 0x0)
// Function IKRig.IKRetargeter.GetChainUsingGoalFromRetargetAsset
struct UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Params
{
public:
	class UIKRetargeter*                         RetargetAsset;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class FName                                  IKGoalName;                                        // 0x8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTargetChainSettings                  ReturnValue;                                       // 0x10(0xA8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1B8 (0x1B8 - 0x0)
// Function IKRig.IKRetargeter.GetChainSettingsFromRetargetProfile
struct UIKRetargeter_GetChainSettingsFromRetargetProfile_Params
{
public:
	struct FRetargetProfile                      RetargetProfile;                                   // 0x0(0x108)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	class FName                                  TargetChainName;                                   // 0x108(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FTargetChainSettings                  ReturnValue;                                       // 0x110(0xA8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC0 (0xC0 - 0x0)
// Function IKRig.IKRetargeter.GetChainSettingsFromRetargetAsset
struct UIKRetargeter_GetChainSettingsFromRetargetAsset_Params
{
public:
	class UIKRetargeter*                         RetargetAsset;                                     // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class FName                                  TargetChainName;                                   // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  OptionalProfileName;                               // 0x10(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FTargetChainSettings                  ReturnValue;                                       // 0x18(0xA8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


