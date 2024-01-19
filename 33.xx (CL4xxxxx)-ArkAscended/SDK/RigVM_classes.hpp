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
	uint8                                        Pad_D88[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigVMRuntimeSettings                 VMRuntimeSettings;                                 // 0x30(0x18)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D89[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	class URigVM*                                VM;                                                // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FRigVMDrawContainer                   DrawContainer;                                     // 0x60(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D8B[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          EventQueue;                                        // 0x90(0x10)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D8D[0x90];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x130(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_D8E[0x40];                                     // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_D94[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigVMGraphFunctionStore              GraphFunctionStore;                                // 0x378(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_D95[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigVMBlueprintGeneratedClass* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class RigVM.RigVMUserWorkflowOptions
class URigVMUserWorkflowOptions : public UObject
{
public:
	class UObject*                               Subject;                                           // 0x28(0x8)(ExportObject, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	struct FRigVMUserWorkflow                    Workflow;                                          // 0x30(0x58)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_DA2[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigVMUserWorkflowOptions* GetDefaultObj();

	void RequiresDialog(bool ReturnValue);
	class FString ReportWarning();
	class FString ReportInfo();
	class FString ReportError();
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
	class URigVMMemoryStorage*                   WorkMemoryStorageObject;                           // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class URigVMMemoryStorage*                   LiteralMemoryStorageObject;                        // 0x30(0x8)(Edit, ExportObject, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class URigVMMemoryStorage*                   DebugMemoryStorageObject;                          // 0x38(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_E2B[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRigVMByteCode                        ByteCodeStorage;                                   // 0x60(0x90)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_E2D[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRigVMInstructionArray                Instructions;                                      // 0xF8(0x10)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	struct FRigVMExtendedExecuteContext          Context;                                           // 0x108(0x108)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint32                                       NumExecutions;                                     // 0x210(0x4)(Edit, ConstParm, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_E2E[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          FunctionNamesStorage;                              // 0x218(0x10)(Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_E30[0x38];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FRigVMParameter>               Parameters;                                        // 0x260(0x10)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FName, int32>                     ParametersNameMap;                                 // 0x270(0x50)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_E31[0xE8];                                     // Fixing Size After Last Property  > TateDumper <
	class URigVM*                                DeferredVMToCopy;                                  // 0x3A8(0x8)(Edit, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_E33[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigVM* GetDefaultObj();

	int32 SetParameterValueVector2D();
	int32 SetParameterValueVector();
	int32 SetParameterValueTransform();
	int32 SetParameterValueString();
	int32 SetParameterValueQuat();
	int32 SetParameterValueName();
	int32 SetParameterValueInt();
	int32 SetParameterValueFloat();
	int32 SetParameterValueDouble();
	int32 SetParameterValueBool();
	void GetStatistics(const struct FRigVMStatistics& ReturnValue);
	int32 GetRigVMFunctionName(const class FString& ReturnValue);
	int32 GetParameterValueVector2D(const struct FVector2D& ReturnValue);
	int32 GetParameterValueVector(const struct FVector& ReturnValue);
	int32 GetParameterValueTransform(const struct FTransform& ReturnValue);
	int32 GetParameterValueString(const class FString& ReturnValue);
	int32 GetParameterValueQuat(const struct FQuat& ReturnValue);
	int32 GetParameterValueName(class FName ReturnValue);
	int32 GetParameterValueInt(int32 ReturnValue);
	int32 GetParameterValueFloat(float ReturnValue);
	int32 GetParameterValueDouble(double ReturnValue);
	int32 GetParameterValueBool(bool ReturnValue);
	class FName Execute(bool ReturnValue);
	class FName AddRigVMFunction(int32 ReturnValue);
};

// 0x40 (0x260 - 0x220)
// Class RigVM.RigVMMemoryStorageGeneratorClass
class URigVMMemoryStorageGeneratorClass : public UClass
{
public:
	uint8                                        Pad_E3B[0x40];                                     // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_E41[0x28];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class URigVMNativized* GetDefaultObj();

};

}


