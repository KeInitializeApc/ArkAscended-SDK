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

// 0x1 (0x1 - 0x0)
// Function ThreadExecutionBlueprintNode.Mutex.TryLock
struct UMutex_TryLock_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLoop.CreateThreadExecLoop
struct UThreadAsyncExecLoop_CreateThreadExecLoop_Params
{
public:
	float                                        Interval;                                          // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bLongTask;                                         // 0x4(0x1)(EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_E96[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UThreadAsyncExecLoop*                  ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ThreadExecutionBlueprintNode.SyncExecOnce.CreateSyncExecOnce
struct USyncExecOnce_CreateSyncExecOnce_Params
{
public:
	class USyncExecOnce*                         ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.ThreadWait
struct UThreadAsyncExecLibrary_ThreadWait_Params
{
public:
	float                                        Seconds;                                           // 0x0(0x4)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.SetTickableWhenPaused
struct UThreadAsyncExecLibrary_SetTickableWhenPaused_Params
{
public:
	class UThreadAsyncExecTick*                  TickHandle;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         NewValue;                                          // 0x8(0x1)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_EBA[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.SetTickable
struct UThreadAsyncExecLibrary_SetTickable_Params
{
public:
	class UThreadAsyncExecTick*                  TickHandle;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         NewValue;                                          // 0x8(0x1)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_EC5[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.IsTickableWhenPaused
struct UThreadAsyncExecLibrary_IsTickableWhenPaused_Params
{
public:
	class UThreadAsyncExecTick*                  TickHandle;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_ED3[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.IsTickable
struct UThreadAsyncExecLibrary_IsTickable_Params
{
public:
	class UThreadAsyncExecTick*                  TickHandle;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_EDD[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.IsGameThread
struct UThreadAsyncExecLibrary_IsGameThread_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.GetCurrentThreadName
struct UThreadAsyncExecLibrary_GetCurrentThreadName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.GetCurrentThreadID
struct UThreadAsyncExecLibrary_GetCurrentThreadID_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.ExecIsGameThread
struct UThreadAsyncExecLibrary_ExecIsGameThread_Params
{
public:
	bool                                         bIsInGameThread;                                   // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.BreakNextTick
struct UThreadAsyncExecLibrary_BreakNextTick_Params
{
public:
	class UThreadAsyncExecTick*                  TickHandle;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.BreakNextLoop
struct UThreadAsyncExecLibrary_BreakNextLoop_Params
{
public:
	class UThreadAsyncExecLoop*                  LoopHandle;                                        // 0x0(0x8)(ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecOnce.CreateThreadExecOnce
struct UThreadAsyncExecOnce_CreateThreadExecOnce_Params
{
public:
	bool                                         bLongTask;                                         // 0x0(0x1)(EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_EF8[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UThreadAsyncExecOnce*                  ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction ThreadExecutionBlueprintNode.ThreadAsyncExecTick.OnTick__DelegateSignature
struct UThreadAsyncExecTick_OnTick__DelegateSignature_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_F01[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UThreadAsyncExecTick*                  TickHandle;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadAsyncExecTick.CreateThreadExecTick
struct UThreadAsyncExecTick_CreateThreadExecTick_Params
{
public:
	bool                                         bLongTask;                                         // 0x0(0x1)(EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_F08[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UThreadAsyncExecTick*                  ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadExecDeveloperSettings.Get
struct UThreadExecDeveloperSettings_Get_Params
{
public:
	class UThreadExecDeveloperSettings*          ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecTicks
struct UThreadNodeSubsystem_GetAllThreadExecTicks_Params
{
public:
	TSet<class UThreadAsyncExecTick*>            ReturnValue;                                       // 0x0(0x50)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecOnces
struct UThreadNodeSubsystem_GetAllThreadExecOnces_Params
{
public:
	TSet<class UThreadAsyncExecOnce*>            ReturnValue;                                       // 0x0(0x50)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecNodes
struct UThreadNodeSubsystem_GetAllThreadExecNodes_Params
{
public:
	TSet<class UThreadAsyncExecBase*>            ReturnValue;                                       // 0x0(0x50)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecLoops
struct UThreadNodeSubsystem_GetAllThreadExecLoops_Params
{
public:
	TSet<class UThreadAsyncExecLoop*>            ReturnValue;                                       // 0x0(0x50)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllMutexes
struct UThreadNodeSubsystem_GetAllMutexes_Params
{
public:
	TSet<class UMutex*>                          ReturnValue;                                       // 0x0(0x50)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.DestoryMutex
struct UThreadNodeSubsystem_DestoryMutex_Params
{
public:
	class UMutex*                                Mutex;                                             // 0x0(0x8)(ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
};

// 0x8 (0x8 - 0x0)
// Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.CreateNewMutex
struct UThreadNodeSubsystem_CreateNewMutex_Params
{
public:
	class UMutex*                                ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


