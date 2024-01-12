#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusComputeDataInterface
class UOptimusComputeDataInterface : public UComputeDataInterface
{
public:

	static class UClass* StaticClass();
	static class UOptimusComputeDataInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusComponentSource
class UOptimusComponentSource : public UObject
{
public:

	static class UClass* StaticClass();
	static class UOptimusComponentSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusComponentBindingProvider
class IOptimusComponentBindingProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IOptimusComponentBindingProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusComputeKernelProvider
class IOptimusComputeKernelProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IOptimusComputeKernelProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusDataInterfaceProvider
class IOptimusDataInterfaceProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IOptimusDataInterfaceProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusExecutionDomainProvider
class IOptimusExecutionDomainProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IOptimusExecutionDomainProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusGeneratedClassDefiner
class IOptimusGeneratedClassDefiner : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IOptimusGeneratedClassDefiner* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusNodeAdderPinProvider
class IOptimusNodeAdderPinProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IOptimusNodeAdderPinProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusNodeFunctionLibraryOwner
class IOptimusNodeFunctionLibraryOwner : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IOptimusNodeFunctionLibraryOwner* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusNodeGraphCollectionOwner
class IOptimusNodeGraphCollectionOwner : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IOptimusNodeGraphCollectionOwner* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusNodePinRouter
class IOptimusNodePinRouter : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IOptimusNodePinRouter* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusParameterBindingProvider
class IOptimusParameterBindingProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IOptimusParameterBindingProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusPathResolver
class IOptimusPathResolver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IOptimusPathResolver* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusShaderTextProvider
class IOptimusShaderTextProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IOptimusShaderTextProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusValueProvider
class IOptimusValueProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IOptimusValueProvider* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class OptimusCore.OptimusKernelSource
class UOptimusKernelSource : public UComputeKernelSource
{
public:
	class FString                                Source;                                            // 0x98(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config)

	static class UClass* StaticClass();
	static class UOptimusKernelSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusSceneComponentSource
class UOptimusSceneComponentSource : public UOptimusComponentSource
{
public:

	static class UClass* StaticClass();
	static class UOptimusSceneComponentSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusSkinnedMeshComponentSource
class UOptimusSkinnedMeshComponentSource : public UOptimusComponentSource
{
public:

	static class UClass* StaticClass();
	static class UOptimusSkinnedMeshComponentSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusSkeletalMeshComponentSource
class UOptimusSkeletalMeshComponentSource : public UOptimusSkinnedMeshComponentSource
{
public:

	static class UClass* StaticClass();
	static class UOptimusSkeletalMeshComponentSource* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class OptimusCore.OptimusAnimAttributeDataInterface
class UOptimusAnimAttributeDataInterface : public UOptimusComputeDataInterface
{
public:
	struct FOptimusAnimAttributeArray            AttributeArray;                                    // 0x28(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusAnimAttributeDataInterface* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class OptimusCore.OptimusAnimAttributeDataProvider
class UOptimusAnimAttributeDataProvider : public UComputeDataProvider
{
public:
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x28(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_700[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusAnimAttributeDataProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusClothDataInterface
class UOptimusClothDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass();
	static class UOptimusClothDataInterface* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class OptimusCore.OptimusClothDataProvider
class UOptimusClothDataProvider : public UComputeDataProvider
{
public:
	class USkinnedMeshComponent*                 SkinnedMesh;                                       // 0x28(0x8)(Edit, Net, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusClothDataProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusConnectivityDataInterface
class UOptimusConnectivityDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass();
	static class UOptimusConnectivityDataInterface* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class OptimusCore.OptimusConnectivityDataProvider
class UOptimusConnectivityDataProvider : public UComputeDataProvider
{
public:
	class USkinnedMeshComponent*                 SkinnedMesh;                                       // 0x28(0x8)(Edit, Net, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_709[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusConnectivityDataProvider* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class OptimusCore.OptimusDebugDrawDataInterface
class UOptimusDebugDrawDataInterface : public UOptimusComputeDataInterface
{
public:
	struct FOptimusDebugDrawParameters           DebugDrawParameters;                               // 0x28(0x14)(ExportObject, Net, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_70A[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusDebugDrawDataInterface* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class OptimusCore.OptimusDebugDrawDataProvider
class UOptimusDebugDrawDataProvider : public UComputeDataProvider
{
public:
	class UPrimitiveComponent*                   PrimitiveComponent;                                // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	struct FOptimusDebugDrawParameters           DebugDrawParameters;                               // 0x30(0x14)(ExportObject, Net, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_70C[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusDebugDrawDataProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusDuplicateVerticesDataInterface
class UOptimusDuplicateVerticesDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass();
	static class UOptimusDuplicateVerticesDataInterface* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class OptimusCore.OptimusDuplicateVerticesDataProvider
class UOptimusDuplicateVerticesDataProvider : public UComputeDataProvider
{
public:
	class USkinnedMeshComponent*                 SkinnedMesh;                                       // 0x28(0x8)(Edit, Net, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusDuplicateVerticesDataProvider* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class OptimusCore.OptimusGraphDataInterface
class UOptimusGraphDataInterface : public UComputeDataInterface
{
public:
	TArray<struct FOptimusGraphVariableDescription> Variables;                                         // 0x28(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	int32                                        ParameterBufferSize;                               // 0x38(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_715[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusGraphDataInterface* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class OptimusCore.OptimusGraphDataProvider
class UOptimusGraphDataProvider : public UComputeDataProvider
{
public:
	class UMeshComponent*                        MeshComponent;                                     // 0x28(0x8)(BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, EditConst)
	class UOptimusDeformerInstance*              DeformerInstance;                                  // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FOptimusGraphVariableDescription> Variables;                                         // 0x38(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	uint8                                        Pad_717[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusGraphDataProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusHalfEdgeDataInterface
class UOptimusHalfEdgeDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass();
	static class UOptimusHalfEdgeDataInterface* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class OptimusCore.OptimusHalfEdgeDataProvider
class UOptimusHalfEdgeDataProvider : public UComputeDataProvider
{
public:
	class USkinnedMeshComponent*                 SkinnedMesh;                                       // 0x28(0x8)(Edit, Net, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_71A[0x20];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusHalfEdgeDataProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusMorphTargetDataInterface
class UOptimusMorphTargetDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass();
	static class UOptimusMorphTargetDataInterface* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class OptimusCore.OptimusMorphTargetDataProvider
class UOptimusMorphTargetDataProvider : public UComputeDataProvider
{
public:
	class USkinnedMeshComponent*                 SkinnedMesh;                                       // 0x28(0x8)(Edit, Net, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusMorphTargetDataProvider* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class OptimusCore.OptimusRawBufferDataInterface
class UOptimusRawBufferDataInterface : public UOptimusComputeDataInterface
{
public:
	struct FShaderValueTypeHandle                ValueType;                                         // 0x28(0x8)(Edit, ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FOptimusDataDomain                    DataDomain;                                        // 0x30(0x40)(Edit, ExportObject, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class UOptimusComponentSourceBinding> ComponentSourceBinding;                            // 0x70(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusRawBufferDataInterface* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class OptimusCore.OptimusTransientBufferDataInterface
class UOptimusTransientBufferDataInterface : public UOptimusRawBufferDataInterface
{
public:

	static class UClass* StaticClass();
	static class UOptimusTransientBufferDataInterface* GetDefaultObj();

};

// 0x8 (0x80 - 0x78)
// Class OptimusCore.OptimusPersistentBufferDataInterface
class UOptimusPersistentBufferDataInterface : public UOptimusRawBufferDataInterface
{
public:
	class FName                                  ResourceName;                                      // 0x78(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusPersistentBufferDataInterface* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class OptimusCore.OptimusRawBufferDataProvider
class UOptimusRawBufferDataProvider : public UComputeDataProvider
{
public:
	TWeakObjectPtr<class UActorComponent>        Component;                                         // 0x28(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	TWeakObjectPtr<class UOptimusComponentSource> ComponentSource;                                   // 0x30(0x8)(Edit, Net, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	struct FOptimusDataDomain                    DataDomain;                                        // 0x38(0x40)(Edit, ExportObject, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	int32                                        ElementStride;                                     // 0x78(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	int32                                        RawStride;                                         // 0x7C(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusRawBufferDataProvider* GetDefaultObj();

};

// 0x0 (0x80 - 0x80)
// Class OptimusCore.OptimusTransientBufferDataProvider
class UOptimusTransientBufferDataProvider : public UOptimusRawBufferDataProvider
{
public:

	static class UClass* StaticClass();
	static class UOptimusTransientBufferDataProvider* GetDefaultObj();

};

// 0x18 (0x98 - 0x80)
// Class OptimusCore.OptimusPersistentBufferDataProvider
class UOptimusPersistentBufferDataProvider : public UOptimusRawBufferDataProvider
{
public:
	uint8                                        Pad_73B[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusPersistentBufferDataProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusSceneDataInterface
class UOptimusSceneDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass();
	static class UOptimusSceneDataInterface* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class OptimusCore.OptimusSceneDataProvider
class UOptimusSceneDataProvider : public UComputeDataProvider
{
public:
	class USceneComponent*                       SceneComponent;                                    // 0x28(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class UOptimusSceneDataProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusSkeletonDataInterface
class UOptimusSkeletonDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass();
	static class UOptimusSkeletonDataInterface* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class OptimusCore.OptimusSkeletonDataProvider
class UOptimusSkeletonDataProvider : public UComputeDataProvider
{
public:
	class USkinnedMeshComponent*                 SkinnedMesh;                                       // 0x28(0x8)(Edit, Net, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusSkeletonDataProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusSkinnedMeshDataInterface
class UOptimusSkinnedMeshDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass();
	static class UOptimusSkinnedMeshDataInterface* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class OptimusCore.OptimusSkinnedMeshDataProvider
class UOptimusSkinnedMeshDataProvider : public UComputeDataProvider
{
public:
	class USkinnedMeshComponent*                 SkinnedMesh;                                       // 0x28(0x8)(Edit, Net, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusSkinnedMeshDataProvider* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class OptimusCore.OptimusSkinnedMeshExecDataInterface
class UOptimusSkinnedMeshExecDataInterface : public UOptimusComputeDataInterface
{
public:
	enum class EOptimusSkinnedMeshExecDomain     Domain;                                            // 0x28(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_74A[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusSkinnedMeshExecDataInterface* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class OptimusCore.OptimusSkinnedMeshExecDataProvider
class UOptimusSkinnedMeshExecDataProvider : public UComputeDataProvider
{
public:
	class USkinnedMeshComponent*                 SkinnedMesh;                                       // 0x28(0x8)(Edit, Net, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	enum class EOptimusSkinnedMeshExecDomain     Domain;                                            // 0x30(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_7A6[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusSkinnedMeshExecDataProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusSkinnedMeshWriteDataInterface
class UOptimusSkinnedMeshWriteDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass();
	static class UOptimusSkinnedMeshWriteDataInterface* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class OptimusCore.OptimusSkinnedMeshWriteDataProvider
class UOptimusSkinnedMeshWriteDataProvider : public UComputeDataProvider
{
public:
	class USkinnedMeshComponent*                 SkinnedMesh;                                       // 0x28(0x8)(Edit, Net, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_7A8[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusSkinnedMeshWriteDataProvider* GetDefaultObj();

};

// 0xE8 (0x110 - 0x28)
// Class OptimusCore.OptimusNode
class UOptimusNode : public UObject
{
public:
	uint8                                        Pad_7B1[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class FText                                  DisplayName;                                       // 0x30(0x18)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient)
	struct FVector2D                             GraphPosition;                                     // 0x48(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	TArray<class UOptimusNodePin*>               Pins;                                              // 0x58(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	TSet<class FName>                            ExpandedPins;                                      // 0x68(0x50)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	enum class EOptimusDiagnosticLevel           DiagnosticLevel;                                   // 0xB8(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_7B2[0x57];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusNode* GetDefaultObj();

	bool SetGraphPosition();
	class FName GetNodeName();
	class FName GetNodeCategory();
	struct FVector2D GetGraphPosition();
	class FText GetDisplayName();
};

// 0x18 (0x128 - 0x110)
// Class OptimusCore.OptimusNode_DataInterface
class UOptimusNode_DataInterface : public UOptimusNode
{
public:
	uint8                                        Pad_7B3[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UClass*                                DataInterfaceClass;                                // 0x118(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UOptimusComputeDataInterface*          DataInterfaceData;                                 // 0x120(0x8)(ConstParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusNode_DataInterface* GetDefaultObj();

};

// 0x0 (0x128 - 0x128)
// Class OptimusCore.OptimusNode_AnimAttributeDataInterface
class UOptimusNode_AnimAttributeDataInterface : public UOptimusNode_DataInterface
{
public:

	static class UClass* StaticClass();
	static class UOptimusNode_AnimAttributeDataInterface* GetDefaultObj();

};

// 0x10 (0x120 - 0x110)
// Class OptimusCore.OptimusNode_ComponentSource
class UOptimusNode_ComponentSource : public UOptimusNode
{
public:
	uint8                                        Pad_7B4[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UOptimusComponentSourceBinding*        Binding;                                           // 0x118(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UOptimusNode_ComponentSource* GetDefaultObj();

};

// 0x8 (0x118 - 0x110)
// Class OptimusCore.OptimusNode_ComputeKernelBase
class UOptimusNode_ComputeKernelBase : public UOptimusNode
{
public:
	uint8                                        Pad_7B5[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusNode_ComputeKernelBase* GetDefaultObj();

};

// 0x60 (0x280 - 0x220)
// Class OptimusCore.OptimusNode_ComputeKernelFunctionGeneratorClass
class UOptimusNode_ComputeKernelFunctionGeneratorClass : public UClass
{
public:
	class FName                                  Category;                                          // 0x220(0x8)(ConstParm, BlueprintReadOnly, OutParm, Transient)
	class FName                                  KernelName;                                        // 0x228(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FOptimusExecutionDomain               ExecutionDomain;                                   // 0x230(0x8)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FIntVector                            GroupSize;                                         // 0x238(0xC)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_7B6[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FOptimusParameterBinding>      InputBindings;                                     // 0x248(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FOptimusParameterBinding>      OutputBindings;                                    // 0x258(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class FString                                ShaderSource;                                      // 0x268(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_7B7[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusNode_ComputeKernelFunctionGeneratorClass* GetDefaultObj();

};

// 0x0 (0x118 - 0x118)
// Class OptimusCore.OptimusNode_ComputeKernelFunction
class UOptimusNode_ComputeKernelFunction : public UOptimusNode_ComputeKernelBase
{
public:

	static class UClass* StaticClass();
	static class UOptimusNode_ComputeKernelFunction* GetDefaultObj();

};

// 0x10 (0x230 - 0x220)
// Class OptimusCore.OptimusNode_ConstantValueGeneratorClass
class UOptimusNode_ConstantValueGeneratorClass : public UClass
{
public:
	struct FOptimusDataTypeRef                   DataType;                                          // 0x220(0x10)(BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusNode_ConstantValueGeneratorClass* GetDefaultObj();

};

// 0x10 (0x120 - 0x110)
// Class OptimusCore.OptimusNode_ConstantValue
class UOptimusNode_ConstantValue : public UOptimusNode
{
public:
	uint8                                        Pad_7B8[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusNode_ConstantValue* GetDefaultObj();

};

// 0xD8 (0x1F0 - 0x118)
// Class OptimusCore.OptimusNode_CustomComputeKernel
class UOptimusNode_CustomComputeKernel : public UOptimusNode_ComputeKernelBase
{
public:
	uint8                                        Pad_7BA[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  Category;                                          // 0x138(0x8)(ConstParm, BlueprintReadOnly, OutParm, Transient)
	struct FOptimusValidatedName                 KernelName;                                        // 0x140(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FOptimusExecutionDomain               ExecutionDomain;                                   // 0x148(0x8)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FIntVector                            GroupSize;                                         // 0x150(0xC)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_7BB[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FOptimus_ShaderBinding>        Parameters;                                        // 0x160(0x10)(BlueprintVisible, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FOptimusParameterBinding>      InputBindings;                                     // 0x170(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FOptimusParameterBinding>      OutputBindings;                                    // 0x180(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FOptimusParameterBindingArray         InputBindingArray;                                 // 0x190(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config)
	struct FOptimusParameterBindingArray         OutputBindingArray;                                // 0x1A0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config)
	TArray<struct FOptimusSecondaryInputBindingsGroup> SecondaryInputBindingGroups;                       // 0x1B0(0x10)(Edit, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config)
	TArray<class UComputeSource*>                AdditionalSources;                                 // 0x1C0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FOptimusShaderText                    ShaderSource;                                      // 0x1D0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusNode_CustomComputeKernel* GetDefaultObj();

};

// 0x10 (0x120 - 0x110)
// Class OptimusCore.OptimusNode_FunctionReference
class UOptimusNode_FunctionReference : public UOptimusNode
{
public:
	uint8                                        Pad_7BD[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UOptimusFunctionNodeGraph*             FunctionGraph;                                     // 0x118(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusNode_FunctionReference* GetDefaultObj();

};

// 0x78 (0x188 - 0x110)
// Class OptimusCore.OptimusNode_ResourceAccessorBase
class UOptimusNode_ResourceAccessorBase : public UOptimusNode
{
public:
	uint8                                        Pad_7BE[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	TWeakObjectPtr<class UOptimusResourceDescription> ResourceDesc;                                      // 0x120(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	enum class EOptimusBufferWriteType           WriteType;                                         // 0x128(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_7BF[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FOptimusNode_ResourceAccessorBase_DuplicationInfo DuplicationInfo;                                   // 0x130(0x58)(BlueprintVisible, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusNode_ResourceAccessorBase* GetDefaultObj();

};

// 0x0 (0x188 - 0x188)
// Class OptimusCore.OptimusNode_GetResource
class UOptimusNode_GetResource : public UOptimusNode_ResourceAccessorBase
{
public:

	static class UClass* StaticClass();
	static class UOptimusNode_GetResource* GetDefaultObj();

};

// 0x38 (0x148 - 0x110)
// Class OptimusCore.OptimusNode_GetVariable
class UOptimusNode_GetVariable : public UOptimusNode
{
public:
	uint8                                        Pad_7C0[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TWeakObjectPtr<class UOptimusVariableDescription> VariableDesc;                                      // 0x118(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FOptimusNode_GetVariable_DuplicationInfo DuplicationInfo;                                   // 0x120(0x28)(BlueprintVisible, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusNode_GetVariable* GetDefaultObj();

};

// 0x18 (0x128 - 0x110)
// Class OptimusCore.OptimusNode_GraphTerminal
class UOptimusNode_GraphTerminal : public UOptimusNode
{
public:
	uint8                                        Pad_7C1[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	enum class EOptimusTerminalType              TerminalType;                                      // 0x118(0x4)(ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class UOptimusNodeSubGraph>   OwningGraph;                                       // 0x11C(0x8)(Edit, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_7C2[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusNode_GraphTerminal* GetDefaultObj();

};

// 0x0 (0x188 - 0x188)
// Class OptimusCore.OptimusNode_Resource
class UOptimusNode_Resource : public UOptimusNode_ResourceAccessorBase
{
public:

	static class UClass* StaticClass();
	static class UOptimusNode_Resource* GetDefaultObj();

};

// 0x0 (0x188 - 0x188)
// Class OptimusCore.OptimusNode_SetResource
class UOptimusNode_SetResource : public UOptimusNode_ResourceAccessorBase
{
public:

	static class UClass* StaticClass();
	static class UOptimusNode_SetResource* GetDefaultObj();

};

// 0x10 (0x120 - 0x110)
// Class OptimusCore.OptimusNode_SubGraphReference
class UOptimusNode_SubGraphReference : public UOptimusNode
{
public:
	uint8                                        Pad_7C5[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UOptimusNodeSubGraph*                  SubGraph;                                          // 0x118(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusNode_SubGraphReference* GetDefaultObj();

};

// 0xB8 (0xE0 - 0x28)
// Class OptimusCore.OptimusActionStack
class UOptimusActionStack : public UObject
{
public:
	int32                                        TransactedActionIndex;                             // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_7C7[0xB4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusActionStack* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class OptimusCore.OptimusComponentSourceBinding
class UOptimusComponentSourceBinding : public UObject
{
public:
	class FName                                  BindingName;                                       // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UClass*                                ComponentType;                                     // 0x30(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class FName>                          ComponentTags;                                     // 0x38(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bIsPrimaryBinding;                                 // 0x48(0x1)(Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_7CA[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusComponentSourceBinding* GetDefaultObj();

};

// 0x10 (0xA0 - 0x90)
// Class OptimusCore.OptimusComputeGraph
class UOptimusComputeGraph : public UComputeGraph
{
public:
	TArray<TWeakObjectPtr<class UOptimusNode>>   KernelToNode;                                      // 0x90(0x10)(ConstParm, ExportObject, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusComputeGraph* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class OptimusCore.OptimusComponentSourceBindingContainer
class UOptimusComponentSourceBindingContainer : public UObject
{
public:
	TArray<class UOptimusComponentSourceBinding*> Bindings;                                          // 0x28(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusComponentSourceBindingContainer* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class OptimusCore.OptimusVariableContainer
class UOptimusVariableContainer : public UObject
{
public:
	TArray<class UOptimusVariableDescription*>   Descriptions;                                      // 0x28(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusVariableContainer* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class OptimusCore.OptimusResourceContainer
class UOptimusResourceContainer : public UObject
{
public:
	TArray<class UOptimusResourceDescription*>   Descriptions;                                      // 0x28(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusResourceContainer* GetDefaultObj();

};

// 0xF8 (0x120 - 0x28)
// Class OptimusCore.OptimusDeformer
class UOptimusDeformer : public UMeshDeformer
{
public:
	uint8                                        Pad_7E1[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	class USkeletalMesh*                         Mesh;                                              // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FOptimusComputeGraphInfo>      ComputeGraphs;                                     // 0x50(0x10)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UOptimusActionStack*                   ActionStack;                                       // 0x60(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	TArray<class UOptimusNodeGraph*>             Graphs;                                            // 0x68(0x10)(BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UOptimusComponentSourceBindingContainer* Bindings;                                          // 0x78(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UOptimusVariableContainer*             Variables;                                         // 0x80(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	class UOptimusResourceContainer*             Resources;                                         // 0x88(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	uint8                                        Pad_7ED[0x90];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusDeformer* GetDefaultObj();

	TArray<class UOptimusVariableDescription*> GetVariables();
	TArray<class UOptimusResourceDescription*> GetResources();
	TArray<class UOptimusComponentSourceBinding*> GetComponentBindings();
};

// 0x18 (0x40 - 0x28)
// Class OptimusCore.OptimusDeformerInstanceSettings
class UOptimusDeformerInstanceSettings : public UMeshDeformerInstanceSettings
{
public:
	TWeakObjectPtr<class UOptimusDeformer>       Deformer;                                          // 0x28(0x8)(Net, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FOptimusDeformerInstanceComponentBinding> Bindings;                                          // 0x30(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusDeformerInstanceSettings* GetDefaultObj();

};

// 0xB8 (0xE0 - 0x28)
// Class OptimusCore.OptimusDeformerInstance
class UOptimusDeformerInstance : public UMeshDeformerInstance
{
public:
	TWeakObjectPtr<class UMeshComponent>         MeshComponent;                                     // 0x28(0x8)(BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, EditConst)
	TWeakObjectPtr<class UOptimusDeformerInstanceSettings> InstanceSettings;                                  // 0x30(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FOptimusDeformerInstanceExecInfo> ComputeGraphExecInfos;                             // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UOptimusVariableContainer*             Variables;                                         // 0x48(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	uint8                                        Pad_820[0x90];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusDeformerInstance* GetDefaultObj();

	bool SetVectorVariable();
	bool SetVector4Variable();
	bool SetTransformVariable();
	bool SetIntVariable();
	bool SetFloatVariable();
	bool SetBoolVariable();
	TArray<class UOptimusVariableDescription*> GetVariables();
	bool EnqueueTriggerGraph(class FName InTriggerGraphName);
};

// 0x58 (0x80 - 0x28)
// Class OptimusCore.OptimusNodeGraph
class UOptimusNodeGraph : public UObject
{
public:
	uint8                                        Pad_8D8[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	enum class EOptimusNodeGraphType             GraphType;                                         // 0x30(0x4)(Edit, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8D9[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UOptimusNode*>                  Nodes;                                             // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UOptimusNodeLink*>              Links;                                             // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	TArray<class UOptimusNodeGraph*>             Subgraphs;                                         // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_8DE[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusNodeGraph* GetDefaultObj();

	bool RenameGraph(class UOptimusNodeGraph** InGraph, class FString* InNewName);
	bool RemoveNodes(TArray<class UOptimusNode*>* InNodes);
	bool RemoveNode(class UOptimusNode** InNode);
	bool RemoveLink(class UOptimusNodePin* InNodeOutputPin, class UOptimusNodePin* InNodeInputPin);
	bool RemoveAllLinks(class UOptimusNodePin** InNodePin);
	bool MoveGraph(class UOptimusNodeGraph** InGraph, int32* InInsertBefore);
	bool IsSubGraphReference(class UOptimusNode** InNode);
	bool IsKernelFunction(class UOptimusNode** InNode);
	bool IsFunctionReference(class UOptimusNode** InNode);
	bool IsFunctionGraph();
	bool IsExecutionGraph();
	bool IsCustomKernel(class UOptimusNode** InNode);
	enum class EOptimusNodeGraphType GetGraphType();
	TArray<class UOptimusNodeGraph*> GetGraphs();
	int32 GetGraphIndex();
	TArray<class UOptimusNode*> ExpandCollapsedNodes(class UOptimusNode** InFunctionNode);
	bool DuplicateNodes(TArray<class UOptimusNode*>* InNodes);
	class UOptimusNode* DuplicateNode(class UOptimusNode** InNode);
	class UOptimusNode* ConvertFunctionToCustomKernel(class UOptimusNode** InKernelFunction);
	class UOptimusNode* ConvertCustomKernelToFunction(class UOptimusNode** InCustomKernel);
	class UOptimusNode* CollapseNodesToSubGraph(TArray<class UOptimusNode*>* InNodes);
	class UOptimusNode* CollapseNodesToFunction(TArray<class UOptimusNode*>* InNodes);
	class UOptimusNode* AddVariableGetNode(class UOptimusVariableDescription** InVariableDesc);
	class UOptimusNode* AddValueNode(const struct FOptimusDataTypeRef& InDataTypeRef);
	class UOptimusNode* AddResourceSetNode(class UOptimusResourceDescription* InResourceDesc);
	class UOptimusNode* AddResourceNode(class UOptimusResourceDescription* InResourceDesc);
	class UOptimusNode* AddResourceGetNode(class UOptimusResourceDescription* InResourceDesc);
	class UOptimusNode* AddNode(class UClass* InNodeClass);
	bool AddLink(class UOptimusNodePin* InNodeOutputPin, class UOptimusNodePin* InNodeInputPin);
	class UOptimusNode* AddDataInterfaceNode(class UClass* InDataInterfaceClass);
	class UOptimusNode* AddComponentBindingGetNode(class UOptimusComponentSourceBinding* InComponentBinding);
};

// 0x30 (0xB0 - 0x80)
// Class OptimusCore.OptimusNodeSubGraph
class UOptimusNodeSubGraph : public UOptimusNodeGraph
{
public:
	TArray<struct FOptimusParameterBinding>      InputBindings;                                     // 0x80(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FOptimusParameterBinding>      OutputBindings;                                    // 0x90(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class UOptimusNode_GraphTerminal> EntryNode;                                         // 0xA0(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class UOptimusNode_GraphTerminal> ReturnNode;                                        // 0xA8(0x8)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusNodeSubGraph* GetDefaultObj();

};

// 0x8 (0xB8 - 0xB0)
// Class OptimusCore.OptimusFunctionNodeGraph
class UOptimusFunctionNodeGraph : public UOptimusNodeSubGraph
{
public:
	class FName                                  Category;                                          // 0xB0(0x8)(ConstParm, BlueprintReadOnly, OutParm, Transient)

	static class UClass* StaticClass();
	static class UOptimusFunctionNodeGraph* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class OptimusCore.OptimusNodeLink
class UOptimusNodeLink : public UObject
{
public:
	class UOptimusNodePin*                       NodeOutputPin;                                     // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UOptimusNodePin*                       NodeInputPin;                                      // 0x30(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusNodeLink* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class OptimusCore.OptimusNodePin
class UOptimusNodePin : public UObject
{
public:
	bool                                         bIsGroupingPin;                                    // 0x28(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	enum class EOptimusNodePinDirection          Direction;                                         // 0x29(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
	enum class EOptimusNodePinStorageType        StorageType;                                       // 0x2A(0x1)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_8FE[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	struct FOptimusDataDomain                    DataDomain;                                        // 0x30(0x40)(Edit, ExportObject, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FOptimusDataTypeRef                   DataType;                                          // 0x70(0x10)(BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TArray<class UOptimusNodePin*>               SubPins;                                           // 0x80(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusNodePin* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class OptimusCore.OptimusResourceDescription
class UOptimusResourceDescription : public UObject
{
public:
	class FName                                  ResourceName;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	struct FOptimusDataTypeRef                   DataType;                                          // 0x30(0x10)(BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TWeakObjectPtr<class UOptimusComponentSourceBinding> ComponentBinding;                                  // 0x40(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	struct FOptimusDataDomain                    DataDomain;                                        // 0x48(0x40)(Edit, ExportObject, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class UOptimusPersistentBufferDataInterface* DataInterface;                                     // 0x88(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusResourceDescription* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class OptimusCore.OptimusSource
class UOptimusSource : public UComputeSource
{
public:
	uint8                                        Pad_907[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                SourceText;                                        // 0x40(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusSource* GetDefaultObj();

};

// 0x10 (0x230 - 0x220)
// Class OptimusCore.OptimusValueContainerGeneratorClass
class UOptimusValueContainerGeneratorClass : public UClass
{
public:
	struct FOptimusDataTypeRef                   DataType;                                          // 0x220(0x10)(BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusValueContainerGeneratorClass* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusValueContainer
class UOptimusValueContainer : public UObject
{
public:

	static class UClass* StaticClass();
	static class UOptimusValueContainer* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class OptimusCore.OptimusVariableDescription
class UOptimusVariableDescription : public UObject
{
public:
	struct FGuid                                 Guid;                                              // 0x28(0x10)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class FName                                  VariableName;                                      // 0x38(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
	struct FOptimusDataTypeRef                   DataType;                                          // 0x40(0x10)(BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class UOptimusValueContainer*                DefaultValue;                                      // 0x50(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint8>                                ValueData;                                         // 0x58(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusVariableDescription* GetDefaultObj();

};

}


