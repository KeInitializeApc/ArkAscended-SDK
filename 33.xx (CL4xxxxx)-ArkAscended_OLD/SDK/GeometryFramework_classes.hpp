#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x740 - 0x6D8)
// Class GeometryFramework.BaseDynamicMeshComponent
class UBaseDynamicMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_89A[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bExplicitShowWireframe;                            // 0x6F8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_89B[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          WireframeColor;                                    // 0x6FC(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EDynamicMeshComponentColorOverrideMode ColorMode;                                         // 0x70C(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_89C[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FColor                                ConstantColor;                                     // 0x710(0x4)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableFlatShading;                                // 0x714(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableViewModeOverrides;                          // 0x715(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_89D[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    OverrideRenderMaterial;                            // 0x718(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    SecondaryRenderMaterial;                           // 0x720(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_8A0[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bEnableRayTracing;                                 // 0x729(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance)
	uint8                                        Pad_8A2[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UMaterialInterface*>            BaseMaterials;                                     // 0x730(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBaseDynamicMeshComponent* GetDefaultObj();

	void SetViewModeOverridesEnabled(bool* bEnabled);
	void SetShadowsEnabled(bool* bEnabled);
	class UMaterialInterface* SetSecondaryRenderMaterial();
	bool SetSecondaryBuffersVisibility();
	class UMaterialInterface* SetOverrideRenderMaterial();
	bool SetEnableWireframeRenderPass();
	bool SetEnableRaytracing();
	bool SetEnableFlatShading();
	struct FColor SetConstantOverrideColor();
	enum class EDynamicMeshComponentColorOverrideMode SetColorOverrideMode();
	void HasOverrideRenderMaterial(int32 K, bool* ReturnValue);
	void GetViewModeOverridesEnabled(bool* ReturnValue);
	void GetShadowsEnabled(bool* ReturnValue);
	void GetSecondaryRenderMaterial(class UMaterialInterface** ReturnValue);
	void GetSecondaryBuffersVisibility(bool* ReturnValue);
	void GetOverrideRenderMaterial(int32* MaterialIndex, class UMaterialInterface** ReturnValue);
	void GetFlatShadingEnabled(bool* ReturnValue);
	void GetEnableWireframeRenderPass(bool* ReturnValue);
	void GetEnableRaytracing(bool* ReturnValue);
	void GetDynamicMesh(class UDynamicMesh** ReturnValue);
	void GetConstantOverrideColor(struct FColor* ReturnValue);
	void GetColorOverrideMode(enum class EDynamicMeshComponentColorOverrideMode* ReturnValue);
	void ClearSecondaryRenderMaterial();
	void ClearOverrideRenderMaterial();
};

// 0x0 (0x28 - 0x28)
// Class GeometryFramework.MeshCommandChangeTarget
class IMeshCommandChangeTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMeshCommandChangeTarget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GeometryFramework.MeshReplacementCommandChangeTarget
class IMeshReplacementCommandChangeTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMeshReplacementCommandChangeTarget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GeometryFramework.MeshVertexCommandChangeTarget
class IMeshVertexCommandChangeTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMeshVertexCommandChangeTarget* GetDefaultObj();

};

// 0x210 (0x950 - 0x740)
// Class GeometryFramework.DynamicMeshComponent
class UDynamicMeshComponent : public UBaseDynamicMeshComponent
{
public:
	uint8                                        Pad_8CA[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          MeshObject;                                        // 0x748(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_8CC[0xF0];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EDynamicMeshComponentTangentsMode TangentsType;                                      // 0x840(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_8CF[0x3F];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ECollisionTraceFlag               CollisionType;                                     // 0x880(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUseAsyncCooking;                                  // 0x881(0x1)(ConstParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableComplexCollision;                           // 0x882(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDeferCollisionUpdates;                            // 0x883(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_8D3[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            MeshBodySetup;                                     // 0x888(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_8D4[0x38];                                     // Fixing Size After Last Property  > TateDumper <
	struct FKAggregateGeom                       AggGeom;                                           // 0x8C8(0x68)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UBodySetup*>                    AsyncBodySetupQueue;                               // 0x930(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_8D5[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDynamicMeshComponent* GetDefaultObj();

	void ValidateMaterialSlots(bool bCreateIfMissing, bool* bDeleteExtraSlots, bool* ReturnValue);
	void UpdateCollision(bool* bOnlyIfPending);
	void SetTangentsType(enum class EDynamicMeshComponentTangentsMode NewTangentsType);
	class UDynamicMesh* SetDynamicMesh();
	void SetDeferredCollisionUpdatesEnabled(bool* bEnabled, bool bImmediateUpdate);
	void SetComplexAsSimpleCollisionEnabled(bool* bEnabled, bool bImmediateUpdate);
	void GetTangentsType(enum class EDynamicMeshComponentTangentsMode* ReturnValue);
	void EnableComplexAsSimpleCollision();
	void ConfigureMaterialSet(const TArray<class UMaterialInterface*>& NewMaterialSet);
};

// 0x18 (0x4E0 - 0x4C8)
// Class GeometryFramework.DynamicMeshActor
class ADynamicMeshActor : public AActor
{
public:
	class UDynamicMeshComponent*                 DynamicMeshComponent;                              // 0x4C8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, GlobalConfig)
	bool                                         bEnableComputeMeshPool;                            // 0x4D0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_8F5[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMeshPool*                      DynamicMeshPool;                                   // 0x4D8(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig)

	static class UClass* StaticClass();
	static class ADynamicMeshActor* GetDefaultObj();

	void ReleaseComputeMesh(class UDynamicMesh** Mesh, bool* ReturnValue);
	void ReleaseAllComputeMeshes();
	void GetDynamicMeshComponent(class UDynamicMeshComponent** ReturnValue);
	void GetComputeMeshPool(class UDynamicMeshPool** ReturnValue);
	void FreeAllComputeMeshes();
	void AllocateComputeMesh(class UDynamicMesh** ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryFramework.DynamicMeshGenerator
class UDynamicMeshGenerator : public UObject
{
public:

	static class UClass* StaticClass();
	static class UDynamicMeshGenerator* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class GeometryFramework.DynamicMesh
class UDynamicMesh : public UObject
{
public:
	uint8                                        Pad_90A[0x48];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            MeshModifiedBPEvent;                               // 0x70(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_90C[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMeshGenerator*                 MeshGenerator;                                     // 0xA0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableMeshGenerator;                              // 0xA8(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_90D[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDynamicMesh* GetDefaultObj();

	void ResetToCube(class UDynamicMesh** ReturnValue);
	void Reset(class UDynamicMesh** ReturnValue);
	void IsEmpty(bool* ReturnValue);
	void GetTriangleCount(int32* ReturnValue);
};

// 0x20 (0x48 - 0x28)
// Class GeometryFramework.DynamicMeshPool
class UDynamicMeshPool : public UObject
{
public:
	TArray<class UDynamicMesh*>                  CachedMeshes;                                      // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UDynamicMesh*>                  AllCreatedMeshes;                                  // 0x38(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDynamicMeshPool* GetDefaultObj();

	void ReturnMesh(class UDynamicMesh** Mesh);
	void ReturnAllMeshes();
	void RequestMesh(class UDynamicMesh** ReturnValue);
	void FreeAllMeshes();
};

}

