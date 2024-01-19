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
	uint8                                        Pad_326F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  InstanceName;                                      // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3270[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ETaskResourceOverlapPolicy        ResourceOverlapPolicy;                             // 0x3A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3271[0x25];                                    // Fixing Size After Last Property  > TateDumper <
	class UGameplayTask*                         ChildTask;                                         // 0x60(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
	int32                                        ManualResourceID;                                  // 0x28(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int8                                         AutoResourceID;                                    // 0x2C(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3272[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bManuallySetID : 1;                                // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3273[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameplayTaskResource* GetDefaultObj();

};

// 0x78 (0x130 - 0xB8)
// Class GameplayTasks.GameplayTasksComponent
class UGameplayTasksComponent : public UActorComponent
{
public:
	uint8                                        Pad_3277[0x14];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        BitPad_2BF : 1;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        bIsNetDirty : 1;                                   // Mask: 0x2, PropSize: 0x10xCC(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_2C0 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_3278[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UGameplayTask*>                 TaskPriorityQueue;                                 // 0xD0(0x10)(Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3279[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UGameplayTask*>                 TickingTasks;                                      // 0xF0(0x10)(ConstParm, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UGameplayTask*>                 KnownTasks;                                        // 0x100(0x10)(DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnClaimedResourcesChange;                          // 0x110(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UGameplayTask*>                 SimulatedTasks;                                    // 0x120(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGameplayTasksComponent* GetDefaultObj();

	TArray<class UGameplayTask*> OnRep_SimulatedTasks();
	TArray<class UClass*> K2_RunGameplayTask(TScriptInterface<class IGameplayTaskOwnerInterface>* TaskOwner, class UGameplayTask** Task, enum class EGameplayTaskRunResult ReturnValue);
};

// 0x0 (0x68 - 0x68)
// Class GameplayTasks.GameplayTask_ClaimResource
class UGameplayTask_ClaimResource : public UGameplayTask
{
public:

	static class UClass* StaticClass();
	static class UGameplayTask_ClaimResource* GetDefaultObj();

	uint8 ClaimResources(TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner, const TArray<class UClass*>& ResourceClasses, class FName TaskInstanceName, class UGameplayTask_ClaimResource* ReturnValue);
	uint8 ClaimResource(TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner, class FName TaskInstanceName, class UGameplayTask_ClaimResource* ReturnValue);
};

// 0x58 (0xC0 - 0x68)
// Class GameplayTasks.GameplayTask_SpawnActor
class UGameplayTask_SpawnActor : public UGameplayTask
{
public:
	FMulticastInlineDelegateProperty_            Success;                                           // 0x68(0x10)(EditFixedSize, DisableEditOnTemplate, Config)
	FMulticastInlineDelegateProperty_            DidNotSpawn;                                       // 0x78(0x10)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3287[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	class UClass*                                ClassToSpawn;                                      // 0xB8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGameplayTask_SpawnActor* GetDefaultObj();

	void SpawnActor(TScriptInterface<class IGameplayTaskOwnerInterface>* TaskOwner, struct FVector* SpawnLocation, struct FRotator* SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority, class UGameplayTask_SpawnActor* ReturnValue);
	void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);
	void BeginSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor, bool ReturnValue);
};

// 0x38 (0xA0 - 0x68)
// Class GameplayTasks.GameplayTask_TimeLimitedExecution
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
public:
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0x68(0x10)(Edit, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnTimeExpired;                                     // 0x78(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3289[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameplayTask_TimeLimitedExecution* GetDefaultObj();

};

// 0x20 (0x88 - 0x68)
// Class GameplayTasks.GameplayTask_WaitDelay
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
	FMulticastInlineDelegateProperty_            OnFinish;                                          // 0x68(0x10)(Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_328C[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameplayTask_WaitDelay* GetDefaultObj();

	uint8 TaskWaitDelay(TScriptInterface<class IGameplayTaskOwnerInterface>* TaskOwner, class UGameplayTask_WaitDelay* ReturnValue);
	void TaskDelayDelegate__DelegateSignature();
};

}


