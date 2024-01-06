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
	uint8                                        Pad_CAD[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigVMRuntimeSettings                 VMRuntimeSettings;                                 // 0x30(0x18)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CAE[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	class URigVM*                                VM;                                                // 0x58(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	struct FRigVMDrawContainer                   DrawContainer;                                     // 0x60(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CB0[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          EventQueue;                                        // 0x90(0x10)(ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CB1[0x90];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x130(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_CB2[0x40];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigVMHost* GetDefaultObj();

	class FName SupportsEvent(bool* ReturnValue);
	class FString SetVariableFromString(bool* ReturnValue);
	float SetFramesPerSecond();
	float SetDeltaTime();
	bool SetAbsoluteTime();
	float SetAbsoluteAndDeltaTime();
	int32 RequestRunOnceEvent();
	void RequestInit();
	class FName RemoveRunOnceEvent(bool* ReturnValue);
	void GetVM(class URigVM** ReturnValue);
	class FName GetVariableType(class FName* ReturnValue);
	class FName GetVariableAsString(class FString* ReturnValue);
	void GetSupportedEvents(TArray<class FName>* ReturnValue);
	void GetScriptAccessibleVariables(TArray<class FName>* ReturnValue);
	void GetDeltaTime(float* ReturnValue);
	void GetCurrentFramesPerSecond(float* ReturnValue);
	void GetAbsoluteTime(float* ReturnValue);
	class UClass* FindRigVMHosts(class UObject* Outer, TArray<class URigVMHost*>* ReturnValue);
	class FName ExecuteEvent(bool* ReturnValue);
	class FName Execute(bool* ReturnValue);
	void CanExecute(bool* ReturnValue);
};

// 0x30 (0x3A0 - 0x370)
// Class RigVM.RigVMBlueprintGeneratedClass
class URigVMBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	uint8                                        Pad_CBA[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigVMGraphFunctionStore              GraphFunctionStore;                                // 0x378(0x20)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_CBB[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigVMBlueprintGeneratedClass* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class RigVM.RigVMUserWorkflowOptions
class URigVMUserWorkflowOptions : public UObject
{
public:
	class UObject*                               Subject;                                           // 0x28(0x8)(Net, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FRigVMUserWorkflow                    Workflow;                                          // 0x30(0x58)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_CD5[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigVMUserWorkflowOptions* GetDefaultObj();

	void RequiresDialog(bool* ReturnValue);
	class FString ReportWarning();
	class FString ReportInfo();
	class FString ReportError();
	void IsValid(bool* ReturnValue);
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
	class URigVMMemoryStorage*                   WorkMemoryStorageObject;                           // 0x28(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class URigVMMemoryStorage*                   LiteralMemoryStorageObject;                        // 0x30(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class URigVMMemoryStorage*                   DebugMemoryStorageObject;                          // 0x38(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_D62[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigVMByteCode                        ByteCodeStorage;                                   // 0x60(0x90)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_D63[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigVMInstructionArray                Instructions;                                      // 0xF8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	struct FRigVMExtendedExecuteContext          Context;                                           // 0x108(0x108)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint32                                       NumExecutions;                                     // 0x210(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_D66[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          FunctionNamesStorage;                              // 0x218(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_D69[0x38];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigVMParameter>               Parameters;                                        // 0x260(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FName, int32>                     ParametersNameMap;                                 // 0x270(0x50)(BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_D6A[0xE8];                                     // Fixing Size After Last Property  > TateDumper <
	class URigVM*                                DeferredVMToCopy;                                  // 0x3A8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_D6B[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigVM* GetDefaultObj();

	struct FVector2D SetParameterValueVector2D(int32* InArrayIndex);
	struct FVector SetParameterValueVector(int32* InArrayIndex);
	struct FTransform SetParameterValueTransform(int32* InArrayIndex);
	class FString SetParameterValueString(int32* InArrayIndex);
	struct FQuat SetParameterValueQuat(int32* InArrayIndex);
	class FName SetParameterValueName(int32* InArrayIndex);
	int32 SetParameterValueInt(int32* InArrayIndex);
	float SetParameterValueFloat(int32* InArrayIndex);
	double SetParameterValueDouble(int32* InArrayIndex);
	bool SetParameterValueBool(int32* InArrayIndex);
	void GetStatistics(struct FRigVMStatistics* ReturnValue);
	void GetRigVMFunctionName(int32* InFunctionIndex, class FString* ReturnValue);
	class FName GetParameterValueVector2D(int32* InArrayIndex, struct FVector2D* ReturnValue);
	class FName GetParameterValueVector(int32* InArrayIndex, struct FVector* ReturnValue);
	class FName GetParameterValueTransform(int32* InArrayIndex, struct FTransform* ReturnValue);
	class FName GetParameterValueString(int32* InArrayIndex, class FString* ReturnValue);
	class FName GetParameterValueQuat(int32* InArrayIndex, struct FQuat* ReturnValue);
	class FName GetParameterValueName(int32* InArrayIndex, class FName* ReturnValue);
	class FName GetParameterValueInt(int32* InArrayIndex, int32* ReturnValue);
	class FName GetParameterValueFloat(int32* InArrayIndex, float* ReturnValue);
	class FName GetParameterValueDouble(int32* InArrayIndex, double* ReturnValue);
	class FName GetParameterValueBool(int32* InArrayIndex, bool* ReturnValue);
	void Execute(class FName* InEntryName, bool* ReturnValue);
	void AddRigVMFunction(class UScriptStruct** InRigVMStruct, class FName* InMethodName, int32* ReturnValue);
};

// 0x40 (0x260 - 0x220)
// Class RigVM.RigVMMemoryStorageGeneratorClass
class URigVMMemoryStorageGeneratorClass : public UClass
{
public:
	uint8                                        Pad_D76[0x40];                                     // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_D78[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigVMNativized* GetDefaultObj();

};

}


