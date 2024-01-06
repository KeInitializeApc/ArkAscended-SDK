#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOptimusGroomExecDomain : uint8
{
	None                           = 0,
	ControlPoint                   = 1,
	Curve                          = 2,
	EOptimusGroomExecDomain_MAX    = 3,
};

enum class EGroomCacheImportType : uint8
{
	None                           = 0,
	Strands                        = 1,
	Guides                         = 2,
	All                            = 3,
	EGroomCacheImportType_MAX      = 4,
};

enum class EHairAtlasTextureType : uint8
{
	Depth                          = 0,
	Tangent                        = 1,
	Attribute                      = 2,
	Coverage                       = 3,
	AuxilaryData                   = 4,
	Material                       = 5,
	EHairAtlasTextureType_MAX      = 6,
};

enum class EHairCardsClusterType : uint8
{
	Low                            = 0,
	High                           = 1,
	EHairCardsClusterType_MAX      = 2,
};

enum class EHairCardsGenerationType : uint8
{
	CardsCount                     = 0,
	UseGuides                      = 1,
	EHairCardsGenerationType_MAX   = 2,
};

enum class EHairCardsSourceType : uint8
{
	Procedural                     = 0,
	Imported                       = 1,
	EHairCardsSourceType_MAX       = 2,
};

enum class EHairInterpolationQuality : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Unknown                        = 3,
	EHairInterpolationQuality_MAX  = 4,
};

enum class EHairInterpolationWeight : uint8
{
	Parametric                     = 0,
	Root                           = 1,
	Index                          = 2,
	Distance                       = 3,
	Unknown                        = 4,
	EHairInterpolationWeight_MAX   = 5,
};

enum class EGroomGeometryType : uint8
{
	Strands                        = 0,
	Cards                          = 1,
	Meshes                         = 2,
	EGroomGeometryType_MAX         = 3,
};

enum class EGroomBindingType : uint8
{
	NoneBinding                    = 0,
	Rigid                          = 1,
	Skinning                       = 2,
	EGroomBindingType_MAX          = 3,
};

enum class EGroomOverrideType : uint8
{
	Auto                           = 0,
	Enable                         = 1,
	Disable                        = 2,
	EGroomOverrideType_MAX         = 3,
};

enum class EGroomNiagaraSolvers : uint8
{
	None                           = 0,
	CosseratRods                   = 2,
	AngularSprings                 = 4,
	CustomSolver                   = 8,
	EGroomNiagaraSolvers_MAX       = 9,
};

enum class EGroomStrandsSize : uint8
{
	None                           = 0,
	Size2                          = 2,
	Size4                          = 4,
	Size8                          = 8,
	Size16                         = 16,
	Size32                         = 32,
	EGroomStrandsSize_MAX          = 33,
};

enum class EGroomInterpolationType : uint8
{
	None                           = 0,
	RigidTransform                 = 2,
	OffsetTransform                = 4,
	SmoothTransform                = 8,
	EGroomInterpolationType_MAX    = 9,
};

enum class EGroomBindingMeshType : uint8
{
	SkeletalMesh                   = 0,
	GeometryCache                  = 1,
	EGroomBindingMeshType_MAX      = 2,
};

enum class EGroomCacheAttributes : uint8
{
	None                           = 0,
	Position                       = 1,
	Width                          = 2,
	Color                          = 4,
	PositionWidth                  = 3,
	PositionColor                  = 5,
	WidthColor                     = 5,
	PositionWidthColor             = 7,
	EGroomCacheAttributes_MAX      = 8,
};

enum class EGroomCacheType : uint8
{
	None                           = 0,
	Strands                        = 1,
	Guides                         = 2,
	EGroomCacheType_MAX            = 3,
};

enum class EGroomBasisType : uint8
{
	NoBasis                        = 0,
	BezierBasis                    = 1,
	BsplineBasis                   = 2,
	CatmullromBasis                = 3,
	HermiteBasis                   = 4,
	PowerBasis                     = 5,
	EGroomBasisType_MAX            = 6,
};

enum class EGroomCurveType : uint8
{
	Cubic                          = 0,
	Linear                         = 1,
	VariableOrder                  = 2,
	EGroomCurveType_MAX            = 3,
};

enum class EFollicleMaskChannel : uint8
{
	R                              = 0,
	G                              = 1,
	B                              = 2,
	A                              = 3,
	EFollicleMaskChannel_MAX       = 4,
};

enum class EStrandsTexturesTraceType : uint8
{
	TraceInside                    = 0,
	TraceOuside                    = 1,
	TraceBidirectional             = 2,
	EStrandsTexturesTraceType_MAX  = 3,
};

enum class EStrandsTexturesMeshType : uint8
{
	Static                         = 0,
	Skeletal                       = 1,
	EStrandsTexturesMeshType_MAX   = 2,
};

enum class EGroomInterpolationQuality : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Unknown                        = 3,
	EGroomInterpolationQuality_MAX = 4,
};

enum class EGroomInterpolationWeight : uint8
{
	Parametric                     = 0,
	Root                           = 1,
	Index                          = 2,
	Unknown                        = 3,
	EGroomInterpolationWeight_MAX  = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct HairStrandsCore.GroomConversionSettings
struct FGroomConversionSettings
{
public:
	struct FVector                               Rotation;                                          // 0x0(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Scale;                                             // 0x18(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct HairStrandsCore.GroomCacheImportSettings
struct FGroomCacheImportSettings
{
public:
	bool                                         bImportGroomCache;                                 // 0x0(0x1)(Edit, Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EGroomCacheImportType             ImportType;                                        // 0x1(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D53[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        FrameStart;                                        // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        FrameEnd;                                          // 0x8(0x4)(BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bSkipEmptyFrames;                                  // 0xC(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bImportGroomAsset;                                 // 0xD(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D55[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoftObjectPath                       GroomAsset;                                        // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst)
	bool                                         bOverrideConversionSettings;                       // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D57[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGroomConversionSettings              ConversionSettings;                                // 0x38(0x30)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupDesc
struct FHairGroupDesc
{
public:
	float                                        HairLength;                                        // 0x0(0x4)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        HairWidth;                                         // 0x4(0x4)(Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         HairWidth_Override;                                // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D58[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        HairRootScale;                                     // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         HairRootScale_Override;                            // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D5A[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        HairTipScale;                                      // 0x14(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         HairTipScale_Override;                             // 0x18(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D5B[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        HairShadowDensity;                                 // 0x1C(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         HairShadowDensity_Override;                        // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D5D[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        HairRaytracingRadiusScale;                         // 0x24(0x4)(Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         HairRaytracingRadiusScale_Override;                // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bUseHairRaytracingGeometry;                        // 0x29(0x1)(Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bUseHairRaytracingGeometry_Override;               // 0x2A(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D5F[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        LODBias;                                           // 0x2C(0x4)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, DuplicateTransient)
	bool                                         bUseStableRasterization;                           // 0x30(0x1)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bUseStableRasterization_Override;                  // 0x31(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bScatterSceneLighting;                             // 0x32(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bScatterSceneLighting_Override;                    // 0x33(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bSupportVoxelization;                              // 0x34(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bSupportVoxelization_Override;                     // 0x35(0x1)(Edit, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D64[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        HairLengthScale;                                   // 0x38(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         HairLengthScale_Override;                          // 0x3C(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D65[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupInfo
struct FHairGroupInfo
{
public:
	int32                                        GroupID;                                           // 0x0(0x4)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  GroupName;                                         // 0x4(0x8)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        NumCurves;                                         // 0xC(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        NumGuides;                                         // 0x10(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        NumCurveVertices;                                  // 0x14(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        NumGuideVertices;                                  // 0x18(0x4)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxCurveLength;                                    // 0x1C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxImportedWidth;                                  // 0x20(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        GroupCardsID;                                      // 0x24(0x4)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsMaterial
struct FHairGroupsMaterial
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	class FName                                  SlotName;                                          // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x4 (0x2C - 0x28)
// ScriptStruct HairStrandsCore.HairGroupInfoWithVisibility
struct FHairGroupInfoWithVisibility : public FHairGroupInfo
{
public:
	bool                                         bIsVisible;                                        // 0x28(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_D6F[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct HairStrandsCore.HairCardsClusterSettings
struct FHairCardsClusterSettings
{
public:
	float                                        ClusterDecimation;                                 // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EHairCardsClusterType             Type;                                              // 0x4(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	bool                                         bUseGuide;                                         // 0x5(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D73[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1C (0x1C - 0x0)
// ScriptStruct HairStrandsCore.HairCardsGeometrySettings
struct FHairCardsGeometrySettings
{
public:
	enum class EHairCardsGenerationType          GenerationType;                                    // 0x0(0x1)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D74[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        CardsCount;                                        // 0x4(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EHairCardsClusterType             ClusterType;                                       // 0x8(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D75[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinSegmentLength;                                  // 0xC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        AngularThreshold;                                  // 0x10(0x4)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MinCardsLength;                                    // 0x14(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxCardsLength;                                    // 0x18(0x4)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HairStrandsCore.HairCardsTextureSettings
struct FHairCardsTextureSettings
{
public:
	int32                                        AtlasMaxResolution;                                // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        PixelPerCentimeters;                               // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        LengthTextureCount;                                // 0x8(0x4)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        DensityTextureCount;                               // 0xC(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsProceduralCards
struct FHairGroupsProceduralCards
{
public:
	struct FHairCardsClusterSettings             ClusterSettings;                                   // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FHairCardsGeometrySettings            GeometrySettings;                                  // 0x8(0x1C)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FHairCardsTextureSettings             TextureSettings;                                   // 0x24(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        Version;                                           // 0x34(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnInstance)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupCardsInfo
struct FHairGroupCardsInfo
{
public:
	int32                                        NumCards;                                          // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        NumCardVertices;                                   // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupCardsTextures
struct FHairGroupCardsTextures
{
public:
	class UTexture2D*                            DepthTexture;                                      // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UTexture2D*                            CoverageTexture;                                   // 0x8(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UTexture2D*                            TangentTexture;                                    // 0x10(0x8)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UTexture2D*                            AttributeTexture;                                  // 0x18(0x8)(Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UTexture2D*                            AuxilaryDataTexture;                               // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UTexture2D*                            MaterialTexture;                                   // 0x28(0x8)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D81[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsCardsSourceDescription
struct FHairGroupsCardsSourceDescription
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	class FName                                  MaterialSlotName;                                  // 0x8(0x8)(BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EHairCardsSourceType              SourceType;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D87[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UStaticMesh*                           ProceduralMesh;                                    // 0x18(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FString                                ProceduralMeshKey;                                 // 0x20(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UStaticMesh*                           ImportedMesh;                                      // 0x30(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FHairGroupsProceduralCards            ProceduralSettings;                                // 0x38(0x38)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	struct FHairGroupCardsTextures               Textures;                                          // 0x70(0x38)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        GroupIndex;                                        // 0xA8(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        LODIndex;                                          // 0xAC(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FHairGroupCardsInfo                   CardsInfo;                                         // 0xB0(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FString                                ImportedMeshKey;                                   // 0xB8(0x10)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct HairStrandsCore.HairLODSettings
struct FHairLODSettings
{
public:
	float                                        CurveDecimation;                                   // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        VertexDecimation;                                  // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        AngularThreshold;                                  // 0x8(0x4)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        ScreenSize;                                        // 0xC(0x4)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
	float                                        ThicknessScale;                                    // 0x10(0x4)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bVisible;                                          // 0x14(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGroomGeometryType                GeometryType;                                      // 0x15(0x1)(Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EGroomBindingType                 BindingType;                                       // 0x16(0x1)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EGroomOverrideType                Simulation;                                        // 0x17(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst)
	enum class EGroomOverrideType                GlobalInterpolation;                               // 0x18(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D8B[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct HairStrandsCore.HairDecimationSettings
struct FHairDecimationSettings
{
public:
	float                                        CurveDecimation;                                   // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        VertexDecimation;                                  // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct HairStrandsCore.HairInterpolationSettings
struct FHairInterpolationSettings
{
public:
	bool                                         bOverrideGuides;                                   // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D8C[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        HairToGuideDensity;                                // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EHairInterpolationQuality         InterpolationQuality;                              // 0x8(0x1)(BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EHairInterpolationWeight          InterpolationDistance;                             // 0x9(0x1)(ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bRandomizeGuide;                                   // 0xA(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bUseUniqueGuide;                                   // 0xB(0x1)(ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct HairStrandsCore.HairDeformationSettings
struct FHairDeformationSettings
{
public:
	bool                                         bCanEditRigging;                                   // 0x0(0x1)(ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableRigging;                                    // 0x1(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_D91[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        NumCurves;                                         // 0x4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        NumPoints;                                         // 0x8(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsInterpolation
struct FHairGroupsInterpolation
{
public:
	struct FHairDecimationSettings               DecimationSettings;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FHairInterpolationSettings            InterpolationSettings;                             // 0x8(0xC)(ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FHairDeformationSettings              RiggingSettings;                                   // 0x14(0xC)(ExportObject, Net, OutParm, Transient, Config, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsLOD
struct FHairGroupsLOD
{
public:
	TArray<struct FHairLODSettings>              LODs;                                              // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, DuplicateTransient)
	float                                        ClusterWorldSize;                                  // 0x10(0x4)(Edit, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        ClusterScreenSizeScale;                            // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsMeshesSourceDescription
struct FHairGroupsMeshesSourceDescription
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	class FName                                  MaterialSlotName;                                  // 0x8(0x8)(BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UStaticMesh*                           ImportedMesh;                                      // 0x10(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FHairGroupCardsTextures               Textures;                                          // 0x18(0x38)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        GroupIndex;                                        // 0x50(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        LODIndex;                                          // 0x54(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ImportedMeshKey;                                   // 0x58(0x10)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct HairStrandsCore.HairSolverSettings
struct FHairSolverSettings
{
public:
	bool                                         EnableSimulation;                                  // 0x0(0x1)(BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EGroomNiagaraSolvers              NiagaraSolver;                                     // 0x1(0x1)(ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D9B[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class UNiagaraSystem>         CustomSystem;                                      // 0x8(0x30)(Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        GravityPreloading;                                 // 0x38(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        SubSteps;                                          // 0x3C(0x4)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        IterationCount;                                    // 0x40(0x4)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_D9C[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct HairStrandsCore.HairExternalForces
struct FHairExternalForces
{
public:
	struct FVector                               GravityVector;                                     // 0x0(0x18)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        AirDrag;                                           // 0x18(0x4)(EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_DA0[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               AirVelocity;                                       // 0x20(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct HairStrandsCore.HairBendConstraint
struct FHairBendConstraint
{
public:
	bool                                         SolveBend;                                         // 0x0(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         ProjectBend;                                       // 0x1(0x1)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_DA1[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        BendDamping;                                       // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        BendStiffness;                                     // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_DA3[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRuntimeFloatCurve                    BendScale;                                         // 0x10(0x88)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct HairStrandsCore.HairStretchConstraint
struct FHairStretchConstraint
{
public:
	bool                                         SolveStretch;                                      // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         ProjectStretch;                                    // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_DA7[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        StretchDamping;                                    // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        StretchStiffness;                                  // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_DA8[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRuntimeFloatCurve                    StretchScale;                                      // 0x10(0x88)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct HairStrandsCore.HairCollisionConstraint
struct FHairCollisionConstraint
{
public:
	bool                                         SolveCollision;                                    // 0x0(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         ProjectCollision;                                  // 0x1(0x1)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_DAA[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        StaticFriction;                                    // 0x4(0x4)(EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        KineticFriction;                                   // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        StrandsViscosity;                                  // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FIntVector                            GridDimension;                                     // 0x10(0xC)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        CollisionRadius;                                   // 0x1C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FRuntimeFloatCurve                    RadiusScale;                                       // 0x20(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x1D8 (0x1D8 - 0x0)
// ScriptStruct HairStrandsCore.HairMaterialConstraints
struct FHairMaterialConstraints
{
public:
	struct FHairBendConstraint                   BendConstraint;                                    // 0x0(0x98)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FHairStretchConstraint                StretchConstraint;                                 // 0x98(0x98)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FHairCollisionConstraint              CollisionConstraint;                               // 0x130(0xA8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct HairStrandsCore.HairStrandsParameters
struct FHairStrandsParameters
{
public:
	enum class EGroomStrandsSize                 StrandsSize;                                       // 0x0(0x1)(BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_DB3[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        StrandsDensity;                                    // 0x4(0x4)(ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        StrandsSmoothing;                                  // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        StrandsThickness;                                  // 0xC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FRuntimeFloatCurve                    ThicknessScale;                                    // 0x10(0x88)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x2F0 (0x2F0 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsPhysics
struct FHairGroupsPhysics
{
public:
	struct FHairSolverSettings                   SolverSettings;                                    // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FHairExternalForces                   ExternalForces;                                    // 0x48(0x38)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FHairMaterialConstraints              MaterialConstraints;                               // 0x80(0x1D8)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FHairStrandsParameters                StrandsParameters;                                 // 0x258(0x98)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct HairStrandsCore.HairSimulationSolver
struct FHairSimulationSolver
{
public:
	bool                                         bEnableSimulation;                                 // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct HairStrandsCore.HairSimulationForces
struct FHairSimulationForces
{
public:
	struct FVector                               GravityVector;                                     // 0x0(0x18)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        AirDrag;                                           // 0x18(0x4)(EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_DB7[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               AirVelocity;                                       // 0x20(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct HairStrandsCore.HairSimulationConstraints
struct FHairSimulationConstraints
{
public:
	float                                        BendDamping;                                       // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        BendStiffness;                                     // 0x4(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        StretchDamping;                                    // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        StretchStiffness;                                  // 0xC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        StaticFriction;                                    // 0x10(0x4)(EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        KineticFriction;                                   // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        StrandsViscosity;                                  // 0x18(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        CollisionRadius;                                   // 0x1C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct HairStrandsCore.HairSimulationSetup
struct FHairSimulationSetup
{
public:
	bool                                         bResetSimulation;                                  // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bDebugSimulation;                                  // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bLocalSimulation;                                  // 0x2(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_DBD[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        LinearVelocityScale;                               // 0x4(0x4)(Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        AngularVelocityScale;                              // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_DBE[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                LocalBone;                                         // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        TeleportDistance;                                  // 0x20(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_DC0[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x90 - 0x0)
// ScriptStruct HairStrandsCore.HairSimulationSettings
struct FHairSimulationSettings
{
public:
	bool                                         bOverrideSettings;                                 // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_DC1[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FHairSimulationSetup                  SimulationSetup;                                   // 0x8(0x28)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FHairSimulationSolver                 SolverSettings;                                    // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_DC2[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FHairSimulationForces                 ExternalForces;                                    // 0x38(0x38)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FHairSimulationConstraints            MaterialConstraints;                               // 0x70(0x20)(Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct HairStrandsCore.HairGeometrySettings
struct FHairGeometrySettings
{
public:
	float                                        HairWidth;                                         // 0x0(0x4)(Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        HairRootScale;                                     // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        HairTipScale;                                      // 0x8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct HairStrandsCore.HairShadowSettings
struct FHairShadowSettings
{
public:
	float                                        HairShadowDensity;                                 // 0x0(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        HairRaytracingRadiusScale;                         // 0x4(0x4)(Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bUseHairRaytracingGeometry;                        // 0x8(0x1)(Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bVoxelize;                                         // 0x9(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_DC9[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x2 (0x2 - 0x0)
// ScriptStruct HairStrandsCore.HairAdvancedRenderingSettings
struct FHairAdvancedRenderingSettings
{
public:
	bool                                         bUseStableRasterization;                           // 0x0(0x1)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bScatterSceneLighting;                             // 0x1(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsRendering
struct FHairGroupsRendering
{
public:
	class FName                                  MaterialSlotName;                                  // 0x0(0x8)(BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	struct FHairGeometrySettings                 GeometrySettings;                                  // 0x10(0xC)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FHairShadowSettings                   ShadowSettings;                                    // 0x1C(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FHairAdvancedRenderingSettings        AdvancedSettings;                                  // 0x28(0x2)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_DCE[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HairStrandsCore.GoomBindingGroupInfo
struct FGoomBindingGroupInfo
{
public:
	int32                                        RenRootCount;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        RenLODCount;                                       // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        SimRootCount;                                      // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        SimLODCount;                                       // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct HairStrandsCore.GroomAnimationInfo
struct FGroomAnimationInfo
{
public:
	uint32                                       NumFrames;                                         // 0x0(0x4)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DuplicateTransient)
	float                                        SecondsPerFrame;                                   // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        Duration;                                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, DuplicateTransient)
	float                                        StartTime;                                         // 0xC(0x4)(Edit, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        EndTime;                                           // 0x10(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        StartFrame;                                        // 0x14(0x4)(ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        EndFrame;                                          // 0x18(0x4)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EGroomCacheAttributes             Attributes;                                        // 0x1C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	uint8                                        Pad_DD6[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct HairStrandsCore.GroomCacheInfo
struct FGroomCacheInfo
{
public:
	int32                                        Version;                                           // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnInstance)
	enum class EGroomCacheType                   Type;                                              // 0x4(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_DD8[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGroomAnimationInfo                   AnimationInfo;                                     // 0x8(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HairStrandsCore.FollicleMaskOptions
struct FFollicleMaskOptions
{
public:
	class UGroomAsset*                           Groom;                                             // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EFollicleMaskChannel              Channel;                                           // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_DDF[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x3C (0x3C - 0x0)
// ScriptStruct HairStrandsCore.GroomHairGroupPreview
struct FGroomHairGroupPreview
{
public:
	class FName                                  GroupName;                                         // 0x0(0x8)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        GroupID;                                           // 0x8(0x4)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        CurveCount;                                        // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        GuideCount;                                        // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bHasRootUV;                                        // 0x14(0x1)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bHasClumpID;                                       // 0x15(0x1)(Edit, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bHasColor;                                         // 0x16(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bHasRoughness;                                     // 0x17(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bHasAO;                                            // 0x18(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bHasPrecomputedWeights;                            // 0x19(0x1)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_DED[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FHairGroupsInterpolation              InterpolationSettings;                             // 0x1C(0x20)(ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct HairStrandsCore.GroomBuildSettings
struct FGroomBuildSettings
{
public:
	bool                                         bOverrideGuides;                                   // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_DF2[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        HairToGuideDensity;                                // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EGroomInterpolationQuality        InterpolationQuality;                              // 0x8(0x1)(BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EGroomInterpolationWeight         InterpolationDistance;                             // 0x9(0x1)(ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bRandomizeGuide;                                   // 0xA(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bUseUniqueGuide;                                   // 0xB(0x1)(ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct HairStrandsCore.MovieSceneGroomCacheParams
struct FMovieSceneGroomCacheParams
{
public:
	class UGroomCache*                           GroomCache;                                        // 0x0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst)
	struct FFrameNumber                          FirstLoopStartFrameOffset;                         // 0x8(0x4)(ExportObject, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FFrameNumber                          StartFrameOffset;                                  // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FFrameNumber                          EndFrameOffset;                                    // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        PlayRate;                                          // 0x14(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_E01[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x28 - 0x20)
// ScriptStruct HairStrandsCore.MovieSceneGroomCacheSectionTemplateParameters
struct FMovieSceneGroomCacheSectionTemplateParameters : public FMovieSceneGroomCacheParams
{
public:
	struct FFrameNumber                          SectionStartTime;                                  // 0x20(0x4)(ExportObject, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FFrameNumber                          SectionEndTime;                                    // 0x24(0x4)(Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x28 (0x48 - 0x20)
// ScriptStruct HairStrandsCore.MovieSceneGroomCacheSectionTemplate
struct FMovieSceneGroomCacheSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneGroomCacheSectionTemplateParameters Params;                                            // 0x20(0x28)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
};

}


