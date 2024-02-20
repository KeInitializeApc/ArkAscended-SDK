#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0xA0 - 0x28)
// Class GLTFExporter.GLTFExportOptions
class UGLTFExportOptions : public UObject
{
public:
	float                                        ExportUniformScale;                                // 0x28(0x4)(ConstParm, BlueprintVisible, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bExportPreviewMesh;                                // 0x2C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bSkipNearDefaultValues;                            // 0x2D(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bExportProxyMaterials;                             // 0x2E(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bExportUnlitMaterials;                             // 0x2F(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bExportClearCoatMaterials;                         // 0x30(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class EGLTFMaterialBakeMode             BakeMaterialInputs;                                // 0x31(0x1)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class EGLTFMaterialBakeSizePOT          DefaultMaterialBakeSize;                           // 0x32(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class ETextureFilter                    DefaultMaterialBakeFilter;                         // 0x33(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class ETextureAddress                   DefaultMaterialBakeTiling;                         // 0x34(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_14BD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<enum class EGLTFMaterialPropertyGroup, struct FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;                          // 0x38(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	int32                                        DefaultLevelOfDetail;                              // 0x88(0x4)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bExportVertexColors;                               // 0x8C(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bExportVertexSkinWeights;                          // 0x8D(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bUseMeshQuantization;                              // 0x8E(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bExportLevelSequences;                             // 0x8F(0x1)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bExportAnimationSequences;                         // 0x90(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class EGLTFTextureImageFormat           TextureImageFormat;                                // 0x91(0x1)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_14C0[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        TextureImageQuality;                               // 0x94(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bExportTextureTransforms;                          // 0x98(0x1)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bAdjustNormalmaps;                                 // 0x99(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bExportHiddenInGame;                               // 0x9A(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bExportLights;                                     // 0x9B(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bExportCameras;                                    // 0x9C(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class EGLTFMaterialVariantMode          ExportMaterialVariants;                            // 0x9D(0x1)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_14C6[0x2];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGLTFExportOptions* GetDefaultObj();

	void ResetToDefault();
};

// 0x0 (0x78 - 0x78)
// Class GLTFExporter.GLTFExporter
class UGLTFExporter : public UExporter
{
public:

	static class UClass* StaticClass();
	static class UGLTFExporter* GetDefaultObj();

	class UGLTFExportOptions* ExportToGLTF(class UObject** Object, TSet<class AActor*> SelectedActors, const struct FGLTFExportMessages& OutMessages, bool ReturnValue);
};

// 0x0 (0x78 - 0x78)
// Class GLTFExporter.GLTFAnimSequenceExporter
class UGLTFAnimSequenceExporter : public UGLTFExporter
{
public:

	static class UClass* StaticClass();
	static class UGLTFAnimSequenceExporter* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class GLTFExporter.GLTFLevelExporter
class UGLTFLevelExporter : public UGLTFExporter
{
public:

	static class UClass* StaticClass();
	static class UGLTFLevelExporter* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class GLTFExporter.GLTFLevelSequenceExporter
class UGLTFLevelSequenceExporter : public UGLTFExporter
{
public:

	static class UClass* StaticClass();
	static class UGLTFLevelSequenceExporter* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class GLTFExporter.GLTFLevelVariantSetsExporter
class UGLTFLevelVariantSetsExporter : public UGLTFExporter
{
public:

	static class UClass* StaticClass();
	static class UGLTFLevelVariantSetsExporter* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class GLTFExporter.GLTFMaterialExporter
class UGLTFMaterialExporter : public UGLTFExporter
{
public:

	static class UClass* StaticClass();
	static class UGLTFMaterialExporter* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class GLTFExporter.GLTFSkeletalMeshExporter
class UGLTFSkeletalMeshExporter : public UGLTFExporter
{
public:

	static class UClass* StaticClass();
	static class UGLTFSkeletalMeshExporter* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class GLTFExporter.GLTFStaticMeshExporter
class UGLTFStaticMeshExporter : public UGLTFExporter
{
public:

	static class UClass* StaticClass();
	static class UGLTFStaticMeshExporter* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class GLTFExporter.GLTFProxyOptions
class UGLTFProxyOptions : public UObject
{
public:
	bool                                         bBakeMaterialInputs;                               // 0x28(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EGLTFMaterialBakeSizePOT          DefaultMaterialBakeSize;                           // 0x29(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class ETextureFilter                    DefaultMaterialBakeFilter;                         // 0x2A(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class ETextureAddress                   DefaultMaterialBakeTiling;                         // 0x2B(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_14E6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<enum class EGLTFMaterialPropertyGroup, struct FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;                          // 0x30(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGLTFProxyOptions* GetDefaultObj();

	void ResetToDefault();
};

// 0x60 (0x88 - 0x28)
// Class GLTFExporter.GLTFMaterialExportOptions
class UGLTFMaterialExportOptions : public UAssetUserData
{
public:
	class UMaterialInterface*                    Proxy;                                             // 0x28(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FGLTFOverrideMaterialBakeSettings     Default;                                           // 0x30(0x6)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor)
	uint8                                        Pad_14EC[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<enum class EGLTFMaterialPropertyGroup, struct FGLTFOverrideMaterialBakeSettings> Inputs;                                            // 0x38(0x50)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UGLTFMaterialExportOptions* GetDefaultObj();

};

}


