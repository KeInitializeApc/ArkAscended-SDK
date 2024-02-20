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
	TArray<class UGameplayTask*>                 PreviousSimulatedTasks;                            // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
struct UGameplayTasksComponent_K2_RunGameplayTask_Params
{
public:
	TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UGameplayTask*                         Task;                                              // 0x10(0x8)(BlueprintReadOnly, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Priority;                                          // 0x18(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_CD1[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UClass*>                        AdditionalRequiredResources;                       // 0x20(0x10)(Edit, ExportObject, Net, Parm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UClass*>                        AdditionalClaimedResources;                        // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EGameplayTaskRunResult            ReturnValue;                                       // 0x40(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_CD2[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
struct UGameplayTask_ClaimResource_ClaimResources_Params
{
public:
	TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner;                                       // 0x0(0x10)(OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UClass*>                        ResourceClasses;                                   // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Priority;                                          // 0x20(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_CE1[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  TaskInstanceName;                                  // 0x24(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_CE3[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGameplayTask_ClaimResource*           ReturnValue;                                       // 0x30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource
struct UGameplayTask_ClaimResource_ClaimResource_Params
{
public:
	TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner;                                       // 0x0(0x10)(OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                ResourceClass;                                     // 0x10(0x8)(ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Priority;                                          // 0x18(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_CF4[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  TaskInstanceName;                                  // 0x1C(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_CF6[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UGameplayTask_ClaimResource*           ReturnValue;                                       // 0x28(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
struct UGameplayTask_SpawnActor_SpawnActor_Params
{
public:
	TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               SpawnLocation;                                     // 0x10(0x18)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FRotator                              SpawnRotation;                                     // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UClass*                                Class;                                             // 0x40(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor)
	bool                                         bSpawnOnlyOnAuthority;                             // 0x48(0x1)(BlueprintReadOnly, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_D06[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UGameplayTask_SpawnActor*              ReturnValue;                                       // 0x50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
struct UGameplayTask_SpawnActor_FinishSpawningActor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class AActor*                                SpawnedActor;                                      // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, Config, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
struct UGameplayTask_SpawnActor_BeginSpawningActor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class AActor*                                SpawnedActor;                                      // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, Config, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_D17[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
struct UGameplayTask_WaitDelay_TaskWaitDelay_Params
{
public:
	TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	float                                        Time;                                              // 0x10(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Priority;                                          // 0x14(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_D2C[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UGameplayTask_WaitDelay*               ReturnValue;                                       // 0x18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


