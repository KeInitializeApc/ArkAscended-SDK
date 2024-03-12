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
	uint8                                        Pad_2621[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  InstanceName;                                      // 0x30(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2623[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ETaskResourceOverlapPolicy        ResourceOverlapPolicy;                             // 0x3A(0x1)(Edit, EditFixedSize, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2624[0x25];                                    // Fixing Size After Last Property  > TateDumper <
	class UGameplayTask*                         ChildTask;                                         // 0x60(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

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
	int32                                        ManualResourceID;                                  // 0x28(0x4)(ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int8                                         AutoResourceID;                                    // 0x2C(0x1)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_262A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bManuallySetID : 1;                                // Mask: 0x1, PropSize: 0x10x30(0x1)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_262B[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameplayTaskResource* GetDefaultObj();

};

// 0x78 (0x130 - 0xB8)
// Class GameplayTasks.GameplayTasksComponent
class UGameplayTasksComponent : public UActorComponent
{
public:
	uint8                                        Pad_2635[0x14];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        BitPad_167 : 1;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        bIsNetDirty : 1;                                   // Mask: 0x2, PropSize: 0x10xCC(0x1)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_168 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2637[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UGameplayTask*>                 TaskPriorityQueue;                                 // 0xD0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2638[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UGameplayTask*>                 TickingTasks;                                      // 0xF0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UGameplayTask*>                 KnownTasks;                                        // 0x100(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnClaimedResourcesChange;                          // 0x110(0x10)(ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UGameplayTask*>                 SimulatedTasks;                                    // 0x120(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGameplayTasksComponent* GetDefaultObj();

	void OnRep_SimulatedTasks(const TArray<class UGameplayTask*>& PreviousSimulatedTasks);
	enum class EGameplayTaskRunResult K2_RunGameplayTask(uint8* Priority, const TArray<class UClass*>& AdditionalRequiredResources, const TArray<class UClass*>& AdditionalClaimedResources);
};

// 0x0 (0x68 - 0x68)
// Class GameplayTasks.GameplayTask_ClaimResource
class UGameplayTask_ClaimResource : public UGameplayTask
{
public:

	static class UClass* StaticClass();
	static class UGameplayTask_ClaimResource* GetDefaultObj();

	class UGameplayTask_ClaimResource* ClaimResources(TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner, const TArray<class UClass*>& ResourceClasses, uint8* Priority, class FName TaskInstanceName);
	class UGameplayTask_ClaimResource* ClaimResource(TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner, class UClass** ResourceClass, uint8* Priority, class FName TaskInstanceName);
};

// 0x58 (0xC0 - 0x68)
// Class GameplayTasks.GameplayTask_SpawnActor
class UGameplayTask_SpawnActor : public UGameplayTask
{
public:
	FMulticastInlineDelegateProperty_            Success;                                           // 0x68(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	FMulticastInlineDelegateProperty_            DidNotSpawn;                                       // 0x78(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2660[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	class UClass*                                ClassToSpawn;                                      // 0xB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGameplayTask_SpawnActor* GetDefaultObj();

	class UGameplayTask_SpawnActor* SpawnActor(class UClass* Class, bool bSpawnOnlyOnAuthority);
	class AActor* FinishSpawningActor(class UObject** WorldContextObject);
	bool BeginSpawningActor(class UObject** WorldContextObject);
};

// 0x38 (0xA0 - 0x68)
// Class GameplayTasks.GameplayTask_TimeLimitedExecution
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
public:
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0x68(0x10)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnTimeExpired;                                     // 0x78(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2663[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameplayTask_TimeLimitedExecution* GetDefaultObj();

};

// 0x20 (0x88 - 0x68)
// Class GameplayTasks.GameplayTask_WaitDelay
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
	FMulticastInlineDelegateProperty_            OnFinish;                                          // 0x68(0x10)(BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2668[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameplayTask_WaitDelay* GetDefaultObj();

	class UGameplayTask_WaitDelay* TaskWaitDelay(uint8* Priority);
	void TaskDelayDelegate__DelegateSignature();
};

}


