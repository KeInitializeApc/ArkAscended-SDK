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
	uint8                                        Pad_2140[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Landscape.LandscapeLayer
struct FLandscapeLayer
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, Parm, Transient, DisableEditOnInstance)
	class FName                                  Name;                                              // 0x10(0x8)(ConstParm, Net, OutParm)
	bool                                         bVisible;                                          // 0x18(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	bool                                         bLocked;                                           // 0x19(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2144[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        HeightmapAlpha;                                    // 0x1C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        WeightmapAlpha;                                    // 0x20(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ELandscapeBlendMode               BlendMode;                                         // 0x24(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_2147[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FLandscapeLayerBrush>          Brushes;                                           // 0x28(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<class ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend;                     // 0x38(0x50)(BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Landscape.LandscapeEditToolRenderData
struct FLandscapeEditToolRenderData
{
public:
	class UMaterialInterface*                    ToolMaterial;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInterface*                    GizmoMaterial;                                     // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig)
	int32                                        SelectedType;                                      // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DebugChannelR;                                     // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DebugChannelG;                                     // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DebugChannelB;                                     // 0x1C(0x4)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            DataTexture;                                       // 0x20(0x8)(Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            LayerContributionTexture;                          // 0x28(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            DirtyTexture;                                      // 0x30(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.WeightmapLayerAllocationInfo
struct FWeightmapLayerAllocationInfo
{
public:
	class ULandscapeLayerInfoObject*             LayerInfo;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        WeightmapTextureIndex;                             // 0x8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        WeightmapTextureChannel;                           // 0x9(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2151[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapeComponentMaterialOverride
struct FLandscapeComponentMaterialOverride
{
public:
	struct FPerPlatformInt                       LODIndex;                                          // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2153[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapePerLODMaterialOverride
struct FLandscapePerLODMaterialOverride
{
public:
	int32                                        LODIndex;                                          // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2156[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Landscape.WeightmapData
struct FWeightmapData
{
public:
	TArray<class UTexture2D*>                    Textures;                                          // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FWeightmapLayerAllocationInfo> LayerAllocations;                                  // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class ULandscapeWeightmapUsage*>      TextureUsages;                                     // 0x20(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Landscape.HeightmapData
struct FHeightmapData
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Landscape.LandscapeLayerComponentData
struct FLandscapeLayerComponentData
{
public:
	struct FHeightmapData                        HeightmapData;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FWeightmapData                        WeightmapData;                                     // 0x8(0x30)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Landscape.GizmoSelectData
struct FGizmoSelectData
{
public:
	uint8                                        Pad_2160[0x50];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x220 (0x220 - 0x0)
// ScriptStruct Landscape.GrassVariety
struct FGrassVariety
{
public:
	class UStaticMesh*                           GrassMesh;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FPerPlatformFloat                     GrassDensity;                                      // 0x18(0x4)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2162[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPerQualityLevelFloat                 GrassDensityQuality;                               // 0x20(0x68)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseGrid;                                          // 0x88(0x1)(Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2163[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PlacementJitter;                                   // 0x8C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPerPlatformInt                       MinDrawDistance;                                   // 0x90(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2164[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPerQualityLevelInt                   MinDrawDistanceQuality;                            // 0x98(0x68)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPerPlatformInt                       StartCullDistance;                                 // 0x100(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2166[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPerQualityLevelInt                   StartCullDistanceQuality;                          // 0x108(0x68)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPerPlatformInt                       EndCullDistance;                                   // 0x170(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2168[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPerQualityLevelInt                   EndCullDistanceQuality;                            // 0x178(0x68)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MinLOD;                                            // 0x1E0(0x4)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Transient, GlobalConfig)
	enum class EGrassScaling                     Scaling;                                           // 0x1E4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_216B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFloatInterval                        ScaleX;                                            // 0x1E8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFloatInterval                        ScaleY;                                            // 0x1F0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFloatInterval                        ScaleZ;                                            // 0x1F8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         RandomRotation;                                    // 0x200(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         AlignToSurface;                                    // 0x201(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseLandscapeLightmap;                             // 0x202(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLightingChannels                     LightingChannels;                                  // 0x203(0x1)(Net, Parm, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bReceivesDecals;                                   // 0x204(0x1)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         bAffectDistanceFieldLighting;                      // 0x205(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         bCastDynamicShadow;                                // 0x206(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         bCastContactShadow;                                // 0x207(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         bKeepInstanceBufferCPUCopy;                        // 0x208(0x1)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIgnoreAutomaticBoundsWPODisable;                  // 0x209(0x1)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2172[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	uint32                                       InstanceWorldPositionOffsetDisableDistance;        // 0x20C(0x4)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EShadowCacheInvalidationBehavior  ShadowCacheInvalidationBehavior;                   // 0x210(0x1)(ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         bBuildFirst;                                       // 0x211(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowRenderingToRVT;                              // 0x212(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2173[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        TranslucencySortPriority;                          // 0x214(0x4)(Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	int32                                        InstanceCustomDataOutDisableDistance;              // 0x218(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2174[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct Landscape.LandscapeMaterialTextureStreamingInfo
struct FLandscapeMaterialTextureStreamingInfo
{
public:
	class FName                                  TextureName;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        TexelFactor;                                       // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapeSplineConnection
struct FLandscapeSplineConnection
{
public:
	class ULandscapeSplineSegment*               Segment;                                           // 0x0(0x8)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        End : 1;                                           // Mask: 0x1, PropSize: 0x10x8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	uint8                                        Pad_2177[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.ForeignControlPointData
struct FForeignControlPointData
{
public:
	uint8                                        Pad_2178[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.ForeignSplineSegmentData
struct FForeignSplineSegmentData
{
public:
	uint8                                        Pad_2181[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.ForeignWorldSplineData
struct FForeignWorldSplineData
{
public:
	uint8                                        Pad_2182[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct Landscape.LandscapeSplineInterpPoint
struct FLandscapeSplineInterpPoint
{
public:
	struct FVector                               Center;                                            // 0x0(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVector                               Left;                                              // 0x18(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                               Right;                                             // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config)
	struct FVector                               FalloffLeft;                                       // 0x48(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               FalloffRight;                                      // 0x60(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               LayerLeft;                                         // 0x78(0x18)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               LayerRight;                                        // 0x90(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               LayerFalloffLeft;                                  // 0xA8(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               LayerFalloffRight;                                 // 0xC0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        StartEndFalloff;                                   // 0xD8(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2185[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Landscape.LandscapeSplineSegmentConnection
struct FLandscapeSplineSegmentConnection
{
public:
	class ULandscapeSplineControlPoint*          ControlPoint;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, Transient, Config)
	float                                        TangentLen;                                        // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  SocketName;                                        // 0xC(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2187[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Landscape.LandscapeSplineMeshEntry
struct FLandscapeSplineMeshEntry
{
public:
	class UStaticMesh*                           Mesh;                                              // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UMaterialInterface*>            MaterialOverrides;                                 // 0x8(0x10)(Edit, ExportObject, BlueprintReadOnly, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bCenterH : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_13A : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2188[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             CenterAdjust;                                      // 0x20(0x10)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        bScaleToWidth : 1;                                 // Mask: 0x1, PropSize: 0x10x30(0x1)(BlueprintVisible, ExportObject, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_13B : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_218A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Scale;                                             // 0x38(0x18)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	enum class ELandscapeSplineMeshOrientation   Orientation;                                       // 0x50(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, SubobjectReference)
	enum class ESplineMeshAxis                   ForwardAxis;                                       // 0x51(0x1)(Edit, BlueprintVisible, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ESplineMeshAxis                   UpAxis;                                            // 0x52(0x1)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_218B[0x5];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Landscape.GrassInput
struct FGrassInput
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	class ULandscapeGrassType*                   GrassType;                                         // 0x8(0x8)(Edit, ConstParm, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FExpressionInput                      Input;                                             // 0x10(0x28)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Landscape.LayerBlendInput
struct FLayerBlendInput
{
public:
	class FName                                  LayerName;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
	enum class ELandscapeLayerBlendType          BlendType;                                         // 0x8(0x1)(BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_218D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FExpressionInput                      LayerInput;                                        // 0x10(0x28)(ConstParm, ExportObject, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FExpressionInput                      HeightInput;                                       // 0x38(0x28)(Edit, ConstParm, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PreviewWeight;                                     // 0x60(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_218E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ConstLayerInput;                                   // 0x68(0x18)(ConstParm, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ConstHeightInput;                                  // 0x80(0x4)(Edit, ExportObject, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_218F[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapeInfoLayerSettings
struct FLandscapeInfoLayerSettings
{
public:
	class ULandscapeLayerInfoObject*             LayerInfoObj;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  LayerName;                                         // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.LandscapeEditorLayerSettings
struct FLandscapeEditorLayerSettings
{
public:
	uint8                                        Pad_2190[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Landscape.LandscapeLayerStruct
struct FLandscapeLayerStruct
{
public:
	class ULandscapeLayerInfoObject*             LayerInfoObj;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.LandscapeImportLayerInfo
struct FLandscapeImportLayerInfo
{
public:
	uint8                                        Pad_2191[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapeProxyMaterialOverride
struct FLandscapeProxyMaterialOverride
{
public:
	struct FPerPlatformInt                       LODIndex;                                          // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2193[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Landscape.PhysicalMaterialInput
struct FPhysicalMaterialInput
{
public:
	class UPhysicalMaterial*                     PhysicalMaterial;                                  // 0x0(0x8)(BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, EditConst, InstancedReference)
	struct FExpressionInput                      Input;                                             // 0x8(0x28)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
};

}


