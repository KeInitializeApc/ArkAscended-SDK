#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x180 - 0x28)
// Class RigVM.RigVMHost
class URigVMHost : public UObject
{
public:
	uint8                                        Pad_102F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigVMRuntimeSettings                 VMRuntimeSettings;                                 // 0x30(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1030[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	class URigVM*                                VM;                                                // 0x58(0x8)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FRigVMDrawContainer                   DrawContainer;                                     // 0x60(0x18)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1033[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          EventQueue;                                        // 0x90(0x10)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1035[0x90];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x130(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_1036[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigVMHost* GetDefaultObj();

	bool SupportsEvent();
	bool SetVariableFromString();
	float SetFramesPerSecond();
	float SetDeltaTime();
	bool SetAbsoluteTime();
	float SetAbsoluteAndDeltaTime();
	int32 RequestRunOnceEvent();
	void RequestInit();
	bool RemoveRunOnceEvent();
	class URigVM* GetVM();
	class FName GetVariableType();
	class FString GetVariableAsString();
	TArray<class FName> GetSupportedEvents();
	TArray<class FName> GetScriptAccessibleVariables();
	float GetDeltaTime();
	float GetCurrentFramesPerSecond();
	float GetAbsoluteTime();
	TArray<class URigVMHost*> FindRigVMHosts(class UObject* Outer);
	bool ExecuteEvent();
	bool Execute();
	bool CanExecute();
};

// 0x30 (0x3A0 - 0x370)
// Class RigVM.RigVMBlueprintGeneratedClass
class URigVMBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	uint8                                        Pad_1039[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigVMGraphFunctionStore              GraphFunctionStore;                                // 0x378(0x20)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_103A[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigVMBlueprintGeneratedClass* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class RigVM.RigVMUserWorkflowOptions
class URigVMUserWorkflowOptions : public UObject
{
public:
	class UObject*                               Subject;                                           // 0x28(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FRigVMUserWorkflow                    Workflow;                                          // 0x30(0x58)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10AD[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigVMUserWorkflowOptions* GetDefaultObj();

	bool RequiresDialog();
	void ReportWarning(class FString* InMessage);
	void ReportInfo(class FString* InMessage);
	void ReportError(class FString* InMessage);
	bool IsValid();
};

// 0x0 (0x28 - 0x28)
// Class RigVM.RigVMGraphFunctionHost
class IRigVMGraphFunctionHost : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IRigVMGraphFunctionHost* GetDefaultObj();

};

// 0x3A0 (0x3C8 - 0x28)
// Class RigVM.RigVM
class URigVM : public UObject
{
public:
	class URigVMMemoryStorage*                   WorkMemoryStorageObject;                           // 0x28(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class URigVMMemoryStorage*                   LiteralMemoryStorageObject;                        // 0x30(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class URigVMMemoryStorage*                   DebugMemoryStorageObject;                          // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1141[0x20];                                    // Fixing Size After Last Property  > TateDumper <
	struct FRigVMByteCode                        ByteCodeStorage;                                   // 0x60(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1149[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigVMInstructionArray                Instructions;                                      // 0xF8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	struct FRigVMExtendedExecuteContext          Context;                                           // 0x108(0x108)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint32                                       NumExecutions;                                     // 0x210(0x4)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_114E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          FunctionNamesStorage;                              // 0x218(0x10)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_114F[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigVMParameter>               Parameters;                                        // 0x260(0x10)(BlueprintVisible, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FName, int32>                     ParametersNameMap;                                 // 0x270(0x50)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1151[0xE8];                                    // Fixing Size After Last Property  > TateDumper <
	class URigVM*                                DeferredVMToCopy;                                  // 0x3A8(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1152[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigVM* GetDefaultObj();

	int32 SetParameterValueVector2D(class FName InParameterName);
	int32 SetParameterValueVector(class FName InParameterName);
	int32 SetParameterValueTransform(class FName InParameterName);
	int32 SetParameterValueString(class FName InParameterName);
	int32 SetParameterValueQuat(class FName InParameterName);
	int32 SetParameterValueName(class FName InParameterName);
	int32 SetParameterValueInt(class FName InParameterName);
	int32 SetParameterValueFloat(class FName InParameterName);
	int32 SetParameterValueDouble(class FName InParameterName);
	int32 SetParameterValueBool(class FName InParameterName);
	struct FRigVMStatistics GetStatistics();
	class FString GetRigVMFunctionName();
	struct FVector2D GetParameterValueVector2D(class FName InParameterName);
	struct FVector GetParameterValueVector(class FName InParameterName);
	struct FTransform GetParameterValueTransform(class FName InParameterName);
	class FString GetParameterValueString(class FName InParameterName);
	struct FQuat GetParameterValueQuat(class FName InParameterName);
	class FName GetParameterValueName(class FName InParameterName);
	int32 GetParameterValueInt(class FName InParameterName);
	float GetParameterValueFloat(class FName InParameterName);
	double GetParameterValueDouble(class FName InParameterName);
	bool GetParameterValueBool(class FName InParameterName);
	bool Execute();
	int32 AddRigVMFunction();
};

// 0x40 (0x260 - 0x220)
// Class RigVM.RigVMMemoryStorageGeneratorClass
class URigVMMemoryStorageGeneratorClass : public UClass
{
public:
	uint8                                        Pad_115B[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigVMMemoryStorageGeneratorClass* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class RigVM.RigVMMemoryStorage
class URigVMMemoryStorage : public UObject
{
public:

	static class UClass* StaticClass();
	static class URigVMMemoryStorage* GetDefaultObj();

};

// 0x28 (0x3F0 - 0x3C8)
// Class RigVM.RigVMNativized
class URigVMNativized : public URigVM
{
public:
	uint8                                        Pad_115E[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigVMNativized* GetDefaultObj();

};

}


