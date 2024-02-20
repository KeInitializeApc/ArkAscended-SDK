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
	uint8                                        Pad_48E[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMutex* GetDefaultObj();

	void UnLock();
	void TryLock(bool ReturnValue);
	void Lock();
};

// 0x20 (0x50 - 0x30)
// Class ThreadExecutionBlueprintNode.ThreadAsyncExecBase
class UThreadAsyncExecBase : public UBlueprintAsyncActionBase
{
public:
	uint8                                        Pad_490[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UThreadAsyncExecBase* GetDefaultObj();

};

// 0x18 (0x68 - 0x50)
// Class ThreadExecutionBlueprintNode.ThreadAsyncExecLoop
class UThreadAsyncExecLoop : public UThreadAsyncExecBase
{
public:
	FMulticastInlineDelegateProperty_            OnCompleted;                                       // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_497[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UThreadAsyncExecLoop* GetDefaultObj();

	bool CreateThreadExecLoop(float Interval, class UThreadAsyncExecLoop* ReturnValue);
};

// 0x10 (0x40 - 0x30)
// Class ThreadExecutionBlueprintNode.SyncExecOnce
class USyncExecOnce : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnExecution;                                       // 0x30(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USyncExecOnce* GetDefaultObj();

	void CreateSyncExecOnce(class USyncExecOnce* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary
class UThreadAsyncExecLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UThreadAsyncExecLibrary* GetDefaultObj();

	float ThreadWait();
	class UThreadAsyncExecTick* SetTickableWhenPaused(bool* NewValue);
	class UThreadAsyncExecTick* SetTickable(bool* NewValue);
	class UThreadAsyncExecTick* IsTickableWhenPaused(bool ReturnValue);
	class UThreadAsyncExecTick* IsTickable(bool ReturnValue);
	void IsGameThread(bool ReturnValue);
	void GetCurrentThreadName(const class FString& ReturnValue);
	void GetCurrentThreadID(int32 ReturnValue);
	bool ExecIsGameThread();
	class UThreadAsyncExecTick* BreakNextTick();
	class UThreadAsyncExecLoop* BreakNextLoop();
};

// 0x28 (0x78 - 0x50)
// Class ThreadExecutionBlueprintNode.ThreadAsyncExecOnce
class UThreadAsyncExecOnce : public UThreadAsyncExecBase
{
public:
	uint8                                        Pad_4C1[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnExecution;                                       // 0x58(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnCompleted;                                       // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UThreadAsyncExecOnce* GetDefaultObj();

	bool CreateThreadExecOnce(class UThreadAsyncExecOnce* ReturnValue);
};

// 0x38 (0x88 - 0x50)
// Class ThreadExecutionBlueprintNode.ThreadAsyncExecTick
class UThreadAsyncExecTick : public UThreadAsyncExecBase
{
public:
	FMulticastInlineDelegateProperty_            OnTick;                                            // 0x50(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst)
	FMulticastInlineDelegateProperty_            OnCompleted;                                       // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_4C7[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UThreadAsyncExecTick* GetDefaultObj();

	class UThreadAsyncExecTick* OnTick__DelegateSignature();
	bool CreateThreadExecTick(class UThreadAsyncExecTick* ReturnValue);
	void BreakNextTick();
};

// 0x0 (0x38 - 0x38)
// Class ThreadExecutionBlueprintNode.ThreadExecDeveloperSettings
class UThreadExecDeveloperSettings : public UDeveloperSettings
{
public:

	static class UClass* StaticClass();
	static class UThreadExecDeveloperSettings* GetDefaultObj();

	void Get(class UThreadExecDeveloperSettings* ReturnValue);
};

// 0x78 (0xA8 - 0x30)
// Class ThreadExecutionBlueprintNode.ThreadNodeSubsystem
class UThreadNodeSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_4D7[0x78];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UThreadNodeSubsystem* GetDefaultObj();

	void GetAllThreadExecTicks(TSet<class UThreadAsyncExecTick*> ReturnValue);
	void GetAllThreadExecOnces(TSet<class UThreadAsyncExecOnce*> ReturnValue);
	void GetAllThreadExecNodes(TSet<class UThreadAsyncExecBase*> ReturnValue);
	void GetAllThreadExecLoops(TSet<class UThreadAsyncExecLoop*> ReturnValue);
	void GetAllMutexes(TSet<class UMutex*> ReturnValue);
	void DestoryMutex(class UMutex* Mutex);
	void CreateNewMutex(class UMutex* ReturnValue);
};

}


