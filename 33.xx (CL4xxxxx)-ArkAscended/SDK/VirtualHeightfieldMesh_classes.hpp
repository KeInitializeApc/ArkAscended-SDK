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
	class UTexture2D*                            Texture;                                           // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	class UTexture2D*                            LodBiasTexture;                                    // 0x30(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTexture2D*                            LodBiasMinMaxTexture;                              // 0x38(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        MaxCPULevels;                                      // 0x40(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C10[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVector2D>                     TextureData;                                       // 0x48(0x10)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FIntPoint                             TextureDataSize;                                   // 0x58(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<int32>                                TextureDataMips;                                   // 0x60(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHeightfieldMinMaxTexture* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class VirtualHeightfieldMesh.MaterialExpressionHeightfieldMinMaxTexture
class UMaterialExpressionHeightfieldMinMaxTexture : public UMaterialExpression
{
public:
	class UHeightfieldMinMaxTexture*             MinMaxTexture;                                     // 0xB0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EMaterialSamplerType              SamplerType;                                       // 0xB8(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C12[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMaterialExpressionHeightfieldMinMaxTexture* GetDefaultObj();

};

// 0x8 (0x4D0 - 0x4C8)
// Class VirtualHeightfieldMesh.VirtualHeightfieldMesh
class AVirtualHeightfieldMesh : public AActor
{
public:
	class UVirtualHeightfieldMeshComponent*      VirtualHeightfieldMeshComponent;                   // 0x4C8(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class AVirtualHeightfieldMesh* GetDefaultObj();

};

// 0x88 (0x720 - 0x698)
// Class VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent
class UVirtualHeightfieldMeshComponent : public UPrimitiveComponent
{
public:
	TSoftObjectPtr<class ARuntimeVirtualTextureVolume> VirtualTexture;                                    // 0x698(0x30)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	class ARuntimeVirtualTextureVolume*          VirtualTextureRef;                                 // 0x6C8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UObject*                               VirtualTextureThumbnail;                           // 0x6D0(0x8)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bCopyBoundsButton;                                 // 0x6D8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C1A[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UHeightfieldMinMaxTexture*             MinMaxTexture;                                     // 0x6E0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumMinMaxTextureBuildLevels;                       // 0x6E8(0x4)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bBuildMinMaxTextureButton;                         // 0x6EC(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C1B[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    Material;                                          // 0x6F0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	float                                        Lod0ScreenSize;                                    // 0x6F8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Lod0Distribution;                                  // 0x6FC(0x4)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LodDistribution;                                   // 0x700(0x4)(BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LodBiasScale;                                      // 0x704(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumForceLoadLods;                                  // 0x708(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        NumOcclusionLods;                                  // 0x70C(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bHiddenInEditor;                                   // 0x710(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bWorldPositionOffsetVelocity;                      // 0x711(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_C1D[0xE];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UVirtualHeightfieldMeshComponent* GetDefaultObj();

	bool GatherHideFlags();
};

}


