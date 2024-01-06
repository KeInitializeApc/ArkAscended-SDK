#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x340 - 0x2C8)
// Class MRMesh.MockDataMeshTrackerComponent
class UMockDataMeshTrackerComponent : public USceneComponent
{
public:
	FMulticastInlineDelegateProperty_            OnMeshTrackerUpdated;                              // 0x2C8(0x10)(BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ScanWorld;                                         // 0x2D8(0x1)(ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         RequestNormals;                                    // 0x2D9(0x1)(ConstParm, EditFixedSize, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         RequestVertexConfidence;                           // 0x2DA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EMeshTrackerVertexColorMode       VertexColorMode;                                   // 0x2DB(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_213D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FColor>                        BlockVertexColors;                                 // 0x2E0(0x10)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          VertexColorFromConfidenceZero;                     // 0x2F0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          VertexColorFromConfidenceOne;                      // 0x300(0x10)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        UpdateInterval;                                    // 0x310(0x4)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_213E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMRMeshComponent*                      MRMesh;                                            // 0x318(0x8)(Edit, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	uint8                                        Pad_213F[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMockDataMeshTrackerComponent* GetDefaultObj();

	TArray<float> OnMockDataMeshTrackerUpdated__DelegateSignature();
	class UMRMeshComponent* DisconnectMRMesh();
	class UMRMeshComponent* ConnectMRMesh();
};

// 0x1C8 (0x1F0 - 0x28)
// Class MRMesh.MRMeshBodyHolder
class UMRMeshBodyHolder : public UObject
{
public:
	uint8                                        Pad_2145[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            BodySetup;                                         // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig)
	struct FBodyInstance                         BodyInstance;                                      // 0x38(0x150)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst)
	uint8                                        Pad_2146[0x68];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMRMeshBodyHolder* GetDefaultObj();

};

// 0x88 (0x720 - 0x698)
// Class MRMesh.MRMeshComponent
class UMRMeshComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_216A[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    Material;                                          // 0x6A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	class UMaterialInterface*                    WireframeMaterial;                                 // 0x6A8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         bCreateMeshProxySections;                          // 0x6B0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUpdateNavMeshOnMeshUpdate;                        // 0x6B1(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_216C[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bNeverCreateCollisionMesh;                         // 0x6B3(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_216D[0x44];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UMRMeshBodyHolder*>             BodyHolders;                                       // 0x6F8(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_216E[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMRMeshComponent* GetDefaultObj();

	class UMaterialInterface* SetWireframeMaterial();
	struct FLinearColor SetWireframeColor();
	bool SetUseWireframe();
	bool SetEnableMeshOcclusion();
	void RequestNavMeshUpdate();
	void IsConnected(bool* ReturnValue);
	void GetWireframeColor(struct FLinearColor* ReturnValue);
	void GetUseWireframe(bool* ReturnValue);
	void GetEnableMeshOcclusion(bool* ReturnValue);
	void ForceNavMeshUpdate();
	void Clear();
};

// 0x0 (0x28 - 0x28)
// Class MRMesh.MeshReconstructorBase
class UMeshReconstructorBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMeshReconstructorBase* GetDefaultObj();

	void StopReconstruction();
	void StartReconstruction();
	void PauseReconstruction();
	void IsReconstructionStarted(bool* ReturnValue);
	void IsReconstructionPaused(bool* ReturnValue);
	void DisconnectMRMesh();
	void ConnectMRMesh(class UMRMeshComponent** Mesh);
};

}


