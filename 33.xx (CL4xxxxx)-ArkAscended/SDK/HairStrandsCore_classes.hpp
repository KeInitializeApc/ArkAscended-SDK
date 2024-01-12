#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class HairStrandsCore.OptimusGroomDataInterface
class UOptimusGroomDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass();
	static class UOptimusGroomDataInterface* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class HairStrandsCore.OptimusGroomDataProvider
class UOptimusGroomDataProvider : public UComputeDataProvider
{
public:
	class UGroomComponent*                       Groom;                                             // 0x28(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusGroomDataProvider* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class HairStrandsCore.OptimusGroomExecDataInterface
class UOptimusGroomExecDataInterface : public UOptimusComputeDataInterface
{
public:
	enum class EOptimusGroomExecDomain           Domain;                                            // 0x28(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_E1A[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusGroomExecDataInterface* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class HairStrandsCore.OptimusGroomExecDataProvider
class UOptimusGroomExecDataProvider : public UComputeDataProvider
{
public:
	class UGroomComponent*                       GroomComponent;                                    // 0x28(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	enum class EOptimusGroomExecDomain           Domain;                                            // 0x30(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_E1B[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusGroomExecDataProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class HairStrandsCore.OptimusGroomWriteDataInterface
class UOptimusGroomWriteDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass();
	static class UOptimusGroomWriteDataInterface* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class HairStrandsCore.OptimusGroomWriteDataProvider
class UOptimusGroomWriteDataProvider : public UComputeDataProvider
{
public:
	class UGroomComponent*                       GroomComponent;                                    // 0x28(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	uint8                                        Pad_E1C[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UOptimusGroomWriteDataProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class HairStrandsCore.OptimusGroomComponentSource
class UOptimusGroomComponentSource : public UOptimusComponentSource
{
public:

	static class UClass* StaticClass();
	static class UOptimusGroomComponentSource* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class HairStrandsCore.GroomCacheImportOptions
class UGroomCacheImportOptions : public UObject
{
public:
	struct FGroomCacheImportSettings             ImportSettings;                                    // 0x28(0x68)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGroomCacheImportOptions* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class HairStrandsCore.GroomCacheImportData
class UGroomCacheImportData : public UAssetImportData
{
public:
	struct FGroomCacheImportSettings             Settings;                                          // 0x28(0x68)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UGroomCacheImportData* GetDefaultObj();

};

// 0x8 (0x4D0 - 0x4C8)
// Class HairStrandsCore.GroomActor
class AGroomActor : public AActor
{
public:
	class UGroomComponent*                       GroomComponent;                                    // 0x4C8(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class AGroomActor* GetDefaultObj();

};

// 0xE8 (0x110 - 0x28)
// Class HairStrandsCore.GroomAsset
class UGroomAsset : public UObject
{
public:
	uint8                                        Pad_E1F[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FHairGroupInfoWithVisibility>  HairGroupsInfo;                                    // 0x30(0x10)(Edit, ConstParm, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FHairGroupsRendering>          HairGroupsRendering;                               // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, Net, OutParm, Transient, Config)
	TArray<struct FHairGroupsPhysics>            HairGroupsPhysics;                                 // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config)
	TArray<struct FHairGroupsInterpolation>      HairGroupsInterpolation;                           // 0x60(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Transient, Config)
	TArray<struct FHairGroupsLOD>                HairGroupsLOD;                                     // 0x70(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Transient, Config)
	TArray<struct FHairGroupsCardsSourceDescription> HairGroupsCards;                                   // 0x80(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FHairGroupsMeshesSourceDescription> HairGroupsMeshes;                                  // 0x90(0x10)(Edit, BlueprintReadOnly, Net, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FHairGroupsMaterial>           HairGroupsMaterials;                               // 0xA0(0x10)(ConstParm, BlueprintVisible, Net, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_E21[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         EnableGlobalInterpolation;                         // 0xC0(0x1)(ExportObject, BlueprintReadOnly, EditConst, InstancedReference, SubobjectReference)
	enum class EGroomInterpolationType           HairInterpolationType;                             // 0xC1(0x1)(BlueprintVisible, ExportObject, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_E22[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class USkeletalMesh*                         RiggedSkeletalMesh;                                // 0xC8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	TArray<int32>                                DeformedGroupSections;                             // 0xD0(0x10)(EditConst, InstancedReference, SubobjectReference)
	struct FPerPlatformInt                       MinLOD;                                            // 0xE0(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	struct FPerPlatformBool                      DisableBelowMinLodStripping;                       // 0xE4(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_E23[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                EffectiveLODBias;                                  // 0xE8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0xF8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_E24[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGroomAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class HairStrandsCore.HairCardGenerationSettings
class UHairCardGenerationSettings : public UObject
{
public:

	static class UClass* StaticClass();
	static class UHairCardGenerationSettings* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class HairStrandsCore.GroomAssetImportData
class UGroomAssetImportData : public UAssetImportData
{
public:
	class UGroomImportOptions*                   ImportOptions;                                     // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGroomAssetImportData* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class HairStrandsCore.GroomBindingAsset
class UGroomBindingAsset : public UObject
{
public:
	enum class EGroomBindingMeshType             GroomBindingType;                                  // 0x28(0x1)(BlueprintReadOnly, Parm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_E29[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UGroomAsset*                           Groom;                                             // 0x30(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class USkeletalMesh*                         SourceSkeletalMesh;                                // 0x38(0x8)(ConstParm, BlueprintVisible, Parm, EditConst, InstancedReference, SubobjectReference)
	class USkeletalMesh*                         TargetSkeletalMesh;                                // 0x40(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	class UGeometryCache*                        SourceGeometryCache;                               // 0x48(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	class UGeometryCache*                        TargetGeometryCache;                               // 0x50(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	int32                                        NumInterpolationPoints;                            // 0x58(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	int32                                        MatchingSection;                                   // 0x5C(0x4)(Edit, BlueprintReadOnly, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FGoomBindingGroupInfo>         GroupInfos;                                        // 0x60(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_E2B[0x40];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGroomBindingAsset* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class HairStrandsCore.GroomBindingAssetList
class UGroomBindingAssetList : public UObject
{
public:
	TArray<class UGroomBindingAsset*>            Bindings;                                          // 0x28(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGroomBindingAssetList* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class HairStrandsCore.GroomBlueprintLibrary
class UGroomBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGroomBlueprintLibrary* GetDefaultObj();

	class UGroomBindingAsset* CreateNewGroomBindingAssetWithPath(class FString* InDesiredPackagePath, class UGroomAsset* InGroomAsset, int32 InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection);
	class UGroomBindingAsset* CreateNewGroomBindingAsset(class UGroomAsset* InGroomAsset, int32 InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection);
	class UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAssetWithPath(const class FString& DesiredPackagePath, class UGroomAsset** GroomAsset, int32 NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection);
	class UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAsset(class UGroomAsset** GroomAsset, int32 NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection);
};

// 0x50 (0x78 - 0x28)
// Class HairStrandsCore.GroomCache
class UGroomCache : public UObject
{
public:
	uint8                                        Pad_E58[0x14];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGroomCacheInfo                       GroomCacheInfo;                                    // 0x3C(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config)
	uint8                                        Pad_E5A[0x14];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGroomCache* GetDefaultObj();

};

// 0x258 (0x930 - 0x6D8)
// Class HairStrandsCore.GroomComponent
class UGroomComponent : public UMeshComponent
{
public:
	uint8                                        Pad_E70[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	class UGroomAsset*                           GroomAsset;                                        // 0x6E8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst)
	class UGroomCache*                           GroomCache;                                        // 0x6F0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	TArray<class UNiagaraComponent*>             NiagaraComponents;                                 // 0x6F8(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
	class USkeletalMesh*                         SourceSkeletalMesh;                                // 0x708(0x8)(ConstParm, BlueprintVisible, Parm, EditConst, InstancedReference, SubobjectReference)
	class UGroomBindingAsset*                    BindingAsset;                                      // 0x710(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
	class UPhysicsAsset*                         PhysicsAsset;                                      // 0x718(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_E71[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHairSimulationSettings               SimulationSettings;                                // 0x730(0x90)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
	class UMeshDeformer*                         MeshDeformer;                                      // 0x7C0(0x8)(BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	class UMeshDeformerInstance*                 MeshDeformerInstance;                              // 0x7C8(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class UMeshDeformerInstanceSettings*         MeshDeformerInstanceSettings;                      // 0x7D0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	class UMaterialInterface*                    Strands_DebugMaterial;                             // 0x7D8(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    Strands_DefaultMaterial;                           // 0x7E0(0x8)(Edit, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    Cards_DefaultMaterial;                             // 0x7E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    Meshes_DefaultMaterial;                            // 0x7F0(0x8)(Edit, ExportObject, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
	class UNiagaraSystem*                        AngularSpringsSystem;                              // 0x7F8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, EditConst, InstancedReference, SubobjectReference)
	class UNiagaraSystem*                        CosseratRodsSystem;                                // 0x800(0x8)(BlueprintVisible, BlueprintReadOnly, OutParm, EditConst, InstancedReference, SubobjectReference)
	class FString                                AttachmentName;                                    // 0x808(0x10)(BlueprintVisible, ExportObject, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_E73[0x88];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FHairGroupDesc>                GroomGroupsDesc;                                   // 0x8A0(0x10)(Edit, ConstParm, OutParm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseCards;                                         // 0x8B0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRunning;                                          // 0x8B1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bLooping;                                          // 0x8B2(0x1)(Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig)
	bool                                         bManualTick;                                       // 0x8B3(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        ElapsedTime;                                       // 0x8B4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E75[0x78];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGroomComponent* GetDefaultObj();

	void SetPhysicsAsset(class UPhysicsAsset* InPhysicsAsset);
	void SetMeshDeformer(class UMeshDeformer* InMeshDeformer);
	void SetHairLengthScaleEnable(bool* bEnable);
	void SetHairLengthScale(float Scale);
	void SetGroomAsset(class UGroomAsset** Asset);
	void SetEnableSimulation(bool bInEnableSimulation);
	class UGroomBindingAsset* SetBindingAsset();
	void ResetSimulation();
	void ResetCollisionComponents();
	class UNiagaraComponent* GetNiagaraComponent(int32 GroupIndex);
	bool GetIsHairLengthScaleEnabled();
	void AddCollisionComponent(class USkeletalMeshComponent* SkeletalMeshComponent);
};

// 0x30 (0x58 - 0x28)
// Class HairStrandsCore.GroomCreateBindingOptions
class UGroomCreateBindingOptions : public UObject
{
public:
	enum class EGroomBindingMeshType             GroomBindingType;                                  // 0x28(0x1)(BlueprintReadOnly, Parm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_E77[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class USkeletalMesh*                         SourceSkeletalMesh;                                // 0x30(0x8)(ConstParm, BlueprintVisible, Parm, EditConst, InstancedReference, SubobjectReference)
	class USkeletalMesh*                         TargetSkeletalMesh;                                // 0x38(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	class UGeometryCache*                        SourceGeometryCache;                               // 0x40(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	class UGeometryCache*                        TargetGeometryCache;                               // 0x48(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	int32                                        NumInterpolationPoints;                            // 0x50(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
	int32                                        MatchingSection;                                   // 0x54(0x4)(Edit, BlueprintReadOnly, EditFixedSize, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGroomCreateBindingOptions* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class HairStrandsCore.GroomCreateFollicleMaskOptions
class UGroomCreateFollicleMaskOptions : public UObject
{
public:
	int32                                        Resolution;                                        // 0x28(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        RootRadius;                                        // 0x2C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FFollicleMaskOptions>          Grooms;                                            // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGroomCreateFollicleMaskOptions* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class HairStrandsCore.GroomCreateStrandsTexturesOptions
class UGroomCreateStrandsTexturesOptions : public UObject
{
public:
	int32                                        Resolution;                                        // 0x28(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EStrandsTexturesTraceType         TraceType;                                         // 0x2C(0x1)(ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_E7C[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        TraceDistance;                                     // 0x30(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	enum class EStrandsTexturesMeshType          MeshType;                                          // 0x34(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_E7D[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UStaticMesh*                           StaticMesh;                                        // 0x38(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	class USkeletalMesh*                         SkeletalMesh;                                      // 0x40(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig)
	int32                                        LODIndex;                                          // 0x48(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SectionIndex;                                      // 0x4C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        UVChannelIndex;                                    // 0x50(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_E7E[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                GroupIndex;                                        // 0x58(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGroomCreateStrandsTexturesOptions* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class HairStrandsCore.GroomImportOptions
class UGroomImportOptions : public UObject
{
public:
	struct FGroomConversionSettings              ConversionSettings;                                // 0x28(0x30)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FHairGroupsInterpolation>      InterpolationSettings;                             // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UGroomImportOptions* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class HairStrandsCore.GroomHairGroupsPreview
class UGroomHairGroupsPreview : public UObject
{
public:
	TArray<struct FGroomHairGroupPreview>        Groups;                                            // 0x28(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)

	static class UClass* StaticClass();
	static class UGroomHairGroupsPreview* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class HairStrandsCore.GroomPluginSettings
class UGroomPluginSettings : public UObject
{
public:
	float                                        GroomCacheLookAheadBuffer;                         // 0x28(0x4)(BlueprintVisible, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_E81[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGroomPluginSettings* GetDefaultObj();

};

// 0x20 (0x110 - 0xF0)
// Class HairStrandsCore.MovieSceneGroomCacheSection
class UMovieSceneGroomCacheSection : public UMovieSceneSection
{
public:
	struct FMovieSceneGroomCacheParams           Params;                                            // 0xF0(0x20)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneGroomCacheSection* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class HairStrandsCore.MovieSceneGroomCacheTrack
class UMovieSceneGroomCacheTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_E83[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UMovieSceneSection*>            AnimationSections;                                 // 0xA0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneGroomCacheTrack* GetDefaultObj();

};

// 0x20 (0x58 - 0x38)
// Class HairStrandsCore.NiagaraDataInterfaceHairStrands
class UNiagaraDataInterfaceHairStrands : public UNiagaraDataInterface
{
public:
	uint8                                        Pad_E85[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UGroomAsset*                           DefaultSource;                                     // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class AActor*                                SourceActor;                                       // 0x48(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_E86[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceHairStrands* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class HairStrandsCore.NiagaraDataInterfaceVelocityGrid
class UNiagaraDataInterfaceVelocityGrid : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                            GridSize;                                          // 0x38(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_E87[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVelocityGrid* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class HairStrandsCore.NiagaraDataInterfacePressureGrid
class UNiagaraDataInterfacePressureGrid : public UNiagaraDataInterfaceVelocityGrid
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfacePressureGrid* GetDefaultObj();

};

}


