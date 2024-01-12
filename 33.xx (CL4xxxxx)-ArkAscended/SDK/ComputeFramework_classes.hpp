#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ComputeFramework.ComputeDataInterface
class UComputeDataInterface : public UObject
{
public:

	static class UClass* StaticClass();
	static class UComputeDataInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ComputeFramework.ComputeDataProvider
class UComputeDataProvider : public UObject
{
public:

	static class UClass* StaticClass();
	static class UComputeDataProvider* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class ComputeFramework.ComputeKernelSource
class UComputeKernelSource : public UObject
{
public:
	class FString                                EntryPoint;                                        // 0x28(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FIntVector                            GroupSize;                                         // 0x38(0xC)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_216[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FComputeKernelPermutationSet          PermutationSet;                                    // 0x48(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FComputeKernelDefinitionSet           DefinitionsSet;                                    // 0x58(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UComputeSource*>                AdditionalSources;                                 // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FShaderFunctionDefinition>     ExternalInputs;                                    // 0x78(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FShaderFunctionDefinition>     ExternalOutputs;                                   // 0x88(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UComputeKernelSource* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class ComputeFramework.ComputeSource
class UComputeSource : public UObject
{
public:
	TArray<class UComputeSource*>                AdditionalSources;                                 // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UComputeSource* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class ComputeFramework.ComputeGraph
class UComputeGraph : public UObject
{
public:
	TArray<class UComputeKernel*>                KernelInvocations;                                 // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UComputeDataInterface*>         DataInterfaces;                                    // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FComputeGraphEdge>             GraphEdges;                                        // 0x48(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UClass*>                        Bindings;                                          // 0x58(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<int32>                                DataInterfaceToBinding;                            // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_21C[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UComputeGraph* GetDefaultObj();

};

// 0x20 (0xD8 - 0xB8)
// Class ComputeFramework.ComputeGraphComponent
class UComputeGraphComponent : public UActorComponent
{
public:
	class UComputeGraph*                         ComputeGraph;                                      // 0xB8(0x8)(ConstParm, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst)
	struct FComputeGraphInstance                 ComputeGraphInstance;                              // 0xC0(0x18)(ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient)

	static class UClass* StaticClass();
	static class UComputeGraphComponent* GetDefaultObj();

	void QueueExecute();
	void DestroyDataProviders();
	class UObject* CreateDataProviders();
};

// 0x10 (0x38 - 0x28)
// Class ComputeFramework.ComputeKernel
class UComputeKernel : public UObject
{
public:
	class UComputeKernelSource*                  KernelSource;                                      // 0x28(0x8)(Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        KernelFlags;                                       // 0x30(0x4)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_224[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UComputeKernel* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class ComputeFramework.ComputeKernelFromText
class UComputeKernelFromText : public UComputeKernelSource
{
public:
	struct FFilePath                             SourceFile;                                        // 0x98(0x10)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UComputeKernelFromText* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class ComputeFramework.ComputeSourceFromText
class UComputeSourceFromText : public UComputeSource
{
public:
	struct FFilePath                             SourceFile;                                        // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UComputeSourceFromText* GetDefaultObj();

};

}


