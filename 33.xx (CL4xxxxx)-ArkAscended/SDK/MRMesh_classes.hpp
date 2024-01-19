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
	FMulticastInlineDelegateProperty_            OnMeshTrackerUpdated;                              // 0x2C8(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ScanWorld;                                         // 0x2D8(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         RequestNormals;                                    // 0x2D9(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         RequestVertexConfidence;                           // 0x2DA(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Transient, EditConst, GlobalConfig, SubobjectReference)
	enum class EMeshTrackerVertexColorMode       VertexColorMode;                                   // 0x2DB(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2AF8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FColor>                        BlockVertexColors;                                 // 0x2E0(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          VertexColorFromConfidenceZero;                     // 0x2F0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          VertexColorFromConfidenceOne;                      // 0x300(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	float                                        UpdateInterval;                                    // 0x310(0x4)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2AF9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMRMeshComponent*                      MRMesh;                                            // 0x318(0x8)(Edit, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	uint8                                        Pad_2AFA[0x20];                                    // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_2AFC[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UBodySetup*                            BodySetup;                                         // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, EditConst, SubobjectReference)
	struct FBodyInstance                         BodyInstance;                                      // 0x38(0x150)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst)
	uint8                                        Pad_2AFD[0x68];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMRMeshBodyHolder* GetDefaultObj();

};

// 0x88 (0x720 - 0x698)
// Class MRMesh.MRMeshComponent
class UMRMeshComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_2B14[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    Material;                                          // 0x6A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	class UMaterialInterface*                    WireframeMaterial;                                 // 0x6A8(0x8)(Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	bool                                         bCreateMeshProxySections;                          // 0x6B0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUpdateNavMeshOnMeshUpdate;                        // 0x6B1(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B15[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bNeverCreateCollisionMesh;                         // 0x6B3(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B16[0x44];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UMRMeshBodyHolder*>             BodyHolders;                                       // 0x6F8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B17[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMRMeshComponent* GetDefaultObj();

	void SetWireframeMaterial(class UMaterialInterface** InMaterial);
	struct FLinearColor SetWireframeColor();
	bool SetUseWireframe();
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
	void ConnectMRMesh(class UMRMeshComponent** Mesh);
};

}


