#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELandscapeSetupErrors : uint8
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4,
};

enum class ERTDrawingType : uint8
{
	RTAtlas                        = 0,
	RTAtlasToNonAtlas              = 1,
	RTNonAtlasToAtlas              = 2,
	RTNonAtlas                     = 3,
	RTMips                         = 4,
	ERTDrawingType_MAX             = 5,
};

enum class EHeightmapRTType : uint8
{
	HeightmapRT_CombinedAtlas      = 0,
	HeightmapRT_CombinedNonAtlas   = 1,
	HeightmapRT_Scratch1           = 2,
	HeightmapRT_Scratch2           = 3,
	HeightmapRT_Scratch3           = 4,
	HeightmapRT_Mip1               = 5,
	HeightmapRT_Mip2               = 6,
	HeightmapRT_Mip3               = 7,
	HeightmapRT_Mip4               = 8,
	HeightmapRT_Mip5               = 9,
	HeightmapRT_Mip6               = 10,
	HeightmapRT_Mip7               = 11,
	HeightmapRT_Count              = 12,
	HeightmapRT_MAX                = 13,
};

enum class EWeightmapRTType : uint8
{
	WeightmapRT_Scratch_RGBA       = 0,
	WeightmapRT_Scratch1           = 1,
	WeightmapRT_Scratch2           = 2,
	WeightmapRT_Scratch3           = 3,
	WeightmapRT_Mip0               = 4,
	WeightmapRT_Mip1               = 5,
	WeightmapRT_Mip2               = 6,
	WeightmapRT_Mip3               = 7,
	WeightmapRT_Mip4               = 8,
	WeightmapRT_Mip5               = 9,
	WeightmapRT_Mip6               = 10,
	WeightmapRT_Mip7               = 11,
	WeightmapRT_Count              = 12,
	WeightmapRT_MAX                = 13,
};

enum class ELandscapeBlendMode : uint8
{
	LSBM_AdditiveBlend             = 0,
	LSBM_AlphaBlend                = 1,
	LSBM_MAX                       = 2,
};

enum class ELandscapeClearMode : uint8
{
	Clear_Weightmap                = 1,
	Clear_Heightmap                = 2,
	Clear_All                      = 3,
	Clear_MAX                      = 4,
};

enum class ELandscapeGizmoType : uint8
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3,
};

enum class ELandscapeGizmoSnapType : uint8
{
	None                           = 0,
	Component                      = 1,
	Texel                          = 2,
	ELandscapeGizmoSnapType_MAX    = 3,
};

enum class EGrassScaling : uint8
{
	Uniform                        = 0,
	Free                           = 1,
	LockXY                         = 2,
	EGrassScaling_MAX              = 3,
};

enum class EGrassSurfaceFilter : uint8
{
	UpOnly                         = 0,
	DownOnly                       = 1,
	All                            = 2,
	EGrassSurfaceFilter_MAX        = 3,
};

enum class ESplineModulationColorMask : uint8
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	ESplineModulationColorMask_MAX = 4,
};

enum class ELandscapeDirtyingMode : uint8
{
	Auto                           = 0,
	InLandscapeModeOnly            = 1,
	InLandscapeModeAndUserTriggeredChanges = 2,
	ELandscapeDirtyingMode_MAX     = 3,
};

enum class ELandscapeSplineMeshOrientation : uint8
{
	LSMO_XUp                       = 0,
	LSMO_YUp                       = 1,
	LSMO_MAX                       = 2,
};

enum class ELandscapeLayerBlendType : uint8
{
	LB_WeightBlend                 = 0,
	LB_AlphaBlend                  = 1,
	LB_HeightBlend                 = 2,
	LB_MAX                         = 3,
};

enum class ETerrainCoordMappingType : uint8
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4,
};

enum class ELandscapeCustomizedCoordType : uint8
{
	LCCT_None                      = 0,
	LCCT_CustomUV0                 = 1,
	LCCT_CustomUV1                 = 2,
	LCCT_CustomUV2                 = 3,
	LCCT_WeightMapUV               = 4,
	LCCT_MAX                       = 5,
};

enum class ELandscapeResizeMode : uint8
{
	Resample                       = 0,
	Clip                           = 1,
	Expand                         = 2,
	ELandscapeResizeMode_MAX       = 3,
};

enum class ELandscapeImportAlphamapType : uint8
{
	Additive                       = 0,
	Layered                        = 1,
	ELandscapeImportAlphamapType_MAX = 2,
};

enum class ELandscapeLayerPaintingRestriction : uint8
{
	None                           = 0,
	UseMaxLayers                   = 1,
	ExistingOnly                   = 2,
	UseComponentAllowList          = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4,
};

enum class ELandscapeLayerDisplayMode : uint8
{
	Default                        = 0,
	Alphabetical                   = 1,
	UserSpecific                   = 2,
	ELandscapeLayerDisplayMode_MAX = 3,
};

enum class ELandscapeLODFalloff : uint8
{
	Linear                         = 0,
	SquareRoot                     = 1,
	ELandscapeLODFalloff_MAX       = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.LandscapeLayerBrush
struct FLandscapeLayerBrush
{
public:
	uint8                                        Pad_2D19[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Landscape.LandscapeLayer
struct FLandscapeLayer
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class FName                                  Name;                                              // 0x10(0x8)(ConstParm, Net, OutParm)
	bool                                         bVisible;                                          // 0x18(0x1)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLocked;                                           // 0x19(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D1A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        HeightmapAlpha;                                    // 0x1C(0x4)(ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        WeightmapAlpha;                                    // 0x20(0x4)(Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class ELandscapeBlendMode               BlendMode;                                         // 0x24(0x1)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_2D1C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FLandscapeLayerBrush>          Brushes;                                           // 0x28(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TMap<class ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend;                     // 0x38(0x50)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Landscape.LandscapeEditToolRenderData
struct FLandscapeEditToolRenderData
{
public:
	class UMaterialInterface*                    ToolMaterial;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    GizmoMaterial;                                     // 0x8(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig)
	int32                                        SelectedType;                                      // 0x10(0x4)(ExportObject, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        DebugChannelR;                                     // 0x14(0x4)(Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        DebugChannelG;                                     // 0x18(0x4)(ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        DebugChannelB;                                     // 0x1C(0x4)(BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UTexture2D*                            DataTexture;                                       // 0x20(0x8)(Edit, ExportObject, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UTexture2D*                            LayerContributionTexture;                          // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UTexture2D*                            DirtyTexture;                                      // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.WeightmapLayerAllocationInfo
struct FWeightmapLayerAllocationInfo
{
public:
	class ULandscapeLayerInfoObject*             LayerInfo;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        WeightmapTextureIndex;                             // 0x8(0x1)(Edit, ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        WeightmapTextureChannel;                           // 0x9(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D1E[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapeComponentMaterialOverride
struct FLandscapeComponentMaterialOverride
{
public:
	struct FPerPlatformInt                       LODIndex;                                          // 0x0(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D1F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapePerLODMaterialOverride
struct FLandscapePerLODMaterialOverride
{
public:
	int32                                        LODIndex;                                          // 0x0(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D20[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Landscape.WeightmapData
struct FWeightmapData
{
public:
	TArray<class UTexture2D*>                    Textures;                                          // 0x0(0x10)(Edit, EditFixedSize, Config, InstancedReference, SubobjectReference)
	TArray<struct FWeightmapLayerAllocationInfo> LayerAllocations;                                  // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class ULandscapeWeightmapUsage*>      TextureUsages;                                     // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Landscape.HeightmapData
struct FHeightmapData
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Landscape.LandscapeLayerComponentData
struct FLandscapeLayerComponentData
{
public:
	struct FHeightmapData                        HeightmapData;                                     // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FWeightmapData                        WeightmapData;                                     // 0x8(0x30)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Landscape.GizmoSelectData
struct FGizmoSelectData
{
public:
	uint8                                        Pad_2D21[0x50];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x220 (0x220 - 0x0)
// ScriptStruct Landscape.GrassVariety
struct FGrassVariety
{
public:
	class UStaticMesh*                           GrassMesh;                                         // 0x0(0x8)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	struct FPerPlatformFloat                     GrassDensity;                                      // 0x18(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D23[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPerQualityLevelFloat                 GrassDensityQuality;                               // 0x20(0x68)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bUseGrid;                                          // 0x88(0x1)(Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D24[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PlacementJitter;                                   // 0x8C(0x4)(Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FPerPlatformInt                       MinDrawDistance;                                   // 0x90(0x4)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D25[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPerQualityLevelInt                   MinDrawDistanceQuality;                            // 0x98(0x68)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FPerPlatformInt                       StartCullDistance;                                 // 0x100(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D26[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPerQualityLevelInt                   StartCullDistanceQuality;                          // 0x108(0x68)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FPerPlatformInt                       EndCullDistance;                                   // 0x170(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D27[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPerQualityLevelInt                   EndCullDistanceQuality;                            // 0x178(0x68)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        MinLOD;                                            // 0x1E0(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	enum class EGrassScaling                     Scaling;                                           // 0x1E4(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D2A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFloatInterval                        ScaleX;                                            // 0x1E8(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FFloatInterval                        ScaleY;                                            // 0x1F0(0x8)(Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FFloatInterval                        ScaleZ;                                            // 0x1F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         RandomRotation;                                    // 0x200(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         AlignToSurface;                                    // 0x201(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bUseLandscapeLightmap;                             // 0x202(0x1)(EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FLightingChannels                     LightingChannels;                                  // 0x203(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, EditConst)
	bool                                         bReceivesDecals;                                   // 0x204(0x1)(Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAffectDistanceFieldLighting;                      // 0x205(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCastDynamicShadow;                                // 0x206(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCastContactShadow;                                // 0x207(0x1)(ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bKeepInstanceBufferCPUCopy;                        // 0x208(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bIgnoreAutomaticBoundsWPODisable;                  // 0x209(0x1)(Edit, Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D2C[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	uint32                                       InstanceWorldPositionOffsetDisableDistance;        // 0x20C(0x4)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EShadowCacheInvalidationBehavior  ShadowCacheInvalidationBehavior;                   // 0x210(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bBuildFirst;                                       // 0x211(0x1)(BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bAllowRenderingToRVT;                              // 0x212(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D2D[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        TranslucencySortPriority;                          // 0x214(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        InstanceCustomDataOutDisableDistance;              // 0x218(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D2E[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct Landscape.LandscapeMaterialTextureStreamingInfo
struct FLandscapeMaterialTextureStreamingInfo
{
public:
	class FName                                  TextureName;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	float                                        TexelFactor;                                       // 0x8(0x4)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapeSplineConnection
struct FLandscapeSplineConnection
{
public:
	class ULandscapeSplineSegment*               Segment;                                           // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        End : 1;                                           // Mask: 0x1, PropSize: 0x10x8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance)
	uint8                                        Pad_2D2F[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.ForeignControlPointData
struct FForeignControlPointData
{
public:
	uint8                                        Pad_2D30[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.ForeignSplineSegmentData
struct FForeignSplineSegmentData
{
public:
	uint8                                        Pad_2D31[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.ForeignWorldSplineData
struct FForeignWorldSplineData
{
public:
	uint8                                        Pad_2D32[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct Landscape.LandscapeSplineInterpPoint
struct FLandscapeSplineInterpPoint
{
public:
	struct FVector                               Center;                                            // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	struct FVector                               Left;                                              // 0x18(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance)
	struct FVector                               Right;                                             // 0x30(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)
	struct FVector                               FalloffLeft;                                       // 0x48(0x18)(Edit, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector                               FalloffRight;                                      // 0x60(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector                               LayerLeft;                                         // 0x78(0x18)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector                               LayerRight;                                        // 0x90(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector                               LayerFalloffLeft;                                  // 0xA8(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector                               LayerFalloffRight;                                 // 0xC0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        StartEndFalloff;                                   // 0xD8(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D33[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Landscape.LandscapeSplineSegmentConnection
struct FLandscapeSplineSegmentConnection
{
public:
	class ULandscapeSplineControlPoint*          ControlPoint;                                      // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	float                                        TangentLen;                                        // 0x8(0x4)(ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  SocketName;                                        // 0xC(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D34[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Landscape.LandscapeSplineMeshEntry
struct FLandscapeSplineMeshEntry
{
public:
	class UStaticMesh*                           Mesh;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UMaterialInterface*>            MaterialOverrides;                                 // 0x8(0x10)(ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        bCenterH : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_236 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2D35[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             CenterAdjust;                                      // 0x20(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        bScaleToWidth : 1;                                 // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_237 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2D37[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Scale;                                             // 0x38(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	enum class ELandscapeSplineMeshOrientation   Orientation;                                       // 0x50(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	enum class ESplineMeshAxis                   ForwardAxis;                                       // 0x51(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class ESplineMeshAxis                   UpAxis;                                            // 0x52(0x1)(ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D39[0x5];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Landscape.GrassInput
struct FGrassInput
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	class ULandscapeGrassType*                   GrassType;                                         // 0x8(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FExpressionInput                      Input;                                             // 0x10(0x28)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Landscape.LayerBlendInput
struct FLayerBlendInput
{
public:
	class FName                                  LayerName;                                         // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
	enum class ELandscapeLayerBlendType          BlendType;                                         // 0x8(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D3A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FExpressionInput                      LayerInput;                                        // 0x10(0x28)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FExpressionInput                      HeightInput;                                       // 0x38(0x28)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        PreviewWeight;                                     // 0x60(0x4)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D3B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ConstLayerInput;                                   // 0x68(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        ConstHeightInput;                                  // 0x80(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D3C[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapeInfoLayerSettings
struct FLandscapeInfoLayerSettings
{
public:
	class ULandscapeLayerInfoObject*             LayerInfoObj;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  LayerName;                                         // 0x8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.LandscapeEditorLayerSettings
struct FLandscapeEditorLayerSettings
{
public:
	uint8                                        Pad_2D3D[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Landscape.LandscapeLayerStruct
struct FLandscapeLayerStruct
{
public:
	class ULandscapeLayerInfoObject*             LayerInfoObj;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.LandscapeImportLayerInfo
struct FLandscapeImportLayerInfo
{
public:
	uint8                                        Pad_2D3E[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapeProxyMaterialOverride
struct FLandscapeProxyMaterialOverride
{
public:
	struct FPerPlatformInt                       LODIndex;                                          // 0x0(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2D3F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Landscape.PhysicalMaterialInput
struct FPhysicalMaterialInput
{
public:
	class UPhysicalMaterial*                     PhysicalMaterial;                                  // 0x0(0x8)(Edit, ConstParm, ReturnParm, Transient, Config, GlobalConfig)
	struct FExpressionInput                      Input;                                             // 0x8(0x28)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
};

}


