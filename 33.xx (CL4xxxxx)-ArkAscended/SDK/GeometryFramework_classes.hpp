#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x740 - 0x6D0)
// Class GeometryFramework.BaseDynamicMeshComponent
class UBaseDynamicMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_11[0x20];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bExplicitShowWireframe;                            // 0x6F0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_12[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          WireframeColor;                                    // 0x6F4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	enum class EDynamicMeshComponentColorOverrideMode ColorMode;                                         // 0x704(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_14[0x3];                                       // Fixing Size After Last Property  > TateDumper <
	struct FColor                                ConstantColor;                                     // 0x708(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableFlatShading;                                // 0x70C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableViewModeOverrides;                          // 0x70D(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_15[0x2];                                       // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    OverrideRenderMaterial;                            // 0x710(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    SecondaryRenderMaterial;                           // 0x718(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_16[0x1];                                       // Fixing Size After Last Property  > TateDumper <
	bool                                         bEnableRayTracing;                                 // 0x721(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig)
	uint8                                        Pad_17[0x6];                                       // Fixing Size After Last Property  > TateDumper <
	TArray<class UMaterialInterface*>            BaseMaterials;                                     // 0x728(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_18[0x8];                                       // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBaseDynamicMeshComponent* GetDefaultObj();

	void SetViewModeOverridesEnabled(bool bEnabled);
	void SetShadowsEnabled(bool bEnabled);
	void SetSecondaryRenderMaterial(class UMaterialInterface* Material);
	bool SetSecondaryBuffersVisibility();
	void SetOverrideRenderMaterial(class UMaterialInterface* Material);
	void SetEnableWireframeRenderPass(bool* bEnable);
	bool SetEnableRaytracing();
	void SetEnableFlatShading(bool* bEnable);
	struct FColor SetConstantOverrideColor();
	enum class EDynamicMeshComponentColorOverrideMode SetColorOverrideMode();
	bool HasOverrideRenderMaterial(int32* K);
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
	class UDynamicMesh*                          MeshObject;                                        // 0x740(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3D[0xF8];                                      // Fixing Size After Last Property  > TateDumper <
	enum class EDynamicMeshComponentTangentsMode TangentsType;                                      // 0x840(0x1)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_3F[0x3F];                                      // Fixing Size After Last Property  > TateDumper <
	enum class ECollisionTraceFlag               CollisionType;                                     // 0x880(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseAsyncCooking;                                  // 0x881(0x1)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bEnableComplexCollision;                           // 0x882(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDeferCollisionUpdates;                            // 0x883(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_41[0x4];                                       // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            MeshBodySetup;                                     // 0x888(0x8)(ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_42[0x38];                                      // Fixing Size After Last Property  > TateDumper <
	struct FKAggregateGeom                       AggGeom;                                           // 0x8C8(0x68)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UBodySetup*>                    AsyncBodySetupQueue;                               // 0x930(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_43[0x10];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDynamicMeshComponent* GetDefaultObj();

	bool ValidateMaterialSlots();
	bool UpdateCollision();
	enum class EDynamicMeshComponentTangentsMode SetTangentsType();
	class UDynamicMesh* SetDynamicMesh();
	bool SetDeferredCollisionUpdatesEnabled(bool bEnabled);
	bool SetComplexAsSimpleCollisionEnabled(bool bEnabled);
	enum class EDynamicMeshComponentTangentsMode GetTangentsType();
	void EnableComplexAsSimpleCollision();
	TArray<class UMaterialInterface*> ConfigureMaterialSet();
};

// 0x18 (0x4D8 - 0x4C0)
// Class GeometryFramework.DynamicMeshActor
class ADynamicMeshActor : public AActor
{
public:
	class UDynamicMeshComponent*                 DynamicMeshComponent;                              // 0x4C0(0x8)(ConstParm, ReturnParm, EditConst, GlobalConfig)
	bool                                         bEnableComputeMeshPool;                            // 0x4C8(0x1)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_4B[0x7];                                       // Fixing Size After Last Property  > TateDumper <
	class UDynamicMeshPool*                      DynamicMeshPool;                                   // 0x4D0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig)

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
	uint8                                        Pad_52[0x48];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            MeshModifiedBPEvent;                               // 0x70(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_53[0x20];                                      // Fixing Size After Last Property  > TateDumper <
	class UDynamicMeshGenerator*                 MeshGenerator;                                     // 0xA0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableMeshGenerator;                              // 0xA8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_54[0x7];                                       // Fixing Size Of Struct > TateDumper <

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
	TArray<class UDynamicMesh*>                  CachedMeshes;                                      // 0x28(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UDynamicMesh*>                  AllCreatedMeshes;                                  // 0x38(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDynamicMeshPool* GetDefaultObj();

	class UDynamicMesh* ReturnMesh();
	void ReturnAllMeshes();
	class UDynamicMesh* RequestMesh();
	void FreeAllMeshes();
};

}


