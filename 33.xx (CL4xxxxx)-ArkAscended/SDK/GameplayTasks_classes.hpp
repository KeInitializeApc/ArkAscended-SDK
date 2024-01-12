#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x68 - 0x28)
// Class GameplayTasks.GameplayTask
class UGameplayTask : public UObject
{
public:
	uint8                                        Pad_2F0B[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  InstanceName;                                      // 0x30(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2F0C[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ETaskResourceOverlapPolicy        ResourceOverlapPolicy;                             // 0x3A(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2F0D[0x25];                                    // Fixing Size After Last Property  > TateDumper <
	class UGameplayTask*                         ChildTask;                                         // 0x60(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UGameplayTask* GetDefaultObj();

	void ReadyForActivation();
	void GenericGameplayTaskDelegate__DelegateSignature();
	void EndTask();
};

// 0x0 (0x28 - 0x28)
// Class GameplayTasks.GameplayTaskOwnerInterface
class IGameplayTaskOwnerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGameplayTaskOwnerInterface* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayTasks.GameplayTaskResource
class UGameplayTaskResource : public UObject
{
public:
	int32                                        ManualResourceID;                                  // 0x28(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int8                                         AutoResourceID;                                    // 0x2C(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F0E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bManuallySetID : 1;                                // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, ConstParm, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F0F[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameplayTaskResource* GetDefaultObj();

};

// 0x78 (0x130 - 0xB8)
// Class GameplayTasks.GameplayTasksComponent
class UGameplayTasksComponent : public UActorComponent
{
public:
	uint8                                        Pad_2F12[0x14];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        BitPad_25D : 1;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        bIsNetDirty : 1;                                   // Mask: 0x2, PropSize: 0x10xCC(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_25E : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2F13[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UGameplayTask*>                 TaskPriorityQueue;                                 // 0xD0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F14[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UGameplayTask*>                 TickingTasks;                                      // 0xF0(0x10)(ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UGameplayTask*>                 KnownTasks;                                        // 0x100(0x10)(ConstParm, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnClaimedResourcesChange;                          // 0x110(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UGameplayTask*>                 SimulatedTasks;                                    // 0x120(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGameplayTasksComponent* GetDefaultObj();

	void OnRep_SimulatedTasks(const TArray<class UGameplayTask*>& PreviousSimulatedTasks);
	enum class EGameplayTaskRunResult K2_RunGameplayTask(class UGameplayTask* Task, uint8 Priority, const TArray<class UClass*>& AdditionalRequiredResources, const TArray<class UClass*>& AdditionalClaimedResources);
};

// 0x0 (0x68 - 0x68)
// Class GameplayTasks.GameplayTask_ClaimResource
class UGameplayTask_ClaimResource : public UGameplayTask
{
public:

	static class UClass* StaticClass();
	static class UGameplayTask_ClaimResource* GetDefaultObj();

	class UGameplayTask_ClaimResource* ClaimResources(TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner, const TArray<class UClass*>& ResourceClasses, uint8 Priority, class FName TaskInstanceName);
	class UGameplayTask_ClaimResource* ClaimResource(TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner, uint8 Priority, class FName TaskInstanceName);
};

// 0x58 (0xC0 - 0x68)
// Class GameplayTasks.GameplayTask_SpawnActor
class UGameplayTask_SpawnActor : public UGameplayTask
{
public:
	FMulticastInlineDelegateProperty_            Success;                                           // 0x68(0x10)(EditFixedSize, DisableEditOnTemplate, Config)
	FMulticastInlineDelegateProperty_            DidNotSpawn;                                       // 0x78(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F1B[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	class UClass*                                ClassToSpawn;                                      // 0xB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGameplayTask_SpawnActor* GetDefaultObj();

	class UGameplayTask_SpawnActor* SpawnActor(class UClass* Class, bool bSpawnOnlyOnAuthority);
	class AActor* FinishSpawningActor();
	bool BeginSpawningActor();
};

// 0x38 (0xA0 - 0x68)
// Class GameplayTasks.GameplayTask_TimeLimitedExecution
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
public:
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnTimeExpired;                                     // 0x78(0x10)(Edit, ConstParm, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2F1C[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameplayTask_TimeLimitedExecution* GetDefaultObj();

};

// 0x20 (0x88 - 0x68)
// Class GameplayTasks.GameplayTask_WaitDelay
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
	FMulticastInlineDelegateProperty_            OnFinish;                                          // 0x68(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2F1E[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameplayTask_WaitDelay* GetDefaultObj();

	class UGameplayTask_WaitDelay* TaskWaitDelay(float Time, uint8 Priority);
	void TaskDelayDelegate__DelegateSignature();
};

}


