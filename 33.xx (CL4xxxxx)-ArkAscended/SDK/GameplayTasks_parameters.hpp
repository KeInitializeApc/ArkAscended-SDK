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
// Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
struct UGameplayTasksComponent_OnRep_SimulatedTasks_Params
{
public:
	TArray<class UGameplayTask*>                 PreviousSimulatedTasks;                            // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
struct UGameplayTasksComponent_K2_RunGameplayTask_Params
{
public:
	TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	class UGameplayTask*                         Task;                                              // 0x10(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Priority;                                          // 0x18(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2633[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UClass*>                        AdditionalRequiredResources;                       // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UClass*>                        AdditionalClaimedResources;                        // 0x30(0x10)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EGameplayTaskRunResult            ReturnValue;                                       // 0x40(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2634[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
struct UGameplayTask_ClaimResource_ClaimResources_Params
{
public:
	TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UClass*>                        ResourceClasses;                                   // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Priority;                                          // 0x20(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2643[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  TaskInstanceName;                                  // 0x24(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2644[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UGameplayTask_ClaimResource*           ReturnValue;                                       // 0x30(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource
struct UGameplayTask_ClaimResource_ClaimResource_Params
{
public:
	TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                ResourceClass;                                     // 0x10(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Priority;                                          // 0x18(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_264D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  TaskInstanceName;                                  // 0x1C(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_264E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UGameplayTask_ClaimResource*           ReturnValue;                                       // 0x28(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
struct UGameplayTask_SpawnActor_SpawnActor_Params
{
public:
	TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               SpawnLocation;                                     // 0x10(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FRotator                              SpawnRotation;                                     // 0x28(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                Class;                                             // 0x40(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor)
	bool                                         bSpawnOnlyOnAuthority;                             // 0x48(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_265B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UGameplayTask_SpawnActor*              ReturnValue;                                       // 0x50(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
struct UGameplayTask_SpawnActor_FinishSpawningActor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class AActor*                                SpawnedActor;                                      // 0x8(0x8)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
struct UGameplayTask_SpawnActor_BeginSpawningActor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class AActor*                                SpawnedActor;                                      // 0x8(0x8)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_265F[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
struct UGameplayTask_WaitDelay_TaskWaitDelay_Params
{
public:
	TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Time;                                              // 0x10(0x4)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Priority;                                          // 0x14(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2667[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UGameplayTask_WaitDelay*               ReturnValue;                                       // 0x18(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


