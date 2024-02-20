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
	uint8                                        Pad_A24[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bExplicitShowWireframe;                            // 0x6F8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A25[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          WireframeColor;                                    // 0x6FC(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EDynamicMeshComponentColorOverrideMode ColorMode;                                         // 0x70C(0x1)(Edit, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A27[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FColor                                ConstantColor;                                     // 0x710(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableFlatShading;                                // 0x714(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableViewModeOverrides;                          // 0x715(0x1)(ConstParm, Net, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A2A[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    OverrideRenderMaterial;                            // 0x718(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    SecondaryRenderMaterial;                           // 0x720(0x8)(Edit, ExportObject, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A2C[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bEnableRayTracing;                                 // 0x729(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_A2E[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UMaterialInterface*>            BaseMaterials;                                     // 0x730(0x10)(Edit, OutParm, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBaseDynamicMeshComponent* GetDefaultObj();

	bool SetViewModeOverridesEnabled();
	bool SetShadowsEnabled();
	void SetSecondaryRenderMaterial(class UMaterialInterface* Material);
	void SetSecondaryBuffersVisibility(bool bSetVisible);
	void SetOverrideRenderMaterial(class UMaterialInterface* Material);
	bool SetEnableWireframeRenderPass();
	void SetEnableRaytracing(bool bSetEnabled);
	bool SetEnableFlatShading();
	struct FColor SetConstantOverrideColor();
	void SetColorOverrideMode(enum class EDynamicMeshComponentColorOverrideMode NewMode);
	int32 HasOverrideRenderMaterial(bool ReturnValue);
	void GetViewModeOverridesEnabled(bool ReturnValue);
	void GetShadowsEnabled(bool ReturnValue);
	void GetSecondaryRenderMaterial(class UMaterialInterface* ReturnValue);
	void GetSecondaryBuffersVisibility(bool ReturnValue);
	void GetOverrideRenderMaterial(int32 MaterialIndex, class UMaterialInterface* ReturnValue);
	void GetFlatShadingEnabled(bool ReturnValue);
	void GetEnableWireframeRenderPass(bool ReturnValue);
	void GetEnableRaytracing(bool ReturnValue);
	void GetDynamicMesh(class UDynamicMesh* ReturnValue);
	void GetConstantOverrideColor(const struct FColor& ReturnValue);
	void GetColorOverrideMode(enum class EDynamicMeshComponentColorOverrideMode ReturnValue);
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
	uint8                                        Pad_AC6[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          MeshObject;                                        // 0x748(0x8)(Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_AC8[0xF0];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EDynamicMeshComponentTangentsMode TangentsType;                                      // 0x840(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_ACA[0x3F];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ECollisionTraceFlag               CollisionType;                                     // 0x880(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseAsyncCooking;                                  // 0x881(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bEnableComplexCollision;                           // 0x882(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDeferCollisionUpdates;                            // 0x883(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_ACE[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            MeshBodySetup;                                     // 0x888(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_ACF[0x38];                                     // Fixing Size After Last Property  > TateDumper <
	struct FKAggregateGeom                       AggGeom;                                           // 0x8C8(0x68)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UBodySetup*>                    AsyncBodySetupQueue;                               // 0x930(0x10)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_AD0[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDynamicMeshComponent* GetDefaultObj();

	bool ValidateMaterialSlots(bool ReturnValue);
	bool UpdateCollision();
	enum class EDynamicMeshComponentTangentsMode SetTangentsType();
	void SetDynamicMesh(class UDynamicMesh** NewMesh);
	bool SetDeferredCollisionUpdatesEnabled();
	bool SetComplexAsSimpleCollisionEnabled();
	void GetTangentsType(enum class EDynamicMeshComponentTangentsMode ReturnValue);
	void EnableComplexAsSimpleCollision();
	TArray<class UMaterialInterface*> ConfigureMaterialSet();
};

// 0x18 (0x4E0 - 0x4C8)
// Class GeometryFramework.DynamicMeshActor
class ADynamicMeshActor : public AActor
{
public:
	class UDynamicMeshComponent*                 DynamicMeshComponent;                              // 0x4C8(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, SubobjectReference)
	bool                                         bEnableComputeMeshPool;                            // 0x4D0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_AF0[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMeshPool*                      DynamicMeshPool;                                   // 0x4D8(0x8)(Net, ReturnParm, Transient, SubobjectReference)

	static class UClass* StaticClass();
	static class ADynamicMeshActor* GetDefaultObj();

	void ReleaseComputeMesh(class UDynamicMesh* Mesh, bool ReturnValue);
	void ReleaseAllComputeMeshes();
	void GetDynamicMeshComponent(class UDynamicMeshComponent* ReturnValue);
	void GetComputeMeshPool(class UDynamicMeshPool* ReturnValue);
	void FreeAllComputeMeshes();
	void AllocateComputeMesh(class UDynamicMesh* ReturnValue);
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
	uint8                                        Pad_B00[0x48];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            MeshModifiedBPEvent;                               // 0x70(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_B01[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMeshGenerator*                 MeshGenerator;                                     // 0xA0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableMeshGenerator;                              // 0xA8(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_B02[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDynamicMesh* GetDefaultObj();

	void ResetToCube(class UDynamicMesh* ReturnValue);
	void Reset(class UDynamicMesh* ReturnValue);
	void IsEmpty(bool ReturnValue);
	void GetTriangleCount(int32 ReturnValue);
};

// 0x20 (0x48 - 0x28)
// Class GeometryFramework.DynamicMeshPool
class UDynamicMeshPool : public UObject
{
public:
	TArray<class UDynamicMesh*>                  CachedMeshes;                                      // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UDynamicMesh*>                  AllCreatedMeshes;                                  // 0x38(0x10)(BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDynamicMeshPool* GetDefaultObj();

	void ReturnMesh(class UDynamicMesh* Mesh);
	void ReturnAllMeshes();
	void RequestMesh(class UDynamicMesh* ReturnValue);
	void FreeAllMeshes();
};

}


