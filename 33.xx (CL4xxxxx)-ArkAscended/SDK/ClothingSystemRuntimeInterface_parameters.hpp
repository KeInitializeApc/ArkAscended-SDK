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

// 0x4 (0x4 - 0x0)
// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps
struct UClothingSimulationInteractor_SetNumSubsteps_Params
{
public:
	int32                                        NumSubsteps;                                       // 0x0(0x4)(BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations
struct UClothingSimulationInteractor_SetNumIterations_Params
{
public:
	int32                                        NumIterations;                                     // 0x0(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetMaxNumIterations
struct UClothingSimulationInteractor_SetMaxNumIterations_Params
{
public:
	int32                                        MaxNumIterations;                                  // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
struct UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Params
{
public:
	float                                        InStiffness;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime
struct UClothingSimulationInteractor_GetSimulationTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps
struct UClothingSimulationInteractor_GetNumSubsteps_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles
struct UClothingSimulationInteractor_GetNumKinematicParticles_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations
struct UClothingSimulationInteractor_GetNumIterations_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles
struct UClothingSimulationInteractor_GetNumDynamicParticles_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths
struct UClothingSimulationInteractor_GetNumCloths_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor
struct UClothingSimulationInteractor_GetClothingInteractor_Params
{
public:
	class FString                                ClothingAssetName;                                 // 0x0(0x10)(ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UClothingInteractor*                   ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
struct UClothingSimulationInteractor_EnableGravityOverride_Params
{
public:
	struct FVector                               InVector;                                          // 0x0(0x18)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

}
}


