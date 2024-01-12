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
	uint8                                        Pad_BB4[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bExplicitShowWireframe;                            // 0x6F8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_BB5[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          WireframeColor;                                    // 0x6FC(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EDynamicMeshComponentColorOverrideMode ColorMode;                                         // 0x70C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_BB6[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FColor                                ConstantColor;                                     // 0x710(0x4)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableFlatShading;                                // 0x714(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableViewModeOverrides;                          // 0x715(0x1)(BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_BB7[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    OverrideRenderMaterial;                            // 0x718(0x8)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    SecondaryRenderMaterial;                           // 0x720(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_BB8[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bEnableRayTracing;                                 // 0x729(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, Transient, InstancedReference)
	uint8                                        Pad_BB9[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UMaterialInterface*>            BaseMaterials;                                     // 0x730(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UBaseDynamicMeshComponent* GetDefaultObj();

	void SetViewModeOverridesEnabled(bool* bEnabled);
	void SetShadowsEnabled(bool* bEnabled);
	class UMaterialInterface* SetSecondaryRenderMaterial();
	void SetSecondaryBuffersVisibility(bool bSetVisible);
	class UMaterialInterface* SetOverrideRenderMaterial();
	void SetEnableWireframeRenderPass(bool* bEnable);
	void SetEnableRaytracing(bool bSetEnabled);
	void SetEnableFlatShading(bool* bEnable);
	void SetConstantOverrideColor(struct FColor* NewColor);
	void SetColorOverrideMode(enum class EDynamicMeshComponentColorOverrideMode NewMode);
	bool HasOverrideRenderMaterial(int32 K);
	bool GetViewModeOverridesEnabled();
	bool GetShadowsEnabled();
	class UMaterialInterface* GetSecondaryRenderMaterial();
	bool GetSecondaryBuffersVisibility();
	class UMaterialInterface* GetOverrideRenderMaterial();
	bool GetFlatShadingEnabled();
	bool GetEnableWireframeRenderPass();
	bool GetEnableRaytracing();
	class UDynamicMesh* GetDynamicMesh();
	struct FColor GetConstantOverrideColor();
	enum class EDynamicMeshComponentColorOverrideMode GetColorOverrideMode();
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
	uint8                                        Pad_BC8[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMesh*                          MeshObject;                                        // 0x748(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_BC9[0xF0];                                     // Fixing Size After Last Property  > TateDumper <
	enum class EDynamicMeshComponentTangentsMode TangentsType;                                      // 0x840(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_BCA[0x3F];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ECollisionTraceFlag               CollisionType;                                     // 0x880(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bUseAsyncCooking;                                  // 0x881(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableComplexCollision;                           // 0x882(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDeferCollisionUpdates;                            // 0x883(0x1)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_BCB[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            MeshBodySetup;                                     // 0x888(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_BCC[0x38];                                     // Fixing Size After Last Property  > TateDumper <
	struct FKAggregateGeom                       AggGeom;                                           // 0x8C8(0x68)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UBodySetup*>                    AsyncBodySetupQueue;                               // 0x930(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_BCD[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDynamicMeshComponent* GetDefaultObj();

	bool ValidateMaterialSlots();
	bool UpdateCollision();
	enum class EDynamicMeshComponentTangentsMode SetTangentsType();
	void SetDynamicMesh(class UDynamicMesh** NewMesh);
	bool SetDeferredCollisionUpdatesEnabled(bool* bEnabled);
	bool SetComplexAsSimpleCollisionEnabled(bool* bEnabled);
	enum class EDynamicMeshComponentTangentsMode GetTangentsType();
	void EnableComplexAsSimpleCollision();
	TArray<class UMaterialInterface*> ConfigureMaterialSet();
};

// 0x18 (0x4E0 - 0x4C8)
// Class GeometryFramework.DynamicMeshActor
class ADynamicMeshActor : public AActor
{
public:
	class UDynamicMeshComponent*                 DynamicMeshComponent;                              // 0x4C8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, GlobalConfig)
	bool                                         bEnableComputeMeshPool;                            // 0x4D0(0x1)(Edit, ConstParm, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_BD5[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMeshPool*                      DynamicMeshPool;                                   // 0x4D8(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig)

	static class UClass* StaticClass();
	static class ADynamicMeshActor* GetDefaultObj();

	bool ReleaseComputeMesh();
	void ReleaseAllComputeMeshes();
	class UDynamicMeshComponent* GetDynamicMeshComponent();
	class UDynamicMeshPool* GetComputeMeshPool();
	void FreeAllComputeMeshes();
	class UDynamicMesh* AllocateComputeMesh();
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
	uint8                                        Pad_BE1[0x48];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            MeshModifiedBPEvent;                               // 0x70(0x10)(ConstParm, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_BE3[0x20];                                     // Fixing Size After Last Property  > TateDumper <
	class UDynamicMeshGenerator*                 MeshGenerator;                                     // 0xA0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableMeshGenerator;                              // 0xA8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_BE4[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDynamicMesh* GetDefaultObj();

	class UDynamicMesh* ResetToCube();
	class UDynamicMesh* Reset();
	bool IsEmpty();
	int32 GetTriangleCount();
};

// 0x20 (0x48 - 0x28)
// Class GeometryFramework.DynamicMeshPool
class UDynamicMeshPool : public UObject
{
public:
	TArray<class UDynamicMesh*>                  CachedMeshes;                                      // 0x28(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UDynamicMesh*>                  AllCreatedMeshes;                                  // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDynamicMeshPool* GetDefaultObj();

	class UDynamicMesh* ReturnMesh();
	void ReturnAllMeshes();
	class UDynamicMesh* RequestMesh();
	void FreeAllMeshes();
};

}


