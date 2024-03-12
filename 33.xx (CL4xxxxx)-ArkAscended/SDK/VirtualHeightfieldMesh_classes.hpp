#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x70 - 0x28)
// Class VirtualHeightfieldMesh.HeightfieldMinMaxTexture
class UHeightfieldMinMaxTexture : public UObject
{
public:
	class UTexture2D*                            Texture;                                           // 0x28(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	class UTexture2D*                            LodBiasTexture;                                    // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTexture2D*                            LodBiasMinMaxTexture;                              // 0x38(0x8)(Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MaxCPULevels;                                      // 0x40(0x4)(ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_77C[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector2D>                     TextureData;                                       // 0x48(0x10)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FIntPoint                             TextureDataSize;                                   // 0x58(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<int32>                                TextureDataMips;                                   // 0x60(0x10)(BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHeightfieldMinMaxTexture* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class VirtualHeightfieldMesh.MaterialExpressionHeightfieldMinMaxTexture
class UMaterialExpressionHeightfieldMinMaxTexture : public UMaterialExpression
{
public:
	class UHeightfieldMinMaxTexture*             MinMaxTexture;                                     // 0xB0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EMaterialSamplerType              SamplerType;                                       // 0xB8(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_784[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMaterialExpressionHeightfieldMinMaxTexture* GetDefaultObj();

};

// 0x8 (0x4C8 - 0x4C0)
// Class VirtualHeightfieldMesh.VirtualHeightfieldMesh
class AVirtualHeightfieldMesh : public AActor
{
public:
	class UVirtualHeightfieldMeshComponent*      VirtualHeightfieldMeshComponent;                   // 0x4C0(0x8)(ConstParm, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class AVirtualHeightfieldMesh* GetDefaultObj();

};

// 0x80 (0x710 - 0x690)
// Class VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent
class UVirtualHeightfieldMeshComponent : public UPrimitiveComponent
{
public:
	TSoftObjectPtr<class ARuntimeVirtualTextureVolume> VirtualTexture;                                    // 0x690(0x30)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig)
	class ARuntimeVirtualTextureVolume*          VirtualTextureRef;                                 // 0x6C0(0x8)(BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UObject*                               VirtualTextureThumbnail;                           // 0x6C8(0x8)(Edit, ConstParm, Parm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCopyBoundsButton;                                 // 0x6D0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_78E[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UHeightfieldMinMaxTexture*             MinMaxTexture;                                     // 0x6D8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumMinMaxTextureBuildLevels;                       // 0x6E0(0x4)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bBuildMinMaxTextureButton;                         // 0x6E4(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_78F[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    Material;                                          // 0x6E8(0x8)(Edit, ConstParm, Net, EditFixedSize, Transient, Config, DisableEditOnInstance)
	float                                        Lod0ScreenSize;                                    // 0x6F0(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Lod0Distribution;                                  // 0x6F4(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LodDistribution;                                   // 0x6F8(0x4)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LodBiasScale;                                      // 0x6FC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumForceLoadLods;                                  // 0x700(0x4)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumOcclusionLods;                                  // 0x704(0x4)(Edit, ExportObject, Net, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHiddenInEditor;                                   // 0x708(0x1)(Net, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bWorldPositionOffsetVelocity;                      // 0x709(0x1)(Edit, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_793[0x6];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UVirtualHeightfieldMeshComponent* GetDefaultObj();

	bool GatherHideFlags(bool* InOutHidePrimitivesInGame);
};

}


