#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGeometryScriptOutcomePins : uint8
{
	Failure                        = 0,
	Success                        = 1,
	EGeometryScriptOutcomePins_MAX = 2,
};

enum class EGeometryScriptSearchOutcomePins : uint8
{
	Found                          = 0,
	NotFound                       = 1,
	EGeometryScriptSearchOutcomePins_MAX = 2,
};

enum class EGeometryScriptContainmentOutcomePins : uint8
{
	Inside                         = 0,
	Outside                        = 1,
	EGeometryScriptContainmentOutcomePins_MAX = 2,
};

enum class EGeometryScriptLODType : uint8
{
	MaxAvailable                   = 0,
	HiResSourceModel               = 1,
	SourceModel                    = 2,
	RenderData                     = 3,
	EGeometryScriptLODType_MAX     = 4,
};

enum class EGeometryScriptAxis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	EGeometryScriptAxis_MAX        = 3,
};

enum class EGeometryScriptIndexType : uint8
{
	Any                            = 0,
	Triangle                       = 1,
	Vertex                         = 2,
	MaterialID                     = 3,
	PolygroupID                    = 4,
	EGeometryScriptIndexType_MAX   = 5,
};

enum class EGeometryScriptDebugMessageType : uint8
{
	ErrorMessage                   = 0,
	WarningMessage                 = 1,
	EGeometryScriptDebugMessageType_MAX = 2,
};

enum class EGeometryScriptErrorType : uint8
{
	NoError                        = 0,
	UnknownError                   = 1,
	InvalidInputs                  = 2,
	OperationFailed                = 3,
	EGeometryScriptErrorType_MAX   = 4,
};

enum class EGeometryScriptCollisionGenerationMethod : uint8
{
	AlignedBoxes                   = 0,
	OrientedBoxes                  = 1,
	MinimalSpheres                 = 2,
	Capsules                       = 3,
	ConvexHulls                    = 4,
	SweptHulls                     = 5,
	MinVolumeShapes                = 6,
	EGeometryScriptCollisionGenerationMethod_MAX = 7,
};

enum class EGeometryScriptSweptHullAxis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	SmallestBoxDimension           = 3,
	SmallestVolume                 = 4,
	EGeometryScriptSweptHullAxis_MAX = 5,
};

enum class EGeometryScriptMeshSelectionType : uint8
{
	Vertices                       = 0,
	Triangles                      = 1,
	Polygroups                     = 2,
	EGeometryScriptMeshSelectionType_MAX = 3,
};

enum class EGeometryScriptMeshSelectionConversionType : uint8
{
	NoConversion                   = 0,
	ToVertices                     = 1,
	ToTriangles                    = 2,
	ToPolygroups                   = 3,
	EGeometryScriptMeshSelectionConversionType_MAX = 4,
};

enum class EGeometryScriptCombineSelectionMode : uint8
{
	Add                            = 0,
	Subtract                       = 1,
	Intersection                   = 2,
	EGeometryScriptCombineSelectionMode_MAX = 3,
};

enum class EGeometryScriptEmptySelectionBehavior : uint8
{
	FullMeshSelection              = 0,
	EmptySelection                 = 1,
	EGeometryScriptEmptySelectionBehavior_MAX = 2,
};

enum class EGeometryScriptBakeResolution : uint8
{
	Resolution16                   = 0,
	Resolution32                   = 1,
	Resolution64                   = 2,
	Resolution128                  = 3,
	Resolution256                  = 4,
	Resolution512                  = 5,
	Resolution1024                 = 6,
	Resolution2048                 = 7,
	Resolution4096                 = 8,
	Resolution8192                 = 9,
	EGeometryScriptBakeResolution_MAX = 10,
};

enum class EGeometryScriptBakeBitDepth : uint8
{
	ChannelBits8                   = 0,
	ChannelBits16                  = 1,
	EGeometryScriptBakeBitDepth_MAX = 2,
};

enum class EGeometryScriptBakeSamplesPerPixel : uint8
{
	Sample1                        = 0,
	Sample4                        = 1,
	Sample16                       = 2,
	Sample64                       = 3,
	Samples256                     = 4,
	EGeometryScriptBakeSamplesPerPixel_MAX = 5,
};

enum class EGeometryScriptBakeTypes : uint8
{
	TangentSpaceNormal             = 0,
	ObjectSpaceNormal              = 1,
	FaceNormal                     = 2,
	BentNormal                     = 3,
	Position                       = 4,
	Curvature                      = 5,
	AmbientOcclusion               = 6,
	Texture                        = 7,
	MultiTexture                   = 8,
	VertexColor                    = 9,
	MaterialID                     = 10,
	EGeometryScriptBakeTypes_MAX   = 11,
};

enum class EGeometryScriptBakeOutputMode : uint8
{
	RGBA                           = 0,
	PerChannel                     = 1,
	EGeometryScriptBakeOutputMode_MAX = 2,
};

enum class EGeometryScriptBakeNormalSpace : uint8
{
	Tangent                        = 0,
	Object                         = 1,
	EGeometryScriptBakeNormalSpace_MAX = 2,
};

enum class EGeometryScriptBakeCurvatureTypeMode : uint8
{
	Mean                           = 0,
	Max                            = 1,
	Min                            = 2,
	Gaussian                       = 3,
};

enum class EGeometryScriptBakeCurvatureColorMode : uint8
{
	Grayscale                      = 0,
	RedBlue                        = 1,
	RedGreenBlue                   = 2,
	EGeometryScriptBakeCurvatureColorMode_MAX = 3,
};

enum class EGeometryScriptBakeCurvatureClampMode : uint8
{
	None                           = 0,
	OnlyPositive                   = 1,
	OnlyNegative                   = 2,
	EGeometryScriptBakeCurvatureClampMode_MAX = 3,
};

enum class EGeometryScriptCombineAttributesMode : uint8
{
	EnableAllMatching              = 0,
	UseTarget                      = 1,
	UseSource                      = 2,
	EGeometryScriptCombineAttributesMode_MAX = 3,
};

enum class EGeometryScriptSmoothBoneWeightsType : uint8
{
	DirectDistance                 = 0,
	GeodesicVoxel                  = 1,
	EGeometryScriptSmoothBoneWeightsType_MAX = 2,
};

enum class EGeometryScriptBooleanOperation : uint8
{
	Union                          = 0,
	Intersection                   = 1,
	Subtract                       = 2,
	EGeometryScriptBooleanOperation_MAX = 3,
};

enum class EGeometryScriptFlareType : uint8
{
	SinMode                        = 0,
	SinSquaredMode                 = 1,
	TriangleMode                   = 2,
	EGeometryScriptFlareType_MAX   = 3,
};

enum class EGeometryScriptMathWarpType : uint8
{
	SinWave1D                      = 0,
	SinWave2D                      = 1,
	SinWave3D                      = 2,
	EGeometryScriptMathWarpType_MAX = 3,
};

enum class EGeometryScriptMeshEditPolygroupMode : uint8
{
	PreserveExisting               = 0,
	AutoGenerateNew                = 1,
	SetConstant                    = 2,
	EGeometryScriptMeshEditPolygroupMode_MAX = 3,
};

enum class EGeometryScriptPolyOperationArea : uint8
{
	EntireSelection                = 0,
	PerPolygroup                   = 1,
	PerTriangle                    = 2,
	EGeometryScriptPolyOperationArea_MAX = 3,
};

enum class EGeometryScriptLinearExtrudeDirection : uint8
{
	FixedDirection                 = 0,
	AverageFaceNormal              = 1,
	EGeometryScriptLinearExtrudeDirection_MAX = 2,
};

enum class EGeometryScriptOffsetFacesType : uint8
{
	VertexNormal                   = 0,
	FaceNormal                     = 1,
	ParallelFaceOffset             = 2,
	EGeometryScriptOffsetFacesType_MAX = 3,
};

enum class EGeometryScriptMeshBevelSelectionMode : uint8
{
	TriangleArea                   = 0,
	AllPolygroupEdges              = 1,
	SharedPolygroupEdges           = 2,
	EGeometryScriptMeshBevelSelectionMode_MAX = 3,
};

enum class EGeometryScriptTangentTypes : uint8
{
	FastMikkT                      = 0,
	PerTriangle                    = 1,
	EGeometryScriptTangentTypes_MAX = 2,
};

enum class EGeometryScriptPrimitivePolygroupMode : uint8
{
	SingleGroup                    = 0,
	PerFace                        = 1,
	PerQuad                        = 2,
	EGeometryScriptPrimitivePolygroupMode_MAX = 3,
};

enum class EGeometryScriptPrimitiveOriginMode : uint8
{
	Center                         = 0,
	Base                           = 1,
	EGeometryScriptPrimitiveOriginMode_MAX = 2,
};

enum class EGeometryScriptPrimitiveUVMode : uint8
{
	Uniform                        = 0,
	ScaleToFill                    = 1,
	EGeometryScriptPrimitiveUVMode_MAX = 2,
};

enum class EGeometryScriptUniformRemeshTargetType : uint8
{
	TriangleCount                  = 0,
	TargetEdgeLength               = 1,
	EGeometryScriptUniformRemeshTargetType_MAX = 2,
};

enum class EGeometryScriptRemeshEdgeConstraintType : uint8
{
	Fixed                          = 0,
	Refine                         = 1,
	Free                           = 2,
	Ignore                         = 3,
	EGeometryScriptRemeshEdgeConstraintType_MAX = 4,
};

enum class EGeometryScriptRemeshSmoothingType : uint8
{
	Uniform                        = 0,
	UVPreserving                   = 1,
	Mixed                          = 2,
	EGeometryScriptRemeshSmoothingType_MAX = 3,
};

enum class EGeometryScriptFillHolesMethod : uint8
{
	Automatic                      = 0,
	MinimalFill                    = 1,
	PolygonTriangulation           = 2,
	TriangleFan                    = 3,
	PlanarProjection               = 4,
	EGeometryScriptFillHolesMethod_MAX = 5,
};

enum class EGeometryScriptRemoveHiddenTrianglesMethod : uint8
{
	FastWindingNumber              = 0,
	RaycastOcclusionTest           = 1,
	EGeometryScriptRemoveHiddenTrianglesMethod_MAX = 2,
};

enum class EGeometryScriptRepairMeshMode : uint8
{
	DeleteOnly                     = 0,
	RepairOrDelete                 = 1,
	RepairOrSkip                   = 2,
	EGeometryScriptRepairMeshMode_MAX = 3,
};

enum class EGeometryScriptSamplingWeightMode : uint8
{
	WeightToRadius                 = 0,
	FilledWeightToRadius           = 1,
	WeightedRandom                 = 2,
	EGeometryScriptSamplingWeightMode_MAX = 3,
};

enum class EGeometryScriptSamplingDistributionMode : uint8
{
	Uniform                        = 0,
	Smaller                        = 1,
	Larger                         = 2,
	EGeometryScriptSamplingDistributionMode_MAX = 3,
};

enum class EGeometryScriptTopologyConnectionType : uint8
{
	Geometric                      = 0,
	Polygroup                      = 1,
	MaterialID                     = 2,
	EGeometryScriptTopologyConnectionType_MAX = 3,
};

enum class EGeometryScriptRemoveMeshSimplificationType : uint8
{
	StandardQEM                    = 0,
	VolumePreserving               = 1,
	AttributeAware                 = 2,
	EGeometryScriptRemoveMeshSimplificationType_MAX = 3,
};

enum class ESelectiveTessellatePatternType : uint8
{
	ConcentricRings                = 0,
	ESelectiveTessellatePatternType_MAX = 1,
};

enum class EGeometryScriptUVFlattenMethod : uint8
{
	ExpMap                         = 0,
	Conformal                      = 1,
	SpectralConformal              = 2,
	EGeometryScriptUVFlattenMethod_MAX = 3,
};

enum class EGeometryScriptUVIslandSource : uint8
{
	PolyGroups                     = 0,
	UVIslands                      = 1,
	EGeometryScriptUVIslandSource_MAX = 2,
};

enum class EGeometryScriptGridSizingMethod : uint8
{
	GridCellSize                   = 0,
	GridResolution                 = 1,
	EGeometryScriptGridSizingMethod_MAX = 2,
};

enum class EGeometryScriptMorphologicalOpType : uint8
{
	Dilate                         = 0,
	Contract                       = 1,
	Close                          = 2,
	Open                           = 3,
	EGeometryScriptMorphologicalOpType_MAX = 4,
};

enum class EGeometryScriptSampleSpacing : uint8
{
	UniformDistance                = 0,
	UniformTime                    = 1,
	ErrorTolerance                 = 2,
	EGeometryScriptSampleSpacing_MAX = 3,
};

enum class EGeometryScriptPixelSamplingMethod : uint8
{
	Bilinear                       = 0,
	Nearest                        = 1,
	EGeometryScriptPixelSamplingMethod_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshReadLOD
struct FGeometryScriptMeshReadLOD
{
public:
	enum class EGeometryScriptLODType            LODType;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B37[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        LODIndex;                                          // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshWriteLOD
struct FGeometryScriptMeshWriteLOD
{
public:
	bool                                         bWriteHiResSource;                                 // 0x0(0x1)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B39[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        LODIndex;                                          // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptTriangle
struct FGeometryScriptTriangle
{
public:
	struct FVector                               Vector0;                                           // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Vector1;                                           // 0x18(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Vector2;                                           // 0x30(0x18)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptTrianglePoint
struct FGeometryScriptTrianglePoint
{
public:
	bool                                         bValid;                                            // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1B3F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        TriangleID;                                        // 0x4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FVector                               BaryCoords;                                        // 0x20(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptUVTriangle
struct FGeometryScriptUVTriangle
{
public:
	struct FVector2D                             UV0;                                               // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             UV1;                                               // 0x10(0x10)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             UV2;                                               // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptColorFlags
struct FGeometryScriptColorFlags
{
public:
	bool                                         bRed;                                              // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bGreen;                                            // 0x1(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bBlue;                                             // 0x2(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAlpha;                                            // 0x3(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptGroupLayer
struct FGeometryScriptGroupLayer
{
public:
	bool                                         bDefaultLayer;                                     // 0x0(0x1)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B45[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ExtendedLayerIndex;                                // 0x4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptIndexList
struct FGeometryScriptIndexList
{
public:
	enum class EGeometryScriptIndexType          IndexType;                                         // 0x0(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B4A[0x17];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptTriangleList
struct FGeometryScriptTriangleList
{
public:
	uint8                                        Pad_1B4C[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptScalarList
struct FGeometryScriptScalarList
{
public:
	uint8                                        Pad_1B4D[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptVectorList
struct FGeometryScriptVectorList
{
public:
	uint8                                        Pad_1B51[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptUVList
struct FGeometryScriptUVList
{
public:
	uint8                                        Pad_1B53[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptColorList
struct FGeometryScriptColorList
{
public:
	uint8                                        Pad_1B55[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPolyPath
struct FGeometryScriptPolyPath
{
public:
	uint8                                        Pad_1B58[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bClosedLoop;                                       // 0x10(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B59[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptDynamicMeshBVH
struct FGeometryScriptDynamicMeshBVH
{
public:
	uint8                                        Pad_1B5D[0x20];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptDebugMessage
struct FGeometryScriptDebugMessage
{
public:
	enum class EGeometryScriptDebugMessageType   MessageType;                                       // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptErrorType          ErrorType;                                         // 0x1(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B6D[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  Message;                                           // 0x8(0x18)(BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptCollisionFromMeshOptions
struct FGeometryScriptCollisionFromMeshOptions
{
public:
	bool                                         bEmitTransaction;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptCollisionGenerationMethod Method;                                            // 0x1(0x1)(BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAutoDetectSpheres;                                // 0x2(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAutoDetectBoxes;                                  // 0x3(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAutoDetectCapsules;                               // 0x4(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B7F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinThickness;                                      // 0x8(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSimplifyHulls;                                    // 0xC(0x1)(Edit, ConstParm, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B80[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ConvexHullTargetFaceCount;                         // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxConvexHullsPerMesh;                             // 0x14(0x4)(Edit, ExportObject, Net, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ConvexDecompositionSearchFactor;                   // 0x18(0x4)(ExportObject, BlueprintReadOnly, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ConvexDecompositionErrorTolerance;                 // 0x1C(0x4)(ConstParm, BlueprintVisible, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ConvexDecompositionMinPartThickness;               // 0x20(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        SweptHullSimplifyTolerance;                        // 0x24(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptSweptHullAxis      SweptHullAxis;                                     // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRemoveFullyContainedShapes;                       // 0x29(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B98[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxShapeCount;                                     // 0x2C(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSetSimpleCollisionOptions
struct FGeometryScriptSetSimpleCollisionOptions
{
public:
	bool                                         bEmitTransaction;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptConvexHullOptions
struct FGeometryScriptConvexHullOptions
{
public:
	bool                                         bPrefilterVertices;                                // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B9B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        PrefilterGridResolution;                           // 0x4(0x4)(ExportObject, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SimplifyToFaceCount;                               // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSweptHullOptions
struct FGeometryScriptSweptHullOptions
{
public:
	bool                                         bPrefilterVertices;                                // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1B9E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        PrefilterGridResolution;                           // 0x4(0x4)(ExportObject, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinThickness;                                      // 0x8(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSimplify;                                         // 0xC(0x1)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BA0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinEdgeLength;                                     // 0x10(0x4)(Edit, ExportObject, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        SimplifyTolerance;                                 // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptConvexDecompositionOptions
struct FGeometryScriptConvexDecompositionOptions
{
public:
	int32                                        NumHulls;                                          // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BAB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       SearchFactor;                                      // 0x8(0x8)(ExportObject, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       ErrorTolerance;                                    // 0x10(0x8)(EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       MinPartThickness;                                  // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SimplifyToFaceCount;                               // 0x20(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BAD[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshSelection
struct FGeometryScriptMeshSelection
{
public:
	uint8                                        Pad_1BAF[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x3 (0x3 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptCopyMeshFromAssetOptions
struct FGeometryScriptCopyMeshFromAssetOptions
{
public:
	bool                                         bApplyBuildSettings;                               // 0x0(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRequestTangents;                                  // 0x1(0x1)(Edit, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIgnoreRemoveDegenerates;                          // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptNaniteOptions
struct FGeometryScriptNaniteOptions
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_1BB0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        FallbackPercentTriangles;                          // 0x4(0x4)(Edit, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        FallbackRelativeError;                             // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptCopyMeshToAssetOptions
struct FGeometryScriptCopyMeshToAssetOptions
{
public:
	bool                                         bEnableRecomputeNormals;                           // 0x0(0x1)(Edit, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableRecomputeTangents;                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableRemoveDegenerates;                          // 0x2(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bReplaceMaterials;                                 // 0x3(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BB5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMaterialInterface*>            NewMaterials;                                      // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          NewMaterialSlotNames;                              // 0x18(0x10)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bApplyNaniteSettings;                              // 0x28(0x1)(Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BB8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptNaniteOptions          NaniteSettings;                                    // 0x2C(0xC)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FMeshNaniteSettings                   NewNaniteSettings;                                 // 0x38(0x38)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEmitTransaction;                                  // 0x70(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDeferMeshPostEditChange;                          // 0x71(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BBC[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBakeTypeOptions
struct FGeometryScriptBakeTypeOptions
{
public:
	enum class EGeometryScriptBakeTypes          BakeType;                                          // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BBD[0x17];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBakeTextureOptions
struct FGeometryScriptBakeTextureOptions
{
public:
	enum class EGeometryScriptBakeResolution     Resolution;                                        // 0x0(0x1)(Edit, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptBakeBitDepth       BitDepth;                                          // 0x1(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptBakeSamplesPerPixel SamplesPerPixel;                                   // 0x2(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BBF[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            SampleFilterMask;                                  // 0x8(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ProjectionDistance;                                // 0x10(0x4)(Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bProjectionInWorldSpace;                           // 0x14(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BC2[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBakeVertexOptions
struct FGeometryScriptBakeVertexOptions
{
public:
	bool                                         bSplitAtNormalSeams;                               // 0x0(0x1)(BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSplitAtUVSeams;                                   // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BC7[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ProjectionDistance;                                // 0x4(0x4)(Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bProjectionInWorldSpace;                           // 0x8(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BC8[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBakeOutputType
struct FGeometryScriptBakeOutputType
{
public:
	enum class EGeometryScriptBakeOutputMode     OutputMode;                                        // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BCA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptBakeTypeOptions        RGBA;                                              // 0x8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FGeometryScriptBakeTypeOptions        R;                                                 // 0x20(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config)
	struct FGeometryScriptBakeTypeOptions        G;                                                 // 0x38(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config)
	struct FGeometryScriptBakeTypeOptions        B;                                                 // 0x50(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config)
	struct FGeometryScriptBakeTypeOptions        A;                                                 // 0x68(0x18)(Edit, Parm, OutParm, ReturnParm, Transient, Config)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBakeTargetMeshOptions
struct FGeometryScriptBakeTargetMeshOptions
{
public:
	int32                                        TargetUVLayer;                                     // 0x0(0x4)(BlueprintVisible, Net, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBakeSourceMeshOptions
struct FGeometryScriptBakeSourceMeshOptions
{
public:
	class UTexture2D*                            SourceNormalMap;                                   // 0x0(0x8)(Edit, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SourceNormalUVLayer;                               // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptBakeNormalSpace    SourceNormalSpace;                                 // 0xC(0x1)(BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BD1[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBakeRenderCaptureOptions
struct FGeometryScriptBakeRenderCaptureOptions
{
public:
	enum class EGeometryScriptBakeResolution     Resolution;                                        // 0x0(0x1)(Edit, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptBakeResolution     RenderCaptureResolution;                           // 0x1(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptBakeSamplesPerPixel SamplesPerPixel;                                   // 0x2(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRenderCaptureAntiAliasing;                        // 0x3(0x1)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        CleanupTolerance;                                  // 0x4(0x4)(Edit, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bBaseColorMap;                                     // 0x8(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNormalMap;                                        // 0x9(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPackedMRSMap;                                     // 0xA(0x1)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bMetallicMap;                                      // 0xB(0x1)(BlueprintVisible, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRoughnessMap;                                     // 0xC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSpecularMap;                                      // 0xD(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEmissiveMap;                                      // 0xE(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOpacityMap;                                       // 0xF(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSubsurfaceColorMap;                               // 0x10(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BDF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       FieldOfViewDegrees;                                // 0x18(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       NearPlaneDist;                                     // 0x20(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptRenderCaptureTextures
struct FGeometryScriptRenderCaptureTextures
{
public:
	class UTexture2D*                            BaseColorMap;                                      // 0x0(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasBaseColorMap;                                  // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BE2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            NormalMap;                                         // 0x10(0x8)(Edit, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasNormalMap;                                     // 0x18(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BE6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            PackedMRSMap;                                      // 0x20(0x8)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasPackedMRSMap;                                  // 0x28(0x1)(Edit, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BE8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            MetallicMap;                                       // 0x30(0x8)(ConstParm, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasMetallicMap;                                   // 0x38(0x1)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BEA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            RoughnessMap;                                      // 0x40(0x8)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasRoughnessMap;                                  // 0x48(0x1)(Edit, ExportObject, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BEC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            SpecularMap;                                       // 0x50(0x8)(ConstParm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasSpecularMap;                                   // 0x58(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BEE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            EmissiveMap;                                       // 0x60(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasEmissiveMap;                                   // 0x68(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BF1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            OpacityMap;                                        // 0x70(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasOpacityMap;                                    // 0x78(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BF5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            SubsurfaceColorMap;                                // 0x80(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasSubsurfaceColorMap;                            // 0x88(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1BF7[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSimpleMeshBuffers
struct FGeometryScriptSimpleMeshBuffers
{
public:
	TArray<struct FVector>                       Vertices;                                          // 0x0(0x10)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<struct FVector>                       Normals;                                           // 0x10(0x10)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV0;                                               // 0x20(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV1;                                               // 0x30(0x10)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV2;                                               // 0x40(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV3;                                               // 0x50(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV4;                                               // 0x60(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV5;                                               // 0x70(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV6;                                               // 0x80(0x10)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     UV7;                                               // 0x90(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLinearColor>                  VertexColors;                                      // 0xA0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FIntVector>                    Triangles;                                         // 0xB0(0x10)(Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	TArray<int32>                                TriGroupIDs;                                       // 0xC0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptAppendMeshOptions
struct FGeometryScriptAppendMeshOptions
{
public:
	enum class EGeometryScriptCombineAttributesMode CombineMode;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBoneWeight
struct FGeometryScriptBoneWeight
{
public:
	int32                                        BoneIndex;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	float                                        Weight;                                            // 0x4(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBoneWeightProfile
struct FGeometryScriptBoneWeightProfile
{
public:
	class FName                                  ProfileName;                                       // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSmoothBoneWeightsOptions
struct FGeometryScriptSmoothBoneWeightsOptions
{
public:
	enum class EGeometryScriptSmoothBoneWeightsType DistanceWeighingType;                              // 0x0(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C0D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Stiffness;                                         // 0x4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	int32                                        MaxInfluences;                                     // 0x8(0x4)(BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        VoxelResolution;                                   // 0xC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshBooleanOptions
struct FGeometryScriptMeshBooleanOptions
{
public:
	bool                                         bFillHoles;                                        // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSimplifyOutput;                                   // 0x1(0x1)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C11[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SimplifyPlanarTolerance;                           // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshSelfUnionOptions
struct FGeometryScriptMeshSelfUnionOptions
{
public:
	bool                                         bFillHoles;                                        // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bTrimFlaps;                                        // 0x1(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSimplifyOutput;                                   // 0x2(0x1)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C17[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SimplifyPlanarTolerance;                           // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        WindingThreshold;                                  // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshPlaneCutOptions
struct FGeometryScriptMeshPlaneCutOptions
{
public:
	bool                                         bFillHoles;                                        // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFillSpans;                                        // 0x1(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFlipCutSide;                                      // 0x2(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C18[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        UVWorldDimension;                                  // 0x4(0x4)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshPlaneSliceOptions
struct FGeometryScriptMeshPlaneSliceOptions
{
public:
	bool                                         bFillHoles;                                        // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFillSpans;                                        // 0x1(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C1B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        GapWidth;                                          // 0x4(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        UVWorldDimension;                                  // 0x8(0x4)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshMirrorOptions
struct FGeometryScriptMeshMirrorOptions
{
public:
	bool                                         bApplyPlaneCut;                                    // 0x0(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFlipCutSide;                                      // 0x1(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bWeldAlongPlane;                                   // 0x2(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptIsSameMeshOptions
struct FGeometryScriptIsSameMeshOptions
{
public:
	bool                                         bCheckConnectivity;                                // 0x0(0x1)(Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCheckEdgeIDs;                                     // 0x1(0x1)(ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCheckNormals;                                     // 0x2(0x1)(BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCheckColors;                                      // 0x3(0x1)(Edit, ExportObject, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCheckUVs;                                         // 0x4(0x1)(Edit, ConstParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCheckGroups;                                      // 0x5(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCheckAttributes;                                  // 0x6(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C23[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Epsilon;                                           // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeasureMeshDistanceOptions
struct FGeometryScriptMeasureMeshDistanceOptions
{
public:
	bool                                         bSymmetric;                                        // 0x0(0x1)(ConstParm, ExportObject, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBendWarpOptions
struct FGeometryScriptBendWarpOptions
{
public:
	bool                                         bSymmetricExtents;                                 // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C25[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        LowerExtent;                                       // 0x4(0x4)(ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bBidirectional;                                    // 0x8(0x1)(BlueprintReadOnly, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C26[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptTwistWarpOptions
struct FGeometryScriptTwistWarpOptions
{
public:
	bool                                         bSymmetricExtents;                                 // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C28[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        LowerExtent;                                       // 0x4(0x4)(ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bBidirectional;                                    // 0x8(0x1)(BlueprintReadOnly, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C2A[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptFlareWarpOptions
struct FGeometryScriptFlareWarpOptions
{
public:
	bool                                         bSymmetricExtents;                                 // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C2C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        LowerExtent;                                       // 0x4(0x4)(ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptFlareType          FlareType;                                         // 0x8(0x1)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C2E[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPerlinNoiseLayerOptions
struct FGeometryScriptPerlinNoiseLayerOptions
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	float                                        Frequency;                                         // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               FrequencyShift;                                    // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        RandomSeed;                                        // 0x20(0x4)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C33[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMathWarpOptions
struct FGeometryScriptMathWarpOptions
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	float                                        Frequency;                                         // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        FrequencyShift;                                    // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPerlinNoiseOptions
struct FGeometryScriptPerlinNoiseOptions
{
public:
	struct FGeometryScriptPerlinNoiseLayerOptions BaseLayer;                                         // 0x0(0x28)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bApplyAlongNormal;                                 // 0x28(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptEmptySelectionBehavior EmptyBehavior;                                     // 0x29(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C3A[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptIterativeMeshSmoothingOptions
struct FGeometryScriptIterativeMeshSmoothingOptions
{
public:
	int32                                        NumIterations;                                     // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Alpha;                                             // 0x4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptEmptySelectionBehavior EmptyBehavior;                                     // 0x8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C3C[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptDisplaceFromTextureOptions
struct FGeometryScriptDisplaceFromTextureOptions
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	uint8                                        Pad_1C40[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             UVScale;                                           // 0x8(0x10)(Edit, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             UVOffset;                                          // 0x18(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Center;                                            // 0x28(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        ImageChannel;                                      // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptEmptySelectionBehavior EmptyBehavior;                                     // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C44[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshEditPolygroupOptions
struct FGeometryScriptMeshEditPolygroupOptions
{
public:
	enum class EGeometryScriptMeshEditPolygroupMode GroupMode;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C48[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ConstantGroup;                                     // 0x4(0x4)(ConstParm, BlueprintVisible, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshOffsetOptions
struct FGeometryScriptMeshOffsetOptions
{
public:
	float                                        OffsetDistance;                                    // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFixedBoundary;                                    // 0x4(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C49[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        SolveSteps;                                        // 0x8(0x4)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        SmoothAlpha;                                       // 0xC(0x4)(ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bReprojectDuringSmoothing;                         // 0x10(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C4E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        BoundaryAlpha;                                     // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshExtrudeOptions
struct FGeometryScriptMeshExtrudeOptions
{
public:
	float                                        ExtrudeDistance;                                   // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C52[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ExtrudeDirection;                                  // 0x8(0x18)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        UVScale;                                           // 0x20(0x4)(Edit, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSolidsToShells;                                   // 0x24(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C55[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshLinearExtrudeOptions
struct FGeometryScriptMeshLinearExtrudeOptions
{
public:
	float                                        Distance;                                          // 0x0(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	enum class EGeometryScriptLinearExtrudeDirection DirectionMode;                                     // 0x4(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C5A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Direction;                                         // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	enum class EGeometryScriptPolyOperationArea  AreaMode;                                          // 0x20(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C5C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptMeshEditPolygroupOptions GroupOptions;                                      // 0x24(0x8)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        UVScale;                                           // 0x2C(0x4)(Edit, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSolidsToShells;                                   // 0x30(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C5E[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshOffsetFacesOptions
struct FGeometryScriptMeshOffsetFacesOptions
{
public:
	float                                        Distance;                                          // 0x0(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	enum class EGeometryScriptOffsetFacesType    OffsetType;                                        // 0x4(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptPolyOperationArea  AreaMode;                                          // 0x5(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C63[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptMeshEditPolygroupOptions GroupOptions;                                      // 0x8(0x8)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        UVScale;                                           // 0x10(0x4)(Edit, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSolidsToShells;                                   // 0x14(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C66[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshInsetOutsetFacesOptions
struct FGeometryScriptMeshInsetOutsetFacesOptions
{
public:
	float                                        Distance;                                          // 0x0(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         bReproject;                                        // 0x4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bBoundaryOnly;                                     // 0x5(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C6A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Softness;                                          // 0x8(0x4)(ConstParm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        AreaScale;                                         // 0xC(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptPolyOperationArea  AreaMode;                                          // 0x10(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C6D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptMeshEditPolygroupOptions GroupOptions;                                      // 0x14(0x8)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        UVScale;                                           // 0x1C(0x4)(Edit, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshBevelOptions
struct FGeometryScriptMeshBevelOptions
{
public:
	float                                        BevelDistance;                                     // 0x0(0x4)(ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bInferMaterialID;                                  // 0x4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C71[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        SetMaterialID;                                     // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bApplyFilterBox;                                   // 0xC(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C72[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBox                                  FilterBox;                                         // 0x10(0x38)(ExportObject, Net, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C73[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            FilterBoxTransform;                                // 0x50(0x60)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFullyContained;                                   // 0xB0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C74[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshBevelSelectionOptions
struct FGeometryScriptMeshBevelSelectionOptions
{
public:
	float                                        BevelDistance;                                     // 0x0(0x4)(ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bInferMaterialID;                                  // 0x4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C75[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        SetMaterialID;                                     // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptCalculateNormalsOptions
struct FGeometryScriptCalculateNormalsOptions
{
public:
	bool                                         bAngleWeighted;                                    // 0x0(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAreaWeighted;                                     // 0x1(0x1)(BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSplitNormalsOptions
struct FGeometryScriptSplitNormalsOptions
{
public:
	bool                                         bSplitByOpeningAngle;                              // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C77[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        OpeningAngleDeg;                                   // 0x4(0x4)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSplitByFaceGroup;                                 // 0x8(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C79[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0xC(0x8)(Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptTangentsOptions
struct FGeometryScriptTangentsOptions
{
public:
	enum class EGeometryScriptTangentTypes       Type;                                              // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
	uint8                                        Pad_1C7B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        UVLayer;                                           // 0x4(0x4)(BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPrimitiveOptions
struct FGeometryScriptPrimitiveOptions
{
public:
	enum class EGeometryScriptPrimitivePolygroupMode PolygroupMode;                                     // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFlipOrientation;                                  // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptPrimitiveUVMode    UVMode;                                            // 0x2(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptRevolveOptions
struct FGeometryScriptRevolveOptions
{
public:
	float                                        RevolveDegrees;                                    // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        DegreeOffset;                                      // 0x4(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bReverseDirection;                                 // 0x8(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHardNormals;                                      // 0x9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C80[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        HardNormalAngle;                                   // 0xC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bProfileAtMidpoint;                                // 0x10(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFillPartialRevolveEndcaps;                        // 0x11(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C82[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptVoronoiOptions
struct FGeometryScriptVoronoiOptions
{
public:
	float                                        BoundsExpand;                                      // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C84[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FBox                                  Bounds;                                            // 0x8(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                CreateCells;                                       // 0x40(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIncludeBoundary;                                  // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C85[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1C (0x1C - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptRemeshOptions
struct FGeometryScriptRemeshOptions
{
public:
	bool                                         bDiscardAttributes;                                // 0x0(0x1)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bReprojectToInputMesh;                             // 0x1(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptRemeshSmoothingType SmoothingType;                                     // 0x2(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C86[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SmoothingRate;                                     // 0x4(0x4)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptRemeshEdgeConstraintType MeshBoundaryConstraint;                            // 0x8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptRemeshEdgeConstraintType GroupBoundaryConstraint;                           // 0x9(0x1)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptRemeshEdgeConstraintType MaterialBoundaryConstraint;                        // 0xA(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowFlips;                                       // 0xB(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowSplits;                                      // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowCollapses;                                   // 0xD(0x1)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPreventNormalFlips;                               // 0xE(0x1)(Edit, Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPreventTinyTriangles;                             // 0xF(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseFullRemeshPasses;                              // 0x10(0x1)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C8E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        RemeshIterations;                                  // 0x14(0x4)(Edit, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAutoCompact;                                      // 0x18(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C90[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptUniformRemeshOptions
struct FGeometryScriptUniformRemeshOptions
{
public:
	enum class EGeometryScriptUniformRemeshTargetType TargetType;                                        // 0x0(0x1)(BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C93[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        TargetTriangleCount;                               // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        TargetEdgeLength;                                  // 0x8(0x4)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptWeldEdgesOptions
struct FGeometryScriptWeldEdgesOptions
{
public:
	float                                        Tolerance;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         bOnlyUniquePairs;                                  // 0x4(0x1)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C95[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptResolveTJunctionOptions
struct FGeometryScriptResolveTJunctionOptions
{
public:
	float                                        Tolerance;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptFillHolesOptions
struct FGeometryScriptFillHolesOptions
{
public:
	enum class EGeometryScriptFillHolesMethod    FillMethod;                                        // 0x0(0x1)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDeleteIsolatedTriangles;                          // 0x1(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptRemoveSmallComponentOptions
struct FGeometryScriptRemoveSmallComponentOptions
{
public:
	float                                        MinVolume;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinArea;                                           // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MinTriangleCount;                                  // 0x8(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptRemoveHiddenTrianglesOptions
struct FGeometryScriptRemoveHiddenTrianglesOptions
{
public:
	enum class EGeometryScriptRemoveHiddenTrianglesMethod Method;                                            // 0x0(0x1)(BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C96[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        SamplesPerTriangle;                                // 0x4(0x4)(Edit, ConstParm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ShrinkSelection;                                   // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        WindingIsoValue;                                   // 0xC(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        RaysPerSample;                                     // 0x10(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        NormalOffset;                                      // 0x14(0x4)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCompactResult;                                    // 0x18(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C99[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptDegenerateTriangleOptions
struct FGeometryScriptDegenerateTriangleOptions
{
public:
	enum class EGeometryScriptRepairMeshMode     Mode;                                              // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1C9A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       MinTriangleArea;                                   // 0x8(0x8)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       MinEdgeLength;                                     // 0x10(0x8)(Edit, ExportObject, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCompactOnCompletion;                              // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C9B[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshPointSamplingOptions
struct FGeometryScriptMeshPointSamplingOptions
{
public:
	float                                        SamplingRadius;                                    // 0x0(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxNumSamples;                                     // 0x4(0x4)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        RandomSeed;                                        // 0x8(0x4)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C9D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       SubSampleDensity;                                  // 0x10(0x8)(Edit, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptNonUniformPointSamplingOptions
struct FGeometryScriptNonUniformPointSamplingOptions
{
public:
	float                                        MaxSamplingRadius;                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptSamplingDistributionMode SizeDistribution;                                  // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C9F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       SizeDistributionPower;                             // 0x8(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptSamplingWeightMode WeightMode;                                        // 0x10(0x1)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bInvertWeights;                                    // 0x11(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CA0[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPlanarSimplifyOptions
struct FGeometryScriptPlanarSimplifyOptions
{
public:
	float                                        AngleThreshold;                                    // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAutoCompact;                                      // 0x4(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CA2[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPolygroupSimplifyOptions
struct FGeometryScriptPolygroupSimplifyOptions
{
public:
	float                                        AngleThreshold;                                    // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAutoCompact;                                      // 0x4(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CA4[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x7 (0x7 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSimplifyMeshOptions
struct FGeometryScriptSimplifyMeshOptions
{
public:
	enum class EGeometryScriptRemoveMeshSimplificationType Method;                                            // 0x0(0x1)(BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowSeamCollapse;                                // 0x1(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowSeamSmoothing;                               // 0x2(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowSeamSplits;                                  // 0x3(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPreserveVertexPositions;                          // 0x4(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRetainQuadricMemory;                              // 0x5(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAutoCompact;                                      // 0x6(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSpatialQueryOptions
struct FGeometryScriptSpatialQueryOptions
{
public:
	float                                        MaxDistance;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         bAllowUnsafeModifiedQueries;                       // 0x4(0x1)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CA7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        WindingIsoThreshold;                               // 0x8(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptRayHitResult
struct FGeometryScriptRayHitResult
{
public:
	bool                                         bHit;                                              // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CA8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RayParameter;                                      // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        HitTriangleID;                                     // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CAA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               HitPosition;                                       // 0x10(0x18)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               HitBaryCoords;                                     // 0x28(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPNTessellateOptions
struct FGeometryScriptPNTessellateOptions
{
public:
	bool                                         bRecomputeNormals;                                 // 0x0(0x1)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSelectiveTessellateOptions
struct FGeometryScriptSelectiveTessellateOptions
{
public:
	bool                                         bEnableMultithreading;                             // 0x0(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptEmptySelectionBehavior EmptyBehavior;                                     // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptRepackUVsOptions
struct FGeometryScriptRepackUVsOptions
{
public:
	int32                                        TargetImageWidth;                                  // 0x0(0x4)(Edit, ConstParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOptimizeIslandRotation;                           // 0x4(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CAD[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptExpMapUVOptions
struct FGeometryScriptExpMapUVOptions
{
public:
	int32                                        NormalSmoothingRounds;                             // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        NormalSmoothingAlpha;                              // 0x4(0x4)(BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSpectralConformalUVOptions
struct FGeometryScriptSpectralConformalUVOptions
{
public:
	bool                                         bPreserveIrregularity;                             // 0x0(0x1)(Edit, ConstParm, Net, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptRecomputeUVsOptions
struct FGeometryScriptRecomputeUVsOptions
{
public:
	enum class EGeometryScriptUVFlattenMethod    Method;                                            // 0x0(0x1)(BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptUVIslandSource     IslandSource;                                      // 0x1(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CB3[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptExpMapUVOptions        ExpMapOptions;                                     // 0x4(0x8)(ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FGeometryScriptSpectralConformalUVOptions SpectralConformalOptions;                          // 0xC(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CB4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x10(0x8)(Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAutoAlignIslandsWithAxes;                         // 0x18(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CB5[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x34 (0x34 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPatchBuilderOptions
struct FGeometryScriptPatchBuilderOptions
{
public:
	int32                                        InitialPatchCount;                                 // 0x0(0x4)(Edit, ConstParm, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MinPatchSize;                                      // 0x4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PatchCurvatureAlignmentWeight;                     // 0x8(0x4)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PatchMergingMetricThresh;                          // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PatchMergingAngleThresh;                           // 0x10(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FGeometryScriptExpMapUVOptions        ExpMapOptions;                                     // 0x14(0x8)(ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRespectInputGroups;                               // 0x1C(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CB8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x20(0x8)(Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAutoPack;                                         // 0x28(0x1)(Edit, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CBA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptRepackUVsOptions       PackingOptions;                                    // 0x2C(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptXAtlasOptions
struct FGeometryScriptXAtlasOptions
{
public:
	int32                                        MaxIterations;                                     // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScript3DGridParameters
struct FGeometryScript3DGridParameters
{
public:
	enum class EGeometryScriptGridSizingMethod   SizeMethod;                                        // 0x0(0x1)(BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CBD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        GridCellSize;                                      // 0x4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        GridResolution;                                    // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSolidifyOptions
struct FGeometryScriptSolidifyOptions
{
public:
	struct FGeometryScript3DGridParameters       GridParameters;                                    // 0x0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        WindingThreshold;                                  // 0xC(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSolidAtBoundaries;                                // 0x10(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CBF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ExtendBounds;                                      // 0x14(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SurfaceSearchSteps;                                // 0x18(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bThickenShells;                                    // 0x1C(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CC2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       ShellThickness;                                    // 0x20(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMorphologyOptions
struct FGeometryScriptMorphologyOptions
{
public:
	struct FGeometryScript3DGridParameters       SDFGridParameters;                                 // 0x0(0xC)(ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseSeparateMeshGrid;                              // 0xC(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CC3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScript3DGridParameters       MeshGridParameters;                                // 0x10(0xC)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptMorphologicalOpType Operation;                                         // 0x1C(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CC5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Distance;                                          // 0x20(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSplineSamplingOptions
struct FGeometryScriptSplineSamplingOptions
{
public:
	int32                                        NumSamples;                                        // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ErrorTolerance;                                    // 0x4(0x4)(EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EGeometryScriptSampleSpacing      SampleSpacing;                                     // 0x8(0x1)(Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESplineCoordinateSpace            CoordinateSpace;                                   // 0x9(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CC7[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptCopyMeshFromComponentOptions
struct FGeometryScriptCopyMeshFromComponentOptions
{
public:
	bool                                         bWantNormals;                                      // 0x0(0x1)(ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bWantTangents;                                     // 0x1(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CCA[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGeometryScriptMeshReadLOD            RequestedLOD;                                      // 0x4(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSampleTextureOptions
struct FGeometryScriptSampleTextureOptions
{
public:
	enum class EGeometryScriptPixelSamplingMethod SamplingMethod;                                    // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bWrap;                                             // 0x1(0x1)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1CCD[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             UVScale;                                           // 0x8(0x10)(Edit, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             UVOffset;                                          // 0x18(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

}


