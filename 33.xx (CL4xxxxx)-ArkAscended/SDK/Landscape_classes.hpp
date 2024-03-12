#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x770 - 0x760)
// Class Landscape.ControlPointMeshComponent
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:
	float                                        VirtualTextureMainPassMaxDrawDistance;             // 0x760(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_13C3[0xC];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UControlPointMeshComponent* GetDefaultObj();

};

// 0x8 (0x4C8 - 0x4C0)
// Class Landscape.GroundClutterLayerActor
class AGroundClutterLayerActor : public AActor
{
public:
	class UGroundClutterComponent*               ClutterComponent;                                  // 0x4C0(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AGroundClutterLayerActor* GetDefaultObj();

};

// 0x50 (0x7B0 - 0x760)
// Class Landscape.GroundClutterComponent
class UGroundClutterComponent : public UStaticMeshComponent
{
public:
	TArray<struct FClutterData>                  ClutterLayers;                                     // 0x760(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	TArray<struct FClutterData>                  ActiveClutterLayers;                               // 0x770(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        LayerID;                                           // 0x780(0x4)(Edit, ExportObject, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	bool                                         bDrawDebugInfo;                                    // 0x784(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_13CC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class ALandscapeProxy*                       NewLandscapeComponent;                             // 0x788(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_13CD[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGroundClutterComponent* GetDefaultObj();

};

// 0x0 (0x510 - 0x510)
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

// 0x358 (0x818 - 0x4C0)
// Class Landscape.LandscapeProxy
class ALandscapeProxy : public APartitionActor
{
public:
	uint8                                        Pad_13FA[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class ULandscapeSplinesComponent*            SplineComponent;                                   // 0x4C8(0x8)(ConstParm, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig)
	struct FGuid                                 LandscapeGuid;                                     // 0x4D0(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FLandscapePerLODMaterialOverride> PerLODOverrideMaterials;                           // 0x4E0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FIntPoint                             LandscapeSectionOffset;                            // 0x4F0(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        MaxLODLevel;                                       // 0x4F8(0x4)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ComponentScreenSizeToUseSubSections;               // 0x4FC(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Lod0ScreenSize;                                    // 0x500(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        LOD0DistributionSetting;                           // 0x504(0x4)(Edit, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        LODDistributionSetting;                            // 0x508(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        StaticLightingLOD;                                 // 0x50C(0x4)(ConstParm, BlueprintVisible, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPhysicalMaterial*                     DefaultPhysMaterial;                               // 0x510(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        StreamingDistanceMultiplier;                       // 0x518(0x4)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig)
	uint8                                        Pad_13FF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    LandscapeMaterial;                                 // 0x520(0x8)(BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1400[0x60];                                    // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    LandscapeHoleMaterial;                             // 0x588(0x8)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class URuntimeVirtualTexture*>        RuntimeVirtualTextures;                            // 0x590(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bSetCreateRuntimeVirtualTextureVolumes;            // 0x5A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bVirtualTextureRenderWithQuad;                     // 0x5A1(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bVirtualTextureRenderWithQuadHQ;                   // 0x5A2(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1403[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        VirtualTextureNumLods;                             // 0x5A4(0x4)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        VirtualTextureLodBias;                             // 0x5A8(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;                      // 0x5AC(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1404[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        NegativeZBoundsExtension;                          // 0x5B0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PositiveZBoundsExtension;                          // 0x5B4(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class ULandscapeComponent*>           LandscapeComponents;                               // 0x5B8(0x10)(Edit, ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                               // 0x5C8(0x10)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                 // 0x5D8(0x10)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class ULandscapeNaniteComponent*             NaniteComponent;                                   // 0x5E8(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1407[0x64];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bHasLandscapeGrass;                                // 0x654(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1409[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StaticLightingResolution;                          // 0x658(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        CastShadow : 1;                                    // Mask: 0x1, PropSize: 0x10x65C(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        bCastDynamicShadow : 1;                            // Mask: 0x2, PropSize: 0x10x65C(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bCastStaticShadow : 1;                             // Mask: 0x4, PropSize: 0x10x65C(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_92 : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	enum class EShadowCacheInvalidationBehavior  ShadowCacheInvalidationBehavior;                   // 0x65D(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bCastContactShadow : 1;                            // Mask: 0x1, PropSize: 0x10x65E(0x1)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_93 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_140D[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bCastFarShadow : 1;                                // Mask: 0x1, PropSize: 0x10x660(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_94 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_140F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bCastHiddenShadow : 1;                             // Mask: 0x1, PropSize: 0x10x664(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_95 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1410[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bCastShadowAsTwoSided : 1;                         // Mask: 0x1, PropSize: 0x10x668(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_96 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1413[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bAffectDistanceFieldLighting : 1;                  // Mask: 0x1, PropSize: 0x10x66C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_97 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	struct FLightingChannels                     LightingChannels;                                  // 0x66D(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_1414[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bUseMaterialPositionOffsetInStaticLighting : 1;    // Mask: 0x1, PropSize: 0x10x670(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bRenderCustomDepth : 1;                            // Mask: 0x2, PropSize: 0x10x670(0x1)(Edit, ConstParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_98 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1415[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ERendererStencilMask              CustomDepthStencilWriteMask;                       // 0x674(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1417[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CustomDepthStencilValue;                           // 0x678(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        LDMaxDrawDistance;                                 // 0x67C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLightmassPrimitiveSettings           LightmassSettings;                                 // 0x680(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        CollisionMipLevel;                                 // 0x698(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SimpleCollisionMipLevel;                           // 0x69C(0x4)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_141A[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBodyInstance                         BodyInstance;                                      // 0x6A8(0x150)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, EditConst)
	uint8                                        bGenerateOverlapEvents : 1;                        // Mask: 0x1, PropSize: 0x10x7F8(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bBakeMaterialPositionOffsetIntoCollision : 1;      // Mask: 0x2, PropSize: 0x10x7F8(0x1)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_99 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_141C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ComponentSizeQuads;                                // 0x7FC(0x4)(ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SubsectionSizeQuads;                               // 0x800(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        NumSubsections;                                    // 0x804(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bUsedForNavigation : 1;                            // Mask: 0x1, PropSize: 0x10x808(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bFillCollisionUnderLandscapeForNavmesh : 1;        // Mask: 0x2, PropSize: 0x10x808(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_9A : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_141F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bUseDynamicMaterialInstance;                       // 0x80C(0x1)(ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ENavDataGatheringMode             NavigationGeometryGatheringMode;                   // 0x80D(0x1)(Edit, ConstParm, Net, Parm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bRestrictStaticMeshGrassTypes;                     // 0x80E(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseLandscapeForCullingInvisibleHLODVertices;      // 0x80F(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bHasLayersContent;                                 // 0x810(0x1)(Edit, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1420[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ALandscapeProxy* GetDefaultObj();

	enum class ERuntimeVirtualTextureMainPassType SetVirtualTextureRenderPassType();
	void SetLandscapeMaterialVectorParameterValue(class FName* ParameterName, struct FLinearColor* Value);
	void SetLandscapeMaterialTextureParameterValue(class FName* ParameterName, class UTexture** Value);
	void SetLandscapeMaterialScalarParameterValue(class FName* ParameterName, float* Value);
	bool LandscapeExportHeightmapToRenderTarget(class UTextureRenderTarget2D** InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies);
	class ALandscape* GetLandscapeActor();
	void EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial);
	float EditorApplySpline(class USplineComponent* InSplineComponent, float* StartWidth, float* EndWidth, float* StartSideFalloff, float* EndSideFalloff, int32* NumSubdivisions, bool* bRaiseHeights, bool* bLowerHeights, class ULandscapeLayerInfoObject** PaintLayer, class FName EditLayerName);
	void ChangeLODDistanceFactor(float* InLODDistanceFactor);
	void ChangeComponentScreenSizeToUseSubSections(float* InComponentScreenSizeToUseSubSections);
};

// 0x0 (0x818 - 0x818)
// Class Landscape.Landscape
class ALandscape : public ALandscapeProxy
{
public:

	static class UClass* StaticClass();
	static class ALandscape* GetDefaultObj();

	struct FBox2D RenderHeightmap(struct FTransform* InWorldTransform, class UTextureRenderTarget2D** OutRenderTarget);
};

// 0x0 (0xC8 - 0xC8)
// Class Landscape.LandscapeLODStreamingProxy_DEPRECATED
class ULandscapeLODStreamingProxy_DEPRECATED : public UStreamableRenderAsset
{
public:

	static class UClass* StaticClass();
	static class ULandscapeLODStreamingProxy_DEPRECATED* GetDefaultObj();

};

// 0x200 (0x890 - 0x690)
// Class Landscape.LandscapeComponent
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int32                                        SectionBaseX;                                      // 0x690(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SectionBaseY;                                      // 0x694(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ComponentSizeQuads;                                // 0x698(0x4)(ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SubsectionSizeQuads;                               // 0x69C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        NumSubsections;                                    // 0x6A0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_144A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    OverrideMaterial;                                  // 0x6A8(0x8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    OverrideHoleMaterial;                              // 0x6B0(0x8)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UMaterialInstanceConstant*>     MaterialInstances;                                 // 0x6B8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UMaterialInstanceDynamic*>      MaterialInstancesDynamic;                          // 0x6C8(0x10)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<int8>                                 LODIndexToMaterialIndex;                           // 0x6D8(0x10)(OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class UTexture2D*                            XYOffsetmapTexture;                                // 0x6E8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector4                              WeightmapScaleBias;                                // 0x6F0(0x20)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        WeightmapSubsectionOffset;                         // 0x710(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_144C[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              HeightmapScaleBias;                                // 0x720(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FBox                                  CachedLocalBox;                                    // 0x740(0x38)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class ULandscapeHeightfieldCollisionComponent* CollisionComponentRef;                             // 0x778(0x8)(EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUserTriggeredChangeRequested;                     // 0x780(0x1)(BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bNaniteActive;                                     // 0x781(0x1)(ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_144E[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            HeightmapTexture;                                  // 0x788(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations;                         // 0x790(0x10)(Edit, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UTexture2D*>                    WeightmapTextures;                                 // 0x7A0(0x10)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FLandscapePerLODMaterialOverride> PerLODOverrideMaterials;                           // 0x7B0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        GrassMapExtendedZScale;                            // 0x7C0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1454[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             GrassMapExtendedBounds;                            // 0x7C8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 MapBuildDataId;                                    // 0x7D8(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CollisionMipLevel;                                 // 0x7E8(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SimpleCollisionMipLevel;                           // 0x7EC(0x4)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        NegativeZBoundsExtension;                          // 0x7F0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PositiveZBoundsExtension;                          // 0x7F4(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        StaticLightingResolution;                          // 0x7F8(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ForcedLOD;                                         // 0x7FC(0x4)(Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        LODBias;                                           // 0x800(0x4)(Edit, ExportObject, OutParm, ReturnParm, Transient, DisableEditOnInstance, DuplicateTransient)
	struct FGuid                                 StateId;                                           // 0x804(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FGuid                                 BakedTextureMaterialGuid;                          // 0x814(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 LastBakedTextureMaterialGuid;                      // 0x824(0x10)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1465[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            GIBakedBaseColorTexture;                           // 0x838(0x8)(ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    MobileMaterialInterface;                           // 0x840(0x8)(Edit, ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UMaterialInterface*>            MobileMaterialInterfaces;                          // 0x848(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UTexture2D*>                    MobileWeightmapTextures;                           // 0x858(0x10)(Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1467[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeComponent* GetDefaultObj();

	int32 SetLODBias();
	int32 SetForcedLOD();
	class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32 InIndex);
	float EditorGetPaintLayerWeightByNameAtLocation(const struct FVector& InLocation, class FName* InPaintLayerName);
	float EditorGetPaintLayerWeightAtLocation(const struct FVector& InLocation, class ULandscapeLayerInfoObject** PaintLayer);
};

// 0x0 (0x4C0 - 0x4C0)
// Class Landscape.LandscapeGizmoActor
class ALandscapeGizmoActor : public AActor
{
public:

	static class UClass* StaticClass();
	static class ALandscapeGizmoActor* GetDefaultObj();

};

// 0x50 (0x510 - 0x4C0)
// Class Landscape.LandscapeGizmoActiveActor
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	uint8                                        Pad_1476[0x50];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ALandscapeGizmoActiveActor* GetDefaultObj();

};

// 0x0 (0x690 - 0x690)
// Class Landscape.LandscapeGizmoRenderComponent
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:

	static class UClass* StaticClass();
	static class ULandscapeGizmoRenderComponent* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class Landscape.LandscapeGrassType
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                 GrassVarieties;                                    // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bEnableDensityScaling : 1;                         // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_9C : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_147A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UStaticMesh*                           GrassMesh;                                         // 0x40(0x8)(ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        GrassDensity;                                      // 0x48(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PlacementJitter;                                   // 0x4C(0x4)(ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        StartCullDistance;                                 // 0x50(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        EndCullDistance;                                   // 0x54(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         RandomRotation;                                    // 0x58(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         AlignToSurface;                                    // 0x59(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_147C[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        LayerID;                                           // 0x5C(0x4)(Edit, ExportObject, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ULandscapeGrassType* GetDefaultObj();

};

// 0xE8 (0x778 - 0x690)
// Class Landscape.LandscapeHeightfieldCollisionComponent
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeLayerInfoObject*>     ComponentLayerInfos;                               // 0x690(0x10)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SectionBaseX;                                      // 0x6A0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SectionBaseY;                                      // 0x6A4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        CollisionSizeQuads;                                // 0x6A8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CollisionScale;                                    // 0x6AC(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SimpleCollisionSizeQuads;                          // 0x6B0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1486[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                CollisionQuadFlags;                                // 0x6B8(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 HeightfieldGuid;                                   // 0x6C8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FBox                                  CachedLocalBox;                                    // 0x6D8(0x38)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class ULandscapeComponent*                   RenderComponentRef;                                // 0x710(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1487[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<class UPhysicalMaterial*>             CookedPhysicalMaterials;                           // 0x728(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1488[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeHeightfieldCollisionComponent* GetDefaultObj();

	class ULandscapeComponent* GetRenderComponent();
};

// 0x30 (0x58 - 0x28)
// Class Landscape.LandscapeLayerInfoObject
class ULandscapeLayerInfoObject : public UObject
{
public:
	int32                                        LandscapeInfoID;                                   // 0x28(0x4)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  LayerName;                                         // 0x2C(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_148C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPhysicalMaterial*                     PhysMaterial;                                      // 0x38(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        Hardness;                                          // 0x40(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FLinearColor                          LayerUsageDebugColor;                              // 0x44(0x10)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1490[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeLayerInfoObject* GetDefaultObj();

};

// 0x18 (0x250 - 0x238)
// Class Landscape.LandscapeMaterialInstanceConstant
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo;                              // 0x238(0x10)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bIsLayerThumbnail : 1;                             // Mask: 0x1, PropSize: 0x10x248(0x1)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDisableTessellation : 1;                          // Mask: 0x2, PropSize: 0x10x248(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bMobile : 1;                                       // Mask: 0x4, PropSize: 0x10x248(0x1)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bEditorToolUsage : 1;                              // Mask: 0x8, PropSize: 0x10x248(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_14A3[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeMaterialInstanceConstant* GetDefaultObj();

};

// 0x18 (0x790 - 0x778)
// Class Landscape.LandscapeMeshCollisionComponent
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	struct FGuid                                 MeshGuid;                                          // 0x778(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_14A6[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeMeshCollisionComponent* GetDefaultObj();

};

// 0x8 (0x4C8 - 0x4C0)
// Class Landscape.LandscapeMeshProxyActor
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*          LandscapeMeshProxyComponent;                       // 0x4C0(0x8)(ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig)

	static class UClass* StaticClass();
	static class ALandscapeMeshProxyActor* GetDefaultObj();

};

// 0x30 (0x790 - 0x760)
// Class Landscape.LandscapeMeshProxyComponent
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	struct FGuid                                 LandscapeGuid;                                     // 0x760(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FIntPoint>                     ProxyComponentBases;                               // 0x770(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int8                                         ProxyLOD;                                          // 0x780(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_14AD[0xF];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeMeshProxyComponent* GetDefaultObj();

};

// 0x78 (0xB0 - 0x38)
// Class Landscape.LandscapeSettings
class ULandscapeSettings : public UDeveloperSettings
{
public:
	int32                                        MaxNumberOfLayers;                                 // 0x38(0x4)(Edit, ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ELandscapeDirtyingMode            LandscapeDirtyingMode;                             // 0x3C(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_14B1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        SideResolutionLimit;                               // 0x40(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_14B3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class UMaterialInterface>     DefaultLandscapeMaterial;                          // 0x48(0x30)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TSoftObjectPtr<class ULandscapeLayerInfoObject> DefaultLayerInfoObject;                            // 0x78(0x30)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bRestrictiveMode;                                  // 0xA8(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_14B4[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeSettings* GetDefaultObj();

};

// 0x30 (0x6C0 - 0x690)
// Class Landscape.LandscapeSplinesComponent
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	TArray<class ULandscapeSplineControlPoint*>  ControlPoints;                                     // 0x690(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class ULandscapeSplineSegment*>       Segments;                                          // 0x6A0(0x10)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class UMeshComponent*>                CookedForeignMeshComponents;                       // 0x6B0(0x10)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

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
	float                                        Width;                                             // 0x58(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst)
	float                                        LayerWidthRatio;                                   // 0x5C(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        SideFalloff;                                       // 0x60(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        LeftSideFalloffFactor;                             // 0x64(0x4)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        RightSideFalloffFactor;                            // 0x68(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        LeftSideLayerFalloffFactor;                        // 0x6C(0x4)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        RightSideLayerFalloffFactor;                       // 0x70(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        EndFalloff;                                        // 0x74(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FLandscapeSplineConnection>    ConnectedSegments;                                 // 0x78(0x10)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FLandscapeSplineInterpPoint>   Points;                                            // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FBox                                  Bounds;                                            // 0x98(0x38)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UControlPointMeshComponent*            LocalMeshComponent;                                // 0xD0(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class ULandscapeSplineControlPoint* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class Landscape.LandscapeSplineSegment
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection     Connections[0x2];                                  // 0x28(0x30)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FInterpCurveVector                    SplineInfo;                                        // 0x58(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FLandscapeSplineInterpPoint>   Points;                                            // 0x70(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	struct FBox                                  Bounds;                                            // 0x80(0x38)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class USplineMeshComponent*>          LocalMeshComponents;                               // 0xB8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class ULandscapeSplineSegment* GetDefaultObj();

};

// 0x30 (0x848 - 0x818)
// Class Landscape.LandscapeStreamingProxy
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	TSoftObjectPtr<class ALandscape>             LandscapeActorRef;                                 // 0x818(0x30)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ALandscapeStreamingProxy* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class Landscape.LandscapeWeightmapUsage
class ULandscapeWeightmapUsage : public UObject
{
public:
	class ULandscapeComponent*                   ChannelUsage[0x4];                                 // 0x28(0x20)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 LayerGuid;                                         // 0x48(0x10)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ULandscapeWeightmapUsage* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeGrassOutput
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                   GrassTypes;                                        // 0xB0(0x10)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMaterialExpressionLandscapeGrassOutput* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeLayerBlend
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>              Layers;                                            // 0xB0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMaterialExpressionLandscapeLayerBlend* GetDefaultObj();

};

// 0x18 (0xC8 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeLayerCoords
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	enum class ETerrainCoordMappingType          MappingType;                                       // 0xB0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ELandscapeCustomizedCoordType     CustomUVType;                                      // 0xB1(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_14EB[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MappingScale;                                      // 0xB4(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MappingRotation;                                   // 0xB8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MappingPanU;                                       // 0xBC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MappingPanV;                                       // 0xC0(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_14ED[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMaterialExpressionLandscapeLayerCoords* GetDefaultObj();

};

// 0x8 (0x4C8 - 0x4C0)
// Class Landscape.ControlPointMeshActor
class AControlPointMeshActor : public AActor
{
public:
	class UControlPointMeshComponent*            ControlPointMeshComponent;                         // 0x4C0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig)

	static class UClass* StaticClass();
	static class AControlPointMeshActor* GetDefaultObj();

};

// 0x0 (0x4C0 - 0x4C0)
// Class Landscape.LandscapeBlueprintBrushBase
class ALandscapeBlueprintBrushBase : public AActor
{
public:

	static class UClass* StaticClass();
	static class ALandscapeBlueprintBrushBase* GetDefaultObj();

	void RequestLandscapeUpdate(bool bInUserTriggered);
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
	TWeakObjectPtr<class ALandscape>             LandscapeActor;                                    // 0x28(0x8)(Edit, ConstParm, Net, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 LandscapeGuid;                                     // 0x30(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ComponentSizeQuads;                                // 0x40(0x4)(ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        SubsectionSizeQuads;                               // 0x44(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ComponentNumSubsections;                           // 0x48(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1517[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               DrawScale;                                         // 0x50(0x18)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1518[0xB0];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<TWeakObjectPtr<class ALandscapeStreamingProxy>> StreamingProxies;                                  // 0x118(0x10)(Edit, BlueprintVisible, ExportObject, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_151A[0x100];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeInfo* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class Landscape.LandscapeInfoMap
class ULandscapeInfoMap : public UObject
{
public:
	uint8                                        Pad_151C[0x58];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeInfoMap* GetDefaultObj();

};

// 0x20 (0x780 - 0x760)
// Class Landscape.LandscapeNaniteComponent
class ULandscapeNaniteComponent : public UStaticMeshComponent
{
public:
	struct FGuid                                 ProxyContentId;                                    // 0x760(0x10)(Edit, ConstParm, ExportObject, Net, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnabled;                                          // 0x770(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_151F[0xF];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeNaniteComponent* GetDefaultObj();

};

// 0x18 (0x4D8 - 0x4C0)
// Class Landscape.LandscapeSplineActor
class ALandscapeSplineActor : public AActor
{
public:
	uint8                                        Pad_1523[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 LandscapeGuid;                                     // 0x4C8(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ALandscapeSplineActor* GetDefaultObj();

};

// 0x10 (0x4D0 - 0x4C0)
// Class Landscape.LandscapeSplineMeshesActor
class ALandscapeSplineMeshesActor : public APartitionActor
{
public:
	TArray<class UStaticMeshComponent*>          StaticMeshComponents;                              // 0x4C0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ALandscapeSplineMeshesActor* GetDefaultObj();

};

// 0x18 (0x58 - 0x40)
// Class Landscape.LandscapeSubsystem
class ULandscapeSubsystem : public UTickableWorldSubsystem
{
public:
	uint8                                        Pad_152C[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULandscapeSubsystem* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeLayerSample
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	class FName                                  ParameterName;                                     // 0xB0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        PreviewWeight;                                     // 0xB8(0x4)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1531[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMaterialExpressionLandscapeLayerSample* GetDefaultObj();

};

// 0x60 (0x110 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeLayerSwitch
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                      LayerUsed;                                         // 0xB0(0x28)(BlueprintVisible, ExportObject, EditFixedSize, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	struct FExpressionInput                      LayerNotUsed;                                      // 0xD8(0x28)(Edit, BlueprintVisible, EditFixedSize, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  ParameterName;                                     // 0x100(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        PreviewUsed : 1;                                   // Mask: 0x1, PropSize: 0x10x108(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1538[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMaterialExpressionLandscapeLayerSwitch* GetDefaultObj();

};

// 0x78 (0x128 - 0xB0)
// Class Landscape.MaterialExpressionLandscapeLayerWeight
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                      Base;                                              // 0xB0(0x28)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DuplicateTransient)
	struct FExpressionInput                      Layer;                                             // 0xD8(0x28)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig)
	class FName                                  ParameterName;                                     // 0x100(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	float                                        PreviewWeight;                                     // 0x108(0x4)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1540[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ConstBase;                                         // 0x110(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Transient, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMaterialExpressionLandscapeLayerWeight* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FPhysicalMaterialInput>        Inputs;                                            // 0xB0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

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


