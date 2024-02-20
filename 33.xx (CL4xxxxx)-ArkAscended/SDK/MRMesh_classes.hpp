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
	FMulticastInlineDelegateProperty_            OnMeshTrackerUpdated;                              // 0x2C8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	bool                                         ScanWorld;                                         // 0x2D8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	bool                                         RequestNormals;                                    // 0x2D9(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	bool                                         RequestVertexConfidence;                           // 0x2DA(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	enum class EMeshTrackerVertexColorMode       VertexColorMode;                                   // 0x2DB(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CE0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FColor>                        BlockVertexColors;                                 // 0x2E0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	struct FLinearColor                          VertexColorFromConfidenceZero;                     // 0x2F0(0x10)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	struct FLinearColor                          VertexColorFromConfidenceOne;                      // 0x300(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	float                                        UpdateInterval;                                    // 0x310(0x4)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CE2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMRMeshComponent*                      MRMesh;                                            // 0x318(0x8)(Edit, BlueprintReadOnly, Parm, DisableEditOnInstance, EditConst)
	uint8                                        Pad_1CE4[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMockDataMeshTrackerComponent* GetDefaultObj();

	TArray<float> OnMockDataMeshTrackerUpdated__DelegateSignature(int32* Index, const TArray<struct FVector>& Vertices, TArray<int32>* Triangles);
	class UMRMeshComponent* DisconnectMRMesh();
	class UMRMeshComponent* ConnectMRMesh();
};

// 0x1C8 (0x1F0 - 0x28)
// Class MRMesh.MRMeshBodyHolder
class UMRMeshBodyHolder : public UObject
{
public:
	uint8                                        Pad_1CEA[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            BodySetup;                                         // 0x30(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, SubobjectReference)
	struct FBodyInstance                         BodyInstance;                                      // 0x38(0x150)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	uint8                                        Pad_1CEC[0x68];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMRMeshBodyHolder* GetDefaultObj();

};

// 0x88 (0x720 - 0x698)
// Class MRMesh.MRMeshComponent
class UMRMeshComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_1CFC[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    Material;                                          // 0x6A0(0x8)(Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UMaterialInterface*                    WireframeMaterial;                                 // 0x6A8(0x8)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, Config, InstancedReference, DuplicateTransient)
	bool                                         bCreateMeshProxySections;                          // 0x6B0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUpdateNavMeshOnMeshUpdate;                        // 0x6B1(0x1)(Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CFF[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bNeverCreateCollisionMesh;                         // 0x6B3(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D00[0x44];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UMRMeshBodyHolder*>             BodyHolders;                                       // 0x6F8(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D01[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMRMeshComponent* GetDefaultObj();

	class UMaterialInterface* SetWireframeMaterial();
	void SetWireframeColor(struct FLinearColor* InColor);
	void SetUseWireframe(bool bUseWireframe);
	bool SetEnableMeshOcclusion();
	void RequestNavMeshUpdate();
	void IsConnected(bool ReturnValue);
	void GetWireframeColor(const struct FLinearColor& ReturnValue);
	void GetUseWireframe(bool ReturnValue);
	void GetEnableMeshOcclusion(bool ReturnValue);
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
	void IsReconstructionStarted(bool ReturnValue);
	void IsReconstructionPaused(bool ReturnValue);
	void DisconnectMRMesh();
	void ConnectMRMesh(class UMRMeshComponent* Mesh);
};

}


