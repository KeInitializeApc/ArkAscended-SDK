#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ThreadExecutionBlueprintNode.AsyncExecutionBlueprintTypes
class UAsyncExecutionBlueprintTypes : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAsyncExecutionBlueprintTypes* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class ThreadExecutionBlueprintNode.Mutex
class UMutex : public UObject
{
public:
	uint8                                        Pad_1977[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMutex* GetDefaultObj();

	void UnLock();
	bool TryLock();
	void Lock();
};

// 0x20 (0x50 - 0x30)
// Class ThreadExecutionBlueprintNode.ThreadAsyncExecBase
class UThreadAsyncExecBase : public UBlueprintAsyncActionBase
{
public:
	uint8                                        Pad_197C[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UThreadAsyncExecBase* GetDefaultObj();

};

// 0x18 (0x68 - 0x50)
// Class ThreadExecutionBlueprintNode.ThreadAsyncExecLoop
class UThreadAsyncExecLoop : public UThreadAsyncExecBase
{
public:
	FMulticastInlineDelegateProperty_            OnCompleted;                                       // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_198F[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UThreadAsyncExecLoop* GetDefaultObj();

	class UThreadAsyncExecLoop* CreateThreadExecLoop();
};

// 0x10 (0x40 - 0x30)
// Class ThreadExecutionBlueprintNode.SyncExecOnce
class USyncExecOnce : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnExecution;                                       // 0x30(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USyncExecOnce* GetDefaultObj();

	class USyncExecOnce* CreateSyncExecOnce();
};

// 0x0 (0x28 - 0x28)
// Class ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary
class UThreadAsyncExecLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UThreadAsyncExecLibrary* GetDefaultObj();

	void ThreadWait(float* Seconds);
	class UThreadAsyncExecTick* SetTickableWhenPaused(bool NewValue);
	class UThreadAsyncExecTick* SetTickable(bool NewValue);
	bool IsTickableWhenPaused();
	bool IsTickable();
	bool IsGameThread();
	class FString GetCurrentThreadName();
	int32 GetCurrentThreadID();
	bool ExecIsGameThread();
	class UThreadAsyncExecTick* BreakNextTick();
	class UThreadAsyncExecLoop* BreakNextLoop();
};

// 0x28 (0x78 - 0x50)
// Class ThreadExecutionBlueprintNode.ThreadAsyncExecOnce
class UThreadAsyncExecOnce : public UThreadAsyncExecBase
{
public:
	uint8                                        Pad_19F0[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnExecution;                                       // 0x58(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnCompleted;                                       // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UThreadAsyncExecOnce* GetDefaultObj();

	class UThreadAsyncExecOnce* CreateThreadExecOnce();
};

// 0x38 (0x88 - 0x50)
// Class ThreadExecutionBlueprintNode.ThreadAsyncExecTick
class UThreadAsyncExecTick : public UThreadAsyncExecBase
{
public:
	FMulticastInlineDelegateProperty_            OnTick;                                            // 0x50(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst)
	FMulticastInlineDelegateProperty_            OnCompleted;                                       // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A00[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UThreadAsyncExecTick* GetDefaultObj();

	class UThreadAsyncExecTick* OnTick__DelegateSignature(float DeltaSeconds);
	class UThreadAsyncExecTick* CreateThreadExecTick();
	void BreakNextTick();
};

// 0x0 (0x38 - 0x38)
// Class ThreadExecutionBlueprintNode.ThreadExecDeveloperSettings
class UThreadExecDeveloperSettings : public UDeveloperSettings
{
public:

	static class UClass* StaticClass();
	static class UThreadExecDeveloperSettings* GetDefaultObj();

	class UThreadExecDeveloperSettings* Get();
};

// 0x78 (0xA8 - 0x30)
// Class ThreadExecutionBlueprintNode.ThreadNodeSubsystem
class UThreadNodeSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_1A24[0x78];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UThreadNodeSubsystem* GetDefaultObj();

	TSet<class UThreadAsyncExecTick*> GetAllThreadExecTicks();
	TSet<class UThreadAsyncExecOnce*> GetAllThreadExecOnces();
	TSet<class UThreadAsyncExecBase*> GetAllThreadExecNodes();
	TSet<class UThreadAsyncExecLoop*> GetAllThreadExecLoops();
	TSet<class UMutex*> GetAllMutexes();
	void DestoryMutex(class UMutex* Mutex);
	class UMutex* CreateNewMutex();
};

}


