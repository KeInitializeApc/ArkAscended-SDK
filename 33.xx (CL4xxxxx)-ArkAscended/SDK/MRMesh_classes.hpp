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
	FMulticastInlineDelegateProperty_            OnMeshTrackerUpdated;                              // 0x2C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ScanWorld;                                         // 0x2D8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         RequestNormals;                                    // 0x2D9(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         RequestVertexConfidence;                           // 0x2DA(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	enum class EMeshTrackerVertexColorMode       VertexColorMode;                                   // 0x2DB(0x1)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_299B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FColor>                        BlockVertexColors;                                 // 0x2E0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          VertexColorFromConfidenceZero;                     // 0x2F0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          VertexColorFromConfidenceOne;                      // 0x300(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	float                                        UpdateInterval;                                    // 0x310(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_299D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMRMeshComponent*                      MRMesh;                                            // 0x318(0x8)(Edit, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	uint8                                        Pad_299E[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMockDataMeshTrackerComponent* GetDefaultObj();

	TArray<int32> OnMockDataMeshTrackerUpdated__DelegateSignature(TArray<struct FVector>* Normals, TArray<float>* Confidence);
	void DisconnectMRMesh(class UMRMeshComponent** InMRMeshPtr);
	void ConnectMRMesh(class UMRMeshComponent** InMRMeshPtr);
};

// 0x1C8 (0x1F0 - 0x28)
// Class MRMesh.MRMeshBodyHolder
class UMRMeshBodyHolder : public UObject
{
public:
	uint8                                        Pad_29A2[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            BodySetup;                                         // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig)
	struct FBodyInstance                         BodyInstance;                                      // 0x38(0x150)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst)
	uint8                                        Pad_29A3[0x68];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMRMeshBodyHolder* GetDefaultObj();

};

// 0x88 (0x720 - 0x698)
// Class MRMesh.MRMeshComponent
class UMRMeshComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_29AE[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    Material;                                          // 0x6A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	class UMaterialInterface*                    WireframeMaterial;                                 // 0x6A8(0x8)(ExportObject, ReturnParm, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         bCreateMeshProxySections;                          // 0x6B0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUpdateNavMeshOnMeshUpdate;                        // 0x6B1(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_29AF[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bNeverCreateCollisionMesh;                         // 0x6B3(0x1)(Net, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_29B0[0x44];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UMRMeshBodyHolder*>             BodyHolders;                                       // 0x6F8(0x10)(Edit, ExportObject, BlueprintReadOnly, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_29B1[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMRMeshComponent* GetDefaultObj();

	class UMaterialInterface* SetWireframeMaterial();
	void SetWireframeColor(struct FLinearColor* InColor);
	void SetUseWireframe(bool bUseWireframe);
	void SetEnableMeshOcclusion(bool* bEnable);
	void RequestNavMeshUpdate();
	bool IsConnected();
	struct FLinearColor GetWireframeColor();
	bool GetUseWireframe();
	bool GetEnableMeshOcclusion();
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
	bool IsReconstructionStarted();
	bool IsReconstructionPaused();
	void DisconnectMRMesh();
	class UMRMeshComponent* ConnectMRMesh();
};

}


