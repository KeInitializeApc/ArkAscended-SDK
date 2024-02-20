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
	uint8                                        Pad_C40[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigVMRuntimeSettings                 VMRuntimeSettings;                                 // 0x30(0x18)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_C41[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	class URigVM*                                VM;                                                // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FRigVMDrawContainer                   DrawContainer;                                     // 0x60(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_C42[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          EventQueue;                                        // 0x90(0x10)(ConstParm, ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_C43[0x90];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x130(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_C44[0x40];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigVMHost* GetDefaultObj();

	class FName SupportsEvent(bool ReturnValue);
	class FString SetVariableFromString(bool ReturnValue);
	float SetFramesPerSecond();
	float SetDeltaTime();
	bool SetAbsoluteTime();
	float SetAbsoluteAndDeltaTime();
	int32 RequestRunOnceEvent();
	void RequestInit();
	class FName RemoveRunOnceEvent(bool ReturnValue);
	void GetVM(class URigVM* ReturnValue);
	class FName GetVariableType(class FName ReturnValue);
	class FName GetVariableAsString(const class FString& ReturnValue);
	void GetSupportedEvents(const TArray<class FName>& ReturnValue);
	void GetScriptAccessibleVariables(const TArray<class FName>& ReturnValue);
	void GetDeltaTime(float ReturnValue);
	void GetCurrentFramesPerSecond(float ReturnValue);
	void GetAbsoluteTime(float ReturnValue);
	class UClass* FindRigVMHosts(class UObject* Outer, const TArray<class URigVMHost*>& ReturnValue);
	class FName ExecuteEvent(bool ReturnValue);
	class FName Execute(bool ReturnValue);
	void CanExecute(bool ReturnValue);
};

// 0x30 (0x3A0 - 0x370)
// Class RigVM.RigVMBlueprintGeneratedClass
class URigVMBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	uint8                                        Pad_C4C[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigVMGraphFunctionStore              GraphFunctionStore;                                // 0x378(0x20)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_C4D[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigVMBlueprintGeneratedClass* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class RigVM.RigVMUserWorkflowOptions
class URigVMUserWorkflowOptions : public UObject
{
public:
	class UObject*                               Subject;                                           // 0x28(0x8)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FRigVMUserWorkflow                    Workflow;                                          // 0x30(0x58)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_C5C[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigVMUserWorkflowOptions* GetDefaultObj();

	void RequiresDialog(bool ReturnValue);
	void ReportWarning(class FString* InMessage);
	void ReportInfo(class FString* InMessage);
	void ReportError(class FString* InMessage);
	void IsValid(bool ReturnValue);
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
	class URigVMMemoryStorage*                   WorkMemoryStorageObject;                           // 0x28(0x8)(BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class URigVMMemoryStorage*                   LiteralMemoryStorageObject;                        // 0x30(0x8)(ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class URigVMMemoryStorage*                   DebugMemoryStorageObject;                          // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_CF5[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigVMByteCode                        ByteCodeStorage;                                   // 0x60(0x90)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_CF7[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigVMInstructionArray                Instructions;                                      // 0xF8(0x10)(BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FRigVMExtendedExecuteContext          Context;                                           // 0x108(0x108)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	uint32                                       NumExecutions;                                     // 0x210(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_CF9[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          FunctionNamesStorage;                              // 0x218(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_CFB[0x38];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigVMParameter>               Parameters;                                        // 0x260(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FName, int32>                     ParametersNameMap;                                 // 0x270(0x50)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_CFD[0xE8];                                     // Fixing Size After Last Property  > TateDumper <
	class URigVM*                                DeferredVMToCopy;                                  // 0x3A8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_CFE[0x18];                                     // Fixing Size Of Struct > TateDumper <

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
	void GetStatistics(const struct FRigVMStatistics& ReturnValue);
	int32 GetRigVMFunctionName(const class FString& ReturnValue);
	int32 GetParameterValueVector2D(class FName InParameterName, const struct FVector2D& ReturnValue);
	int32 GetParameterValueVector(class FName InParameterName, const struct FVector& ReturnValue);
	int32 GetParameterValueTransform(class FName InParameterName, const struct FTransform& ReturnValue);
	int32 GetParameterValueString(class FName InParameterName, const class FString& ReturnValue);
	int32 GetParameterValueQuat(class FName InParameterName, const struct FQuat& ReturnValue);
	int32 GetParameterValueName(class FName InParameterName, class FName ReturnValue);
	int32 GetParameterValueInt(class FName InParameterName, int32 ReturnValue);
	int32 GetParameterValueFloat(class FName InParameterName, float ReturnValue);
	int32 GetParameterValueDouble(class FName InParameterName, double ReturnValue);
	int32 GetParameterValueBool(class FName InParameterName, bool ReturnValue);
	class FName Execute(bool ReturnValue);
	class FName AddRigVMFunction(int32 ReturnValue);
};

// 0x40 (0x260 - 0x220)
// Class RigVM.RigVMMemoryStorageGeneratorClass
class URigVMMemoryStorageGeneratorClass : public UClass
{
public:
	uint8                                        Pad_D04[0x40];                                     // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_D0C[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigVMNativized* GetDefaultObj();

};

}


