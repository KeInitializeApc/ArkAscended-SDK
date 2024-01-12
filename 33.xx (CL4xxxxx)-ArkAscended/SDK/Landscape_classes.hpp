#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x770 - 0x768)
// Class Landscape.ControlPointMeshComponent
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:
	float                                        VirtualTextureMainPassMaxDrawDistance;             // 0x768(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C79[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlPointMeshComponent* GetDefaultObj();

};

// 0x8 (0x4D0 - 0x4C8)
// Class Landscape.GroundClutterLayerActor
class AGroundClutterLayerActor : public AActor
{
public:
	class UGroundClutterComponent*               ClutterComponent;                                  // 0x4C8(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AGroundClutterLayerActor* GetDefaultObj();

};

// 0x48 (0x7B0 - 0x768)
// Class Landscape.GroundClutterComponent
class UGroundClutterComponent : public UStaticMeshComponent
{
public:
	TArray<struct FClutterData>                  ClutterLayers;                                     // 0x768(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FClutterData>                  ActiveClutterLayers;                               // 0x778(0x10)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        LayerID;                                           // 0x788(0x4)(Edit, EditFixedSize, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bDrawDebugInfo;                                    // 0x78C(0x1)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C7C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class ALandscapeProxy*                       NewLandscapeComponent;                             // 0x790(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C7D[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGroundClutterComponent* GetDefaultObj();

};

// 0x0 (0x518 - 0x518)
// Class Landscape.CustomForceGrassVolume
class ACustomForceGrassVolume : public AVolume
{
public:

	static class UClass* StaticClass();
	static class ACustomForceGrassVolume* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Landscape.LandscapeSplineInterface
class ILandscapeSplineInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ILandscapeSplineInterface* GetDefaultObj();

};

// 0x358 (0x820 - 0x4C8)
// Class Landscape.LandscapeProxy
class ALandscapeProxy : public APartitionActor
{
public:
	uint8                                        Pad_2C8A[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class ULandscapeSplinesComponent*            SplineComponent;                                   // 0x4D0(0x8)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig)
	struct FGuid                                 LandscapeGuid;                                     // 0x4D8(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FLandscapePerLODMaterialOverride> PerLODOverrideMaterials;                           // 0x4E8(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FIntPoint                             LandscapeSectionOffset;                            // 0x4F8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        MaxLODLevel;                                       // 0x500(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ComponentScreenSizeToUseSubSections;               // 0x504(0x4)(Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Lod0ScreenSize;                                    // 0x508(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LOD0DistributionSetting;                           // 0x50C(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        LODDistributionSetting;                            // 0x510(0x4)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        StaticLightingLOD;                                 // 0x514(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class UPhysicalMaterial*                     DefaultPhysMaterial;                               // 0x518(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        StreamingDistanceMultiplier;                       // 0x520(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, GlobalConfig)
	uint8                                        Pad_2C8B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    LandscapeMaterial;                                 // 0x528(0x8)(Edit, ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C8C[0x60];                                    // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    LandscapeHoleMaterial;                             // 0x590(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class URuntimeVirtualTexture*>        RuntimeVirtualTextures;                            // 0x598(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSetCreateRuntimeVirtualTextureVolumes;            // 0x5A8(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bVirtualTextureRenderWithQuad;                     // 0x5A9(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bVirtualTextureRenderWithQuadHQ;                   // 0x5AA(0x1)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C8D[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        VirtualTextureNumLods;                             // 0x5AC(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        VirtualTextureLodBias;                             // 0x5B0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;                      // 0x5B4(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C8E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        NegativeZBoundsExtension;                          // 0x5B8(0x4)(Edit, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PositiveZBoundsExtension;                          // 0x5BC(0x4)(Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class ULandscapeComponent*>           LandscapeComponents;                               // 0x5C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                               // 0x5D0(0x10)(ConstParm, ExportObject, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                 // 0x5E0(0x10)(OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class ULandscapeNaniteComponent*             NaniteComponent;                                   // 0x5F0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C8F[0x64];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bHasLandscapeGrass;                                // 0x65C(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C91[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StaticLightingResolution;                          // 0x660(0x4)(Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        CastShadow : 1;                                    // Mask: 0x1, PropSize: 0x10x664(0x1)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	uint8                                        bCastDynamicShadow : 1;                            // Mask: 0x2, PropSize: 0x10x664(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bCastStaticShadow : 1;                             // Mask: 0x4, PropSize: 0x10x664(0x1)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_22B : 5;                                    // Fixing Bit-Field Size  > TateDumper <
	enum class EShadowCacheInvalidationBehavior  ShadowCacheInvalidationBehavior;                   // 0x665(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bCastContactShadow : 1;                            // Mask: 0x1, PropSize: 0x10x666(0x1)(ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_22C : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2C93[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bCastFarShadow : 1;                                // Mask: 0x1, PropSize: 0x10x668(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_22D : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2C94[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bCastHiddenShadow : 1;                             // Mask: 0x1, PropSize: 0x10x66C(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_22E : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2C95[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bCastShadowAsTwoSided : 1;                         // Mask: 0x1, PropSize: 0x10x670(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_22F : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2C96[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bAffectDistanceFieldLighting : 1;                  // Mask: 0x1, PropSize: 0x10x674(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_230 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	struct FLightingChannels                     LightingChannels;                                  // 0x675(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, EditConst)
	uint8                                        Pad_2C98[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bUseMaterialPositionOffsetInStaticLighting : 1;    // Mask: 0x1, PropSize: 0x10x678(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bRenderCustomDepth : 1;                            // Mask: 0x2, PropSize: 0x10x678(0x1)(Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_231 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2C99[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ERendererStencilMask              CustomDepthStencilWriteMask;                       // 0x67C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C9A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CustomDepthStencilValue;                           // 0x680(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        LDMaxDrawDistance;                                 // 0x684(0x4)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLightmassPrimitiveSettings           LightmassSettings;                                 // 0x688(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        CollisionMipLevel;                                 // 0x6A0(0x4)(EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SimpleCollisionMipLevel;                           // 0x6A4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C9B[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBodyInstance                         BodyInstance;                                      // 0x6B0(0x150)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst)
	uint8                                        bGenerateOverlapEvents : 1;                        // Mask: 0x1, PropSize: 0x10x800(0x1)(Edit, ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bBakeMaterialPositionOffsetIntoCollision : 1;      // Mask: 0x2, PropSize: 0x10x800(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_232 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2C9C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ComponentSizeQuads;                                // 0x804(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SubsectionSizeQuads;                               // 0x808(0x4)(Edit, ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        NumSubsections;                                    // 0x80C(0x4)(Edit, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUsedForNavigation : 1;                            // Mask: 0x1, PropSize: 0x10x810(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bFillCollisionUnderLandscapeForNavmesh : 1;        // Mask: 0x2, PropSize: 0x10x810(0x1)(Edit, ConstParm, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_233 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2C9D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bUseDynamicMaterialInstance;                       // 0x814(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ENavDataGatheringMode             NavigationGeometryGatheringMode;                   // 0x815(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bRestrictStaticMeshGrassTypes;                     // 0x816(0x1)(BlueprintVisible, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseLandscapeForCullingInvisibleHLODVertices;      // 0x817(0x1)(Edit, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bHasLayersContent;                                 // 0x818(0x1)(Edit, ConstParm, Net, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C9E[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ALandscapeProxy* GetDefaultObj();

	enum class ERuntimeVirtualTextureMainPassType SetVirtualTextureRenderPassType();
	void SetLandscapeMaterialVectorParameterValue(class FName* ParameterName, const struct FLinearColor& Value);
	void SetLandscapeMaterialTextureParameterValue(class FName* ParameterName, class UTexture* Value);
	void SetLandscapeMaterialScalarParameterValue(class FName* ParameterName, float Value);
	bool LandscapeExportHeightmapToRenderTarget(class UTextureRenderTarget2D** InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies);
	class ALandscape* GetLandscapeActor();
	class UMaterialInterface* EditorSetLandscapeMaterial();
	class FName EditorApplySpline(float StartRoll, float EndRoll);
	float ChangeLODDistanceFactor();
	float ChangeComponentScreenSizeToUseSubSections();
};

// 0x0 (0x820 - 0x820)
// Class Landscape.Landscape
class ALandscape : public ALandscapeProxy
{
public:

	static class UClass* StaticClass();
	static class ALandscape* GetDefaultObj();

	void RenderHeightmap(struct FTransform* InWorldTransform, const struct FBox2D& InExtents, class UTextureRenderTarget2D** OutRenderTarget);
};

// 0x0 (0xC8 - 0xC8)
// Class Landscape.LandscapeLODStreamingProxy_DEPRECATED
class ULandscapeLODStreamingProxy_DEPRECATED : public UStreamableRenderAsset
{
public:

	static class UClass* StaticClass();
	static class ULandscapeLODStreamingProxy_DEPRECATED* GetDefaultObj();

};

// 0x208 (0x8A0 - 0x698)
// Class Landscape.LandscapeComponent
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int32                                        SectionBaseX;                                      // 0x698(0x4)(ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SectionBaseY;                                      // 0x69C(0x4)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ComponentSizeQuads;                                // 0x6A0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SubsectionSizeQuads;                               // 0x6A4(0x4)(Edit, ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        NumSubsections;                                    // 0x6A8(0x4)(Edit, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CB7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    OverrideMaterial;                                  // 0x6B0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    OverrideHoleMaterial;                              // 0x6B8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UMaterialInstanceConstant*>     MaterialInstances;                                 // 0x6C0(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UMaterialInstanceDynamic*>      MaterialInstancesDynamic;                          // 0x6D0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<int8>                                 LODIndexToMaterialIndex;                           // 0x6E0(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UTexture2D*                            XYOffsetmapTexture;                                // 0x6F0(0x8)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CBA[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              WeightmapScaleBias;                                // 0x700(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        WeightmapSubsectionOffset;                         // 0x720(0x4)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CBB[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              HeightmapScaleBias;                                // 0x730(0x20)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FBox                                  CachedLocalBox;                                    // 0x750(0x38)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class ULandscapeHeightfieldCollisionComponent* CollisionComponentRef;                             // 0x788(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUserTriggeredChangeRequested;                     // 0x790(0x1)(ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bNaniteActive;                                     // 0x791(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CC0[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            HeightmapTexture;                                  // 0x798(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations;                         // 0x7A0(0x10)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UTexture2D*>                    WeightmapTextures;                                 // 0x7B0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FLandscapePerLODMaterialOverride> PerLODOverrideMaterials;                           // 0x7C0(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        GrassMapExtendedZScale;                            // 0x7D0(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CC1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             GrassMapExtendedBounds;                            // 0x7D8(0x10)(Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 MapBuildDataId;                                    // 0x7E8(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CollisionMipLevel;                                 // 0x7F8(0x4)(EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SimpleCollisionMipLevel;                           // 0x7FC(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        NegativeZBoundsExtension;                          // 0x800(0x4)(Edit, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PositiveZBoundsExtension;                          // 0x804(0x4)(Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        StaticLightingResolution;                          // 0x808(0x4)(Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ForcedLOD;                                         // 0x80C(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        LODBias;                                           // 0x810(0x4)(Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, DuplicateTransient)
	struct FGuid                                 StateId;                                           // 0x814(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGuid                                 BakedTextureMaterialGuid;                          // 0x824(0x10)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 LastBakedTextureMaterialGuid;                      // 0x834(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CC7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            GIBakedBaseColorTexture;                           // 0x848(0x8)(ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    MobileMaterialInterface;                           // 0x850(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UMaterialInterface*>            MobileMaterialInterfaces;                          // 0x858(0x10)(BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UTexture2D*>                    MobileWeightmapTextures;                           // 0x868(0x10)(Edit, ConstParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CC8[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeComponent* GetDefaultObj();

	void SetLODBias(int32* InLODBias);
	void SetForcedLOD(int32* InForcedLOD);
	class UMaterialInstanceDynamic* GetMaterialInstanceDynamic();
	float EditorGetPaintLayerWeightByNameAtLocation(class FName* InPaintLayerName);
	float EditorGetPaintLayerWeightAtLocation();
};

// 0x0 (0x4C8 - 0x4C8)
// Class Landscape.LandscapeGizmoActor
class ALandscapeGizmoActor : public AActor
{
public:

	static class UClass* StaticClass();
	static class ALandscapeGizmoActor* GetDefaultObj();

};

// 0x50 (0x518 - 0x4C8)
// Class Landscape.LandscapeGizmoActiveActor
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	uint8                                        Pad_2CC9[0x50];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ALandscapeGizmoActiveActor* GetDefaultObj();

};

// 0x8 (0x6A0 - 0x698)
// Class Landscape.LandscapeGizmoRenderComponent
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_2CCA[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeGizmoRenderComponent* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class Landscape.LandscapeGrassType
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                 GrassVarieties;                                    // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bEnableDensityScaling : 1;                         // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_234 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2CCB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UStaticMesh*                           GrassMesh;                                         // 0x40(0x8)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        GrassDensity;                                      // 0x48(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        PlacementJitter;                                   // 0x4C(0x4)(Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        StartCullDistance;                                 // 0x50(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	int32                                        EndCullDistance;                                   // 0x54(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         RandomRotation;                                    // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         AlignToSurface;                                    // 0x59(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CCC[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        LayerID;                                           // 0x5C(0x4)(Edit, EditFixedSize, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ULandscapeGrassType* GetDefaultObj();

};

// 0xE8 (0x780 - 0x698)
// Class Landscape.LandscapeHeightfieldCollisionComponent
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeLayerInfoObject*>     ComponentLayerInfos;                               // 0x698(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SectionBaseX;                                      // 0x6A8(0x4)(ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SectionBaseY;                                      // 0x6AC(0x4)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CollisionSizeQuads;                                // 0x6B0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CollisionScale;                                    // 0x6B4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        SimpleCollisionSizeQuads;                          // 0x6B8(0x4)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CCF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                CollisionQuadFlags;                                // 0x6C0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 HeightfieldGuid;                                   // 0x6D0(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FBox                                  CachedLocalBox;                                    // 0x6E0(0x38)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class ULandscapeComponent*                   RenderComponentRef;                                // 0x718(0x8)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CD0[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UPhysicalMaterial*>             CookedPhysicalMaterials;                           // 0x730(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CD1[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeHeightfieldCollisionComponent* GetDefaultObj();

	class ULandscapeComponent* GetRenderComponent();
};

// 0x30 (0x58 - 0x28)
// Class Landscape.LandscapeLayerInfoObject
class ULandscapeLayerInfoObject : public UObject
{
public:
	int32                                        LandscapeInfoID;                                   // 0x28(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  LayerName;                                         // 0x2C(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_2CD4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPhysicalMaterial*                     PhysMaterial;                                      // 0x38(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Hardness;                                          // 0x40(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FLinearColor                          LayerUsageDebugColor;                              // 0x44(0x10)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CD6[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeLayerInfoObject* GetDefaultObj();

};

// 0x18 (0x250 - 0x238)
// Class Landscape.LandscapeMaterialInstanceConstant
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo;                              // 0x238(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bIsLayerThumbnail : 1;                             // Mask: 0x1, PropSize: 0x10x248(0x1)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDisableTessellation : 1;                          // Mask: 0x2, PropSize: 0x10x248(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bMobile : 1;                                       // Mask: 0x4, PropSize: 0x10x248(0x1)(ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bEditorToolUsage : 1;                              // Mask: 0x8, PropSize: 0x10x248(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CDC[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeMaterialInstanceConstant* GetDefaultObj();

};

// 0x20 (0x7A0 - 0x780)
// Class Landscape.LandscapeMeshCollisionComponent
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	struct FGuid                                 MeshGuid;                                          // 0x780(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CDF[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeMeshCollisionComponent* GetDefaultObj();

};

// 0x8 (0x4D0 - 0x4C8)
// Class Landscape.LandscapeMeshProxyActor
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*          LandscapeMeshProxyComponent;                       // 0x4C8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, GlobalConfig)

	static class UClass* StaticClass();
	static class ALandscapeMeshProxyActor* GetDefaultObj();

};

// 0x28 (0x790 - 0x768)
// Class Landscape.LandscapeMeshProxyComponent
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	struct FGuid                                 LandscapeGuid;                                     // 0x768(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FIntPoint>                     ProxyComponentBases;                               // 0x778(0x10)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int8                                         ProxyLOD;                                          // 0x788(0x1)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CE3[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeMeshProxyComponent* GetDefaultObj();

};

// 0x78 (0xB0 - 0x38)
// Class Landscape.LandscapeSettings
class ULandscapeSettings : public UDeveloperSettings
{
public:
	int32                                        MaxNumberOfLayers;                                 // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ELandscapeDirtyingMode            LandscapeDirtyingMode;                             // 0x3C(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CE8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        SideResolutionLimit;                               // 0x40(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CEA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class UMaterialInterface>     DefaultLandscapeMaterial;                          // 0x48(0x30)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class ULandscapeLayerInfoObject> DefaultLayerInfoObject;                            // 0x78(0x30)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bRestrictiveMode;                                  // 0xA8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CEB[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeSettings* GetDefaultObj();

};

// 0x38 (0x6D0 - 0x698)
// Class Landscape.LandscapeSplinesComponent
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeSplineControlPoint*>  ControlPoints;                                     // 0x698(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<class ULandscapeSplineSegment*>       Segments;                                          // 0x6A8(0x10)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<class UMeshComponent*>                CookedForeignMeshComponents;                       // 0x6B8(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CEF[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeSplinesComponent* GetDefaultObj();

	TArray<class USplineMeshComponent*> GetSplineMeshComponents();
};

// 0xB0 (0xD8 - 0x28)
// Class Landscape.LandscapeSplineControlPoint
class ULandscapeSplineControlPoint : public UObject
{
public:
	struct FVector                               Location;                                          // 0x28(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FRotator                              Rotation;                                          // 0x40(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        Width;                                             // 0x58(0x4)(ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
	float                                        LayerWidthRatio;                                   // 0x5C(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SideFalloff;                                       // 0x60(0x4)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        LeftSideFalloffFactor;                             // 0x64(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        RightSideFalloffFactor;                            // 0x68(0x4)(BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        LeftSideLayerFalloffFactor;                        // 0x6C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        RightSideLayerFalloffFactor;                       // 0x70(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        EndFalloff;                                        // 0x74(0x4)(Edit, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FLandscapeSplineConnection>    ConnectedSegments;                                 // 0x78(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FLandscapeSplineInterpPoint>   Points;                                            // 0x88(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FBox                                  Bounds;                                            // 0x98(0x38)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UControlPointMeshComponent*            LocalMeshComponent;                                // 0xD0(0x8)(Net, EditFixedSize, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class ULandscapeSplineControlPoint* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class Landscape.LandscapeSplineSegment
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection     Connections[0x2];                                  // 0x28(0x30)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FInterpCurveVector                    SplineInfo;                                        // 0x58(0x18)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FLandscapeSplineInterpPoint>   Points;                                            // 0x70(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FBox                                  Bounds;                                            // 0x80(0x38)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class USplineMeshComponent*>          LocalMeshComponents;                               // 0xB8(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class ULandscapeSplineSegment* GetDefaultObj();

};

// 0x30 (0x850 - 0x820)
// Class Landscape.LandscapeStreamingProxy
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	TSoftObjectPtr<class ALandscape>             LandscapeActorRef;                                 // 0x820(0x30)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ALandscapeStreamingProxy* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class Landscape.LandscapeWeightmapUsage
class ULandscapeWeightmapUsage : public UObject
{
public:
	class ULandscapeComponent*                   ChannelUsage[0x4];                                 // 0x28(0x20)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 LayerGuid;                                         // 0x48(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ULandscapeWeightmapUsage* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeGrassOutput
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                   GrassTypes;                                        // 0xB0(0x10)(ConstParm, BlueprintVisible, Net, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMaterialExpressionLandscapeGrassOutput* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeLayerBlend
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>              Layers;                                            // 0xB0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMaterialExpressionLandscapeLayerBlend* GetDefaultObj();

};

// 0x18 (0xC8 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeLayerCoords
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	enum class ETerrainCoordMappingType          MappingType;                                       // 0xB0(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ELandscapeCustomizedCoordType     CustomUVType;                                      // 0xB1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CFB[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MappingScale;                                      // 0xB4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MappingRotation;                                   // 0xB8(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MappingPanU;                                       // 0xBC(0x4)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MappingPanV;                                       // 0xC0(0x4)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2CFD[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMaterialExpressionLandscapeLayerCoords* GetDefaultObj();

};

// 0x8 (0x4D0 - 0x4C8)
// Class Landscape.ControlPointMeshActor
class AControlPointMeshActor : public AActor
{
public:
	class UControlPointMeshComponent*            ControlPointMeshComponent;                         // 0x4C8(0x8)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig)

	static class UClass* StaticClass();
	static class AControlPointMeshActor* GetDefaultObj();

};

// 0x0 (0x4C8 - 0x4C8)
// Class Landscape.LandscapeBlueprintBrushBase
class ALandscapeBlueprintBrushBase : public AActor
{
public:

	static class UClass* StaticClass();
	static class ALandscapeBlueprintBrushBase* GetDefaultObj();

	bool RequestLandscapeUpdate();
	class UTextureRenderTarget2D* Render();
	struct FIntPoint Initialize();
	TArray<class UObject*> GetBlueprintRenderDependencies();
};

// 0x0 (0x28 - 0x28)
// Class Landscape.LandscapeHLODBuilder
class ULandscapeHLODBuilder : public UHLODBuilder
{
public:

	static class UClass* StaticClass();
	static class ULandscapeHLODBuilder* GetDefaultObj();

};

// 0x200 (0x228 - 0x28)
// Class Landscape.LandscapeInfo
class ULandscapeInfo : public UObject
{
public:
	TWeakObjectPtr<class ALandscape>             LandscapeActor;                                    // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 LandscapeGuid;                                     // 0x30(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ComponentSizeQuads;                                // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SubsectionSizeQuads;                               // 0x44(0x4)(Edit, ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ComponentNumSubsections;                           // 0x48(0x4)(ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D09[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               DrawScale;                                         // 0x50(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D0A[0xB0];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<TWeakObjectPtr<class ALandscapeStreamingProxy>> StreamingProxies;                                  // 0x118(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D0B[0x100];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeInfo* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class Landscape.LandscapeInfoMap
class ULandscapeInfoMap : public UObject
{
public:
	uint8                                        Pad_2D0C[0x58];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeInfoMap* GetDefaultObj();

};

// 0x18 (0x780 - 0x768)
// Class Landscape.LandscapeNaniteComponent
class ULandscapeNaniteComponent : public UStaticMeshComponent
{
public:
	struct FGuid                                 ProxyContentId;                                    // 0x768(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnabled;                                          // 0x778(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_2D0E[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeNaniteComponent* GetDefaultObj();

};

// 0x18 (0x4E0 - 0x4C8)
// Class Landscape.LandscapeSplineActor
class ALandscapeSplineActor : public AActor
{
public:
	uint8                                        Pad_2D0F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 LandscapeGuid;                                     // 0x4D0(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ALandscapeSplineActor* GetDefaultObj();

};

// 0x10 (0x4D8 - 0x4C8)
// Class Landscape.LandscapeSplineMeshesActor
class ALandscapeSplineMeshesActor : public APartitionActor
{
public:
	TArray<class UStaticMeshComponent*>          StaticMeshComponents;                              // 0x4C8(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ALandscapeSplineMeshesActor* GetDefaultObj();

};

// 0x18 (0x58 - 0x40)
// Class Landscape.LandscapeSubsystem
class ULandscapeSubsystem : public UTickableWorldSubsystem
{
public:
	uint8                                        Pad_2D12[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeSubsystem* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeLayerSample
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	class FName                                  ParameterName;                                     // 0xB0(0x8)(BlueprintVisible, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        PreviewWeight;                                     // 0xB8(0x4)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D13[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMaterialExpressionLandscapeLayerSample* GetDefaultObj();

};

// 0x60 (0x110 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeLayerSwitch
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                      LayerUsed;                                         // 0xB0(0x28)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FExpressionInput                      LayerNotUsed;                                      // 0xD8(0x28)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  ParameterName;                                     // 0x100(0x8)(BlueprintVisible, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        PreviewUsed : 1;                                   // Mask: 0x1, PropSize: 0x10x108(0x1)(BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D14[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMaterialExpressionLandscapeLayerSwitch* GetDefaultObj();

};

// 0x78 (0x128 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeLayerWeight
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                      Base;                                              // 0xB0(0x28)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, DuplicateTransient)
	struct FExpressionInput                      Layer;                                             // 0xD8(0x28)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	class FName                                  ParameterName;                                     // 0x100(0x8)(BlueprintVisible, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        PreviewWeight;                                     // 0x108(0x4)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D16[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ConstBase;                                         // 0x110(0x18)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMaterialExpressionLandscapeLayerWeight* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FPhysicalMaterialInput>        Inputs;                                            // 0xB0(0x10)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMaterialExpressionLandscapePhysicalMaterialOutput* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeVisibilityMask
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:

	static class UClass* StaticClass();
	static class UMaterialExpressionLandscapeVisibilityMask* GetDefaultObj();

};

}


