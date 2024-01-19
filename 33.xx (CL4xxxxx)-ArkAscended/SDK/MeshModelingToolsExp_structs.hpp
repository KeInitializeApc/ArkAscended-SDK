#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EBakeNormalSpace : int32
{
	Tangent                        = 0,
	Object                         = 1,
	EBakeNormalSpace_MAX           = 2,
};

enum class EBakeCurvatureTypeMode : int32
{
	MeanAverage                    = 0,
	Max                            = 1,
	Min                            = 2,
	Gaussian                       = 3,
};

enum class EBakeCurvatureColorMode : int32
{
	Grayscale                      = 0,
	RedBlue                        = 1,
	RedGreenBlue                   = 2,
	EBakeCurvatureColorMode_MAX    = 3,
};

enum class EBakeCurvatureClampMode : int32
{
	None                           = 0,
	OnlyPositive                   = 1,
	OnlyNegative                   = 2,
	EBakeCurvatureClampMode_MAX    = 3,
};

enum class EExtrudeMeshSelectionInteractionMode : uint8
{
	Interactive                    = 0,
	Fixed                          = 1,
	EExtrudeMeshSelectionInteractionMode_MAX = 2,
};

enum class EExtrudeMeshSelectionRegionModifierMode : uint8
{
	OriginalShape                  = 0,
	FlattenToPlane                 = 1,
	RaycastToPlane                 = 2,
	EExtrudeMeshSelectionRegionModifierMode_MAX = 3,
};

enum class EPlaneBrushSideMode : uint8
{
	BothSides                      = 0,
	PushDown                       = 1,
	PullTowards                    = 2,
	EPlaneBrushSideMode_MAX        = 3,
};

enum class EOffsetMeshSelectionInteractionMode : uint8
{
	Fixed                          = 0,
	EOffsetMeshSelectionInteractionMode_MAX = 1,
};

enum class EOffsetMeshSelectionDirectionMode : uint8
{
	VertexNormals                  = 0,
	FaceNormals                    = 1,
	ConstantWidth                  = 2,
	EOffsetMeshSelectionDirectionMode_MAX = 3,
};

enum class EPatternToolShape : uint8
{
	Line                           = 0,
	Grid                           = 1,
	Circle                         = 2,
	EPatternToolShape_MAX          = 3,
};

enum class EPatternToolSingleAxis : uint8
{
	XAxis                          = 0,
	YAxis                          = 1,
	ZAxis                          = 2,
	EPatternToolSingleAxis_MAX     = 3,
};

enum class EPatternToolSinglePlane : uint8
{
	XYPlane                        = 0,
	XZPlane                        = 1,
	YZPlane                        = 2,
	EPatternToolSinglePlane_MAX    = 3,
};

enum class EPatternToolAxisSpacingMode : uint8
{
	ByCount                        = 0,
	StepSize                       = 1,
	Packed                         = 2,
	EPatternToolAxisSpacingMode_MAX = 3,
};

enum class EMeshBoundaryConstraint : uint8
{
	Fixed                          = 7,
	Refine                         = 5,
	Free                           = 1,
	EMeshBoundaryConstraint_MAX    = 8,
};

enum class EGroupBoundaryConstraint : uint8
{
	Fixed                          = 7,
	Refine                         = 5,
	Free                           = 1,
	Ignore                         = 0,
	EGroupBoundaryConstraint_MAX   = 8,
};

enum class EMaterialBoundaryConstraint : uint8
{
	Fixed                          = 7,
	Refine                         = 5,
	Free                           = 1,
	Ignore                         = 0,
	EMaterialBoundaryConstraint_MAX = 8,
};

enum class EAlignObjectsAlignTypes : int32
{
	Pivots                         = 0,
	BoundingBoxes                  = 1,
	EAlignObjectsAlignTypes_MAX    = 2,
};

enum class EAlignObjectsAlignToOptions : int32
{
	FirstSelected                  = 0,
	LastSelected                   = 1,
	Combined                       = 2,
	EAlignObjectsAlignToOptions_MAX = 3,
};

enum class EAlignObjectsBoxPoint : int32
{
	Center                         = 0,
	Bottom                         = 1,
	Top                            = 2,
	Left                           = 3,
	Right                          = 4,
	Front                          = 5,
	Back                           = 6,
	Min                            = 7,
	Max                            = 8,
};

enum class EBakeMapType : uint8
{
	None                           = 0,
	TangentSpaceNormal             = 1,
	ObjectSpaceNormal              = 2,
	FaceNormal                     = 4,
	BentNormal                     = 8,
	Position                       = 16,
	Curvature                      = 32,
	AmbientOcclusion               = 64,
	Texture                        = 128,
	MultiTexture                   = 256,
	VertexColor                    = 512,
	MaterialID                     = 1024,
	All                            = 2047,
	EBakeMapType_MAX               = 2048,
};

enum class EBakeVertexOutput : int32
{
	RGBA                           = 0,
	PerChannel                     = 1,
	EBakeVertexOutput_MAX          = 2,
};

enum class EBakeVertexChannel : int32
{
	R                              = 0,
	G                              = 1,
	B                              = 2,
	A                              = 3,
	RGBA                           = 4,
	EBakeVertexChannel_MAX         = 5,
};

enum class EBakeScaleMethod : uint8
{
	BakeFullScale                  = 0,
	BakeNonuniformScale            = 1,
	DoNotBakeScale                 = 2,
	EBakeScaleMethod_MAX           = 3,
};

enum class EConvertToPolygonsMode : int32
{
	FaceNormalDeviation            = 0,
	FindPolygons                   = 1,
	FromUVIslands                  = 2,
	FromNormalSeams                = 3,
	FromConnectedTris              = 4,
	FromFurthestPointSampling      = 5,
	CopyFromLayer                  = 6,
	EConvertToPolygonsMode_MAX     = 7,
};

enum class ECubeGridToolFaceSelectionMode : int32
{
	OutsideBasedOnNormal           = 0,
	InsideBasedOnNormal            = 1,
	OutsideBasedOnViewRay          = 2,
	InsideBasedOnViewRay           = 3,
	ECubeGridToolFaceSelectionMode_MAX = 4,
};

enum class ECubeGridToolAction : uint8
{
	NoAction                       = 0,
	Push                           = 1,
	Pull                           = 2,
	Flip                           = 3,
	SlideForward                   = 4,
	SlideBack                      = 5,
	DecreaseGridPower              = 6,
	IncreaseGridPower              = 7,
	CornerMode                     = 8,
	ResetFromActor                 = 9,
	Done                           = 10,
	Cancel                         = 11,
	ECubeGridToolAction_MAX        = 12,
};

enum class EGroupTopologyDeformationStrategy : uint8
{
	Linear                         = 0,
	Laplacian                      = 1,
	EGroupTopologyDeformationStrategy_MAX = 2,
};

enum class EWeightScheme : int32
{
	Uniform                        = 0,
	Umbrella                       = 1,
	Valence                        = 2,
	MeanValue                      = 3,
	Cotangent                      = 4,
	ClampedCotangent               = 5,
	IDTCotangent                   = 6,
	EWeightScheme_MAX              = 7,
};

enum class EQuickTransformerMode : uint8
{
	AxisTranslation                = 0,
	AxisRotation                   = 1,
	EQuickTransformerMode_MAX      = 2,
};

enum class EDisplaceMeshToolDisplaceType : uint8
{
	Constant                       = 0,
	DisplacementMap                = 1,
	RandomNoise                    = 2,
	PerlinNoise                    = 3,
	SineWave                       = 4,
	EDisplaceMeshToolDisplaceType_MAX = 5,
};

enum class EDisplaceMeshToolSubdivisionType : uint8
{
	Flat                           = 0,
	PNTriangles                    = 1,
	EDisplaceMeshToolSubdivisionType_MAX = 2,
};

enum class EDisplaceMeshToolTriangleSelectionType : uint8
{
	None                           = 0,
	Material                       = 1,
	EDisplaceMeshToolTriangleSelectionType_MAX = 2,
};

enum class EDisplaceMeshToolChannelType : uint8
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	EDisplaceMeshToolChannelType_MAX = 4,
};

enum class EDrawPolyPathWidthMode : int32
{
	Fixed                          = 0,
	Interactive                    = 1,
	EDrawPolyPathWidthMode_MAX     = 2,
};

enum class EDrawPolyPathRadiusMode : int32
{
	Fixed                          = 0,
	Interactive                    = 1,
	EDrawPolyPathRadiusMode_MAX    = 2,
};

enum class EDrawPolyPathExtrudeMode : int32
{
	Flat                           = 0,
	Fixed                          = 1,
	Interactive                    = 2,
	RampFixed                      = 3,
	RampInteractive                = 4,
	EDrawPolyPathExtrudeMode_MAX   = 5,
};

enum class EDrawPolyPathExtrudeDirection : int32
{
	SelectionNormal                = 0,
	WorldX                         = 1,
	WorldY                         = 2,
	WorldZ                         = 3,
	LocalX                         = 4,
	LocalY                         = 5,
	LocalZ                         = 6,
	EDrawPolyPathExtrudeDirection_MAX = 7,
};

enum class EDynamicMeshSculptBrushType : uint8
{
	Move                           = 0,
	PullKelvin                     = 1,
	PullSharpKelvin                = 2,
	Smooth                         = 3,
	Offset                         = 4,
	SculptView                     = 5,
	SculptMax                      = 6,
	Inflate                        = 7,
	ScaleKelvin                    = 8,
	Pinch                          = 9,
	TwistKelvin                    = 10,
	Flatten                        = 11,
	Plane                          = 12,
	PlaneViewAligned               = 13,
	FixedPlane                     = 14,
	Resample                       = 15,
	LastValue                      = 16,
	EDynamicMeshSculptBrushType_MAX = 17,
};

enum class EEditPivotSnapDragRotationMode : uint8
{
	Ignore                         = 0,
	Align                          = 1,
	AlignFlipped                   = 2,
	LastValue                      = 3,
	EEditPivotSnapDragRotationMode_MAX = 4,
};

enum class EEditPivotToolActions : uint8
{
	NoAction                       = 0,
	Center                         = 1,
	Bottom                         = 2,
	Top                            = 3,
	Left                           = 4,
	Right                          = 5,
	Front                          = 6,
	Back                           = 7,
	WorldOrigin                    = 8,
	EEditPivotToolActions_MAX      = 9,
};

enum class EHoleFillToolActions : uint8
{
	NoAction                       = 0,
	SelectAll                      = 1,
	ClearSelection                 = 2,
	EHoleFillToolActions_MAX       = 3,
};

enum class ELatticeInterpolationType : uint8
{
	Linear                         = 0,
	Cubic                          = 1,
	ELatticeInterpolationType_MAX  = 2,
};

enum class ELatticeDeformerToolAction : uint8
{
	NoAction                       = 0,
	Constrain                      = 1,
	ClearConstraints               = 2,
	ELatticeDeformerToolAction_MAX = 3,
};

enum class EBrushActionMode : int32
{
	Paint                          = 0,
	FloodFill                      = 1,
	EBrushActionMode_MAX           = 2,
};

enum class EMeshAttributePaintToolActions : uint8
{
	NoAction                       = 0,
	EMeshAttributePaintToolActions_MAX = 1,
};

enum class EMeshGroupPaintInteractionType : uint8
{
	Brush                          = 0,
	Fill                           = 1,
	GroupFill                      = 2,
	PolyLasso                      = 3,
	LastValue                      = 4,
	EMeshGroupPaintInteractionType_MAX = 5,
};

enum class EMeshGroupPaintBrushType : uint8
{
	Paint                          = 0,
	Erase                          = 1,
	LastValue                      = 2,
	EMeshGroupPaintBrushType_MAX   = 3,
};

enum class EMeshGroupPaintBrushAreaType : uint8
{
	Connected                      = 0,
	Volumetric                     = 1,
	EMeshGroupPaintBrushAreaType_MAX = 2,
};

enum class EMeshGroupPaintVisibilityType : uint8
{
	None                           = 0,
	FrontFacing                    = 1,
	Unoccluded                     = 2,
	EMeshGroupPaintVisibilityType_MAX = 3,
};

enum class EMeshGroupPaintToolActions : uint8
{
	NoAction                       = 0,
	ClearFrozen                    = 1,
	FreezeCurrent                  = 2,
	FreezeOthers                   = 3,
	GrowCurrent                    = 4,
	ShrinkCurrent                  = 5,
	ClearCurrent                   = 6,
	FloodFillCurrent               = 7,
	ClearAll                       = 8,
	EMeshGroupPaintToolActions_MAX = 9,
};

enum class EMeshInspectorToolDrawIndexMode : uint8
{
	None                           = 0,
	VertexID                       = 1,
	TriangleID                     = 2,
	GroupID                        = 3,
	EdgeID                         = 4,
	EMeshInspectorToolDrawIndexMode_MAX = 5,
};

enum class EMeshInspectorMaterialMode : uint8
{
	Original                       = 0,
	FlatShaded                     = 1,
	Grey                           = 2,
	Transparent                    = 3,
	TangentNormal                  = 4,
	VertexColor                    = 5,
	GroupColor                     = 6,
	Checkerboard                   = 7,
	Override                       = 8,
	EMeshInspectorMaterialMode_MAX = 9,
};

enum class EMeshSelectionToolActions : uint8
{
	NoAction                       = 0,
	SelectAll                      = 1,
	SelectAllByMaterial            = 2,
	ClearSelection                 = 3,
	InvertSelection                = 4,
	GrowSelection                  = 5,
	ShrinkSelection                = 6,
	ExpandToConnected              = 7,
	SelectLargestComponentByTriCount = 8,
	SelectLargestComponentByArea   = 9,
	OptimizeSelection              = 10,
	DeleteSelected                 = 11,
	DisconnectSelected             = 12,
	SeparateSelected               = 13,
	DuplicateSelected              = 14,
	FlipSelected                   = 15,
	CreateGroup                    = 16,
	SmoothBoundary                 = 17,
	CycleSelectionMode             = 18,
	CycleViewMode                  = 19,
	EMeshSelectionToolActions_MAX  = 20,
};

enum class EMeshSelectionToolPrimaryMode : int32
{
	Brush                          = 0,
	VolumetricBrush                = 1,
	AngleFiltered                  = 2,
	Visible                        = 3,
	AllConnected                   = 4,
	AllInGroup                     = 5,
	ByMaterial                     = 6,
	ByMaterialAll                  = 7,
	ByUVIsland                     = 8,
	AllWithinAngle                 = 9,
	EMeshSelectionToolPrimaryMode_MAX = 10,
};

enum class EMeshFacesColorMode : int32
{
	None                           = 0,
	ByGroup                        = 1,
	ByMaterialID                   = 2,
	ByUVIsland                     = 3,
	EMeshFacesColorMode_MAX        = 4,
};

enum class ENonlinearOperationType : uint8
{
	Bend                           = 0,
	Flare                          = 1,
	Twist                          = 2,
	ENonlinearOperationType_MAX    = 3,
};

enum class EFlareProfileType : uint8
{
	SinMode                        = 0,
	SinSquaredMode                 = 1,
	TriangleMode                   = 2,
	EFlareProfileType_MAX          = 3,
};

enum class EMeshSpaceDeformerToolAction : uint8
{
	NoAction                       = 0,
	ShiftToCenter                  = 1,
	EMeshSpaceDeformerToolAction_MAX = 2,
};

enum class EMeshVertexSculptBrushType : uint8
{
	Move                           = 0,
	PullKelvin                     = 1,
	PullSharpKelvin                = 2,
	Smooth                         = 3,
	SmoothFill                     = 4,
	Offset                         = 5,
	SculptView                     = 6,
	SculptMax                      = 7,
	Inflate                        = 8,
	ScaleKelvin                    = 9,
	Pinch                          = 10,
	TwistKelvin                    = 11,
	Flatten                        = 12,
	Plane                          = 13,
	PlaneViewAligned               = 14,
	FixedPlane                     = 15,
	LastValue                      = 16,
	EMeshVertexSculptBrushType_MAX = 17,
};

enum class EMeshVertexSculptBrushFilterType : uint8
{
	None                           = 0,
	Component                      = 1,
	PolyGroup                      = 2,
	EMeshVertexSculptBrushFilterType_MAX = 3,
};

enum class EMirrorSaveMode : uint8
{
	UpdateAssets                   = 0,
	CreateNewAssets                = 1,
	EMirrorSaveMode_MAX            = 2,
};

enum class EMirrorOperationMode : uint8
{
	MirrorAndAppend                = 0,
	MirrorExisting                 = 1,
	EMirrorOperationMode_MAX       = 2,
};

enum class EMirrorCtrlClickBehavior : uint8
{
	Reposition                     = 0,
	RepositionAndReorient          = 1,
	EMirrorCtrlClickBehavior_MAX   = 2,
};

enum class EMirrorToolAction : uint8
{
	NoAction                       = 0,
	ShiftToCenter                  = 1,
	Left                           = 2,
	Right                          = 3,
	Up                             = 4,
	Down                           = 5,
	Forward                        = 6,
	Backward                       = 7,
	EMirrorToolAction_MAX          = 8,
};

enum class EOffsetMeshToolOffsetType : uint8
{
	Iterative                      = 0,
	Implicit                       = 1,
	EOffsetMeshToolOffsetType_MAX  = 2,
};

enum class ECollisionGeometryMode : int32
{
	Default                        = 0,
	SimpleAndComplex               = 1,
	UseSimpleAsComplex             = 2,
	UseComplexAsSimple             = 3,
	ECollisionGeometryMode_MAX     = 4,
};

enum class EExtractCollisionOutputType : uint8
{
	Simple                         = 0,
	Complex                        = 1,
	EExtractCollisionOutputType_MAX = 2,
};

enum class ESetCollisionGeometryInputMode : int32
{
	CombineAll                     = 0,
	PerInputObject                 = 1,
	PerMeshComponent               = 2,
	PerMeshGroup                   = 3,
	ESetCollisionGeometryInputMode_MAX = 4,
};

enum class ECollisionGeometryType : int32
{
	KeepExisting                   = 0,
	AlignedBoxes                   = 1,
	OrientedBoxes                  = 2,
	MinimalSpheres                 = 3,
	Capsules                       = 4,
	ConvexHulls                    = 5,
	SweptHulls                     = 6,
	LevelSets                      = 7,
	MinVolume                      = 10,
	None                           = 11,
	ECollisionGeometryType_MAX     = 12,
};

enum class EProjectedHullAxis : int32
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	SmallestBoxDimension           = 3,
	SmallestVolume                 = 4,
	EProjectedHullAxis_MAX         = 5,
};

enum class EPlaneCutToolActions : uint8
{
	NoAction                       = 0,
	Cut                            = 1,
	FlipPlane                      = 2,
	EPlaneCutToolActions_MAX       = 3,
};

enum class EOcclusionTriangleSamplingUIMode : uint8
{
	Vertices                       = 0,
	VerticesAndCentroids           = 1,
	EOcclusionTriangleSamplingUIMode_MAX = 2,
};

enum class EOcclusionCalculationUIMode : uint8
{
	GeneralizedWindingNumber       = 0,
	RaycastOcclusionSamples        = 1,
	EOcclusionCalculationUIMode_MAX = 2,
};

enum class EOccludedAction : uint8
{
	Remove                         = 0,
	SetNewGroup                    = 1,
	EOccludedAction_MAX            = 2,
};

enum class EBrushToolSizeType : uint8
{
	Adaptive                       = 0,
	World                          = 1,
	EBrushToolSizeType_MAX         = 2,
};

enum class EMeshSculptFalloffType : uint8
{
	Smooth                         = 0,
	Linear                         = 1,
	Inverse                        = 2,
	Round                          = 3,
	BoxSmooth                      = 4,
	BoxLinear                      = 5,
	BoxInverse                     = 6,
	BoxRound                       = 7,
	LastValue                      = 8,
	EMeshSculptFalloffType_MAX     = 9,
};

enum class ESkinWeightsBindType : uint8
{
	DirectDistance                 = 0,
	GeodesicVoxel                  = 1,
	ESkinWeightsBindType_MAX       = 2,
};

enum class ESmoothMeshToolSmoothType : uint8
{
	Iterative                      = 0,
	Implicit                       = 1,
	Diffusion                      = 2,
	ESmoothMeshToolSmoothType_MAX  = 3,
};

enum class ETransformMeshesTransformMode : uint8
{
	SharedGizmo                    = 0,
	SharedGizmoLocal               = 1,
	PerObjectGizmo                 = 2,
	LastValue                      = 3,
	ETransformMeshesTransformMode_MAX = 4,
};

enum class ETransformMeshesSnapDragSource : uint8
{
	ClickPoint                     = 0,
	Pivot                          = 1,
	LastValue                      = 2,
	ETransformMeshesSnapDragSource_MAX = 3,
};

enum class ETransformMeshesSnapDragRotationMode : uint8
{
	Ignore                         = 0,
	Align                          = 1,
	AlignFlipped                   = 2,
	LastValue                      = 3,
	ETransformMeshesSnapDragRotationMode_MAX = 4,
};

enum class EVoxelBlendOperation : uint8
{
	Union                          = 0,
	Subtract                       = 1,
	EVoxelBlendOperation_MAX       = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct MeshModelingToolsExp.BakeMultiMeshDetailProperties
struct FBakeMultiMeshDetailProperties
{
public:
	class UStaticMesh*                           SourceMesh;                                        // 0x0(0x8)(ConstParm, EditFixedSize, Config, InstancedReference, SubobjectReference)
	class UTexture2D*                            SourceTexture;                                     // 0x8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Config, InstancedReference, SubobjectReference)
	int32                                        SourceTextureUVLayer;                              // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E28[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MeshModelingToolsExp.PerlinLayerProperties
struct FPerlinLayerProperties
{
public:
	float                                        Frequency;                                         // 0x0(0x4)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Intensity;                                         // 0x4(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MeshModelingToolsExp.EditPivotTarget
struct FEditPivotTarget
{
public:
	class UTransformProxy*                       TransformProxy;                                    // 0x0(0x8)(ExportObject, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UCombinedTransformGizmo*               TransformGizmo;                                    // 0x8(0x8)(ExportObject, EditFixedSize, Config, InstancedReference, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct MeshModelingToolsExp.PhysicsSphereData
struct FPhysicsSphereData
{
public:
	float                                        Radius;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1E2C[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FKShapeElem                           Element;                                           // 0x70(0x30)(BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct MeshModelingToolsExp.PhysicsBoxData
struct FPhysicsBoxData
{
public:
	struct FVector                               Dimensions;                                        // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, DuplicateTransient)
	uint8                                        Pad_1E2E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x20(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FKShapeElem                           Element;                                           // 0x80(0x30)(BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct MeshModelingToolsExp.PhysicsCapsuleData
struct FPhysicsCapsuleData
{
public:
	float                                        Radius;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        Length;                                            // 0x4(0x4)(ConstParm, BlueprintVisible, Net, ReturnParm)
	uint8                                        Pad_1E31[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FKShapeElem                           Element;                                           // 0x70(0x30)(BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MeshModelingToolsExp.PhysicsConvexData
struct FPhysicsConvexData
{
public:
	int32                                        NumVertices;                                       // 0x0(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Config, InstancedReference, SubobjectReference)
	int32                                        NumFaces;                                          // 0x4(0x4)(Net, EditFixedSize, Config, InstancedReference, SubobjectReference)
	struct FKShapeElem                           Element;                                           // 0x8(0x30)(BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MeshModelingToolsExp.PhysicsLevelSetData
struct FPhysicsLevelSetData
{
public:
	struct FKShapeElem                           Element;                                           // 0x0(0x30)(BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MeshModelingToolsExp.BrushToolRadius
struct FBrushToolRadius
{
public:
	enum class EBrushToolSizeType                SizeType;                                          // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E34[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        AdaptiveSize;                                      // 0x4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Config, InstancedReference, SubobjectReference)
	float                                        WorldRadius;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E35[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MeshModelingToolsExp.TransformMeshesTarget
struct FTransformMeshesTarget
{
public:
	class UTransformProxy*                       TransformProxy;                                    // 0x0(0x8)(ExportObject, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UCombinedTransformGizmo*               TransformGizmo;                                    // 0x8(0x8)(ExportObject, EditFixedSize, Config, InstancedReference, SubobjectReference)
};

}


