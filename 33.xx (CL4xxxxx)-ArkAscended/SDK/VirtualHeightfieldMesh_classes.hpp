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
	class UTexture2D*                            Texture;                                           // 0x28(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
	class UTexture2D*                            LodBiasTexture;                                    // 0x30(0x8)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UTexture2D*                            LodBiasMinMaxTexture;                              // 0x38(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        MaxCPULevels;                                      // 0x40(0x4)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_95F[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector2D>                     TextureData;                                       // 0x48(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FIntPoint                             TextureDataSize;                                   // 0x58(0x8)(ExportObject, Net, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                TextureDataMips;                                   // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHeightfieldMinMaxTexture* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class VirtualHeightfieldMesh.MaterialExpressionHeightfieldMinMaxTexture
class UMaterialExpressionHeightfieldMinMaxTexture : public UMaterialExpression
{
public:
	class UHeightfieldMinMaxTexture*             MinMaxTexture;                                     // 0xB0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EMaterialSamplerType              SamplerType;                                       // 0xB8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_979[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMaterialExpressionHeightfieldMinMaxTexture* GetDefaultObj();

};

// 0x8 (0x4D0 - 0x4C8)
// Class VirtualHeightfieldMesh.VirtualHeightfieldMesh
class AVirtualHeightfieldMesh : public AActor
{
public:
	class UVirtualHeightfieldMeshComponent*      VirtualHeightfieldMeshComponent;                   // 0x4C8(0x8)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class AVirtualHeightfieldMesh* GetDefaultObj();

};

// 0x88 (0x720 - 0x698)
// Class VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent
class UVirtualHeightfieldMeshComponent : public UPrimitiveComponent
{
public:
	TSoftObjectPtr<class ARuntimeVirtualTextureVolume> VirtualTexture;                                    // 0x698(0x30)(OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
	class ARuntimeVirtualTextureVolume*          VirtualTextureRef;                                 // 0x6C8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UObject*                               VirtualTextureThumbnail;                           // 0x6D0(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCopyBoundsButton;                                 // 0x6D8(0x1)(ExportObject, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_981[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UHeightfieldMinMaxTexture*             MinMaxTexture;                                     // 0x6E0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumMinMaxTextureBuildLevels;                       // 0x6E8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bBuildMinMaxTextureButton;                         // 0x6EC(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_983[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    Material;                                          // 0x6F0(0x8)(Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        Lod0ScreenSize;                                    // 0x6F8(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        Lod0Distribution;                                  // 0x6FC(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        LodDistribution;                                   // 0x700(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        LodBiasScale;                                      // 0x704(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumForceLoadLods;                                  // 0x708(0x4)(Edit, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        NumOcclusionLods;                                  // 0x70C(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHiddenInEditor;                                   // 0x710(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bWorldPositionOffsetVelocity;                      // 0x711(0x1)(Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_989[0xE];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UVirtualHeightfieldMeshComponent* GetDefaultObj();

	bool GatherHideFlags();
};

}


