#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPCGAttributeAccessorFlags : uint8
{
	StrictType                     = 1,
	AllowBroadcast                 = 2,
	AllowConstructible             = 4,
	AllowSetDefaultValue           = 8,
	EPCGAttributeAccessorFlags_MAX = 9,
};

enum class EPCGAttributePropertySelection : int32
{
	Attribute                      = 0,
	PointProperty                  = 1,
	EPCGAttributePropertySelection_MAX = 2,
};

enum class EPCGChangeType : uint8
{
	None                           = 0,
	Cosmetic                       = 1,
	Settings                       = 2,
	Input                          = 4,
	Edge                           = 8,
	Node                           = 16,
	Structural                     = 32,
	EPCGChangeType_MAX             = 33,
};

enum class EPCGDataType : uint32
{
	None                           = 0,
	Point                          = 2,
	Spline                         = 4,
	LandscapeSpline                = 8,
	PolyLine                       = 12,
	Landscape                      = 16,
	Texture                        = 32,
	RenderTarget                   = 64,
	BaseTexture                    = 96,
	Surface                        = 112,
	Volume                         = 128,
	Primitive                      = 256,
	Concrete                       = 510,
	Composite                      = 512,
	Spatial                        = 1022,
	Param                          = 134217728,
	Settings                       = 268435456,
	Other                          = 536870912,
	Any                            = 1073741823,
	EPCGDataType_MAX               = 1073741824,
};

enum class EPCGDistanceShape : int32
{
	SphereBounds                   = 0,
	BoxBounds                      = 1,
	Center                         = 2,
	PCGDistanceShape_MAX           = 3,
};

enum class EPCGMetadataTypes : uint8
{
	Float                          = 0,
	Double                         = 1,
	Integer32                      = 2,
	Integer64                      = 3,
	Vector2                        = 4,
	Vector                         = 5,
	Vector4                        = 6,
	Quaternion                     = 7,
	Transform                      = 8,
	String                         = 9,
	Boolean                        = 10,
	Rotator                        = 11,
	Name                           = 12,
	Count                          = 13,
	Unknown                        = 255,
	EPCGMetadataTypes_MAX          = 256,
};

enum class EPCGMetadataOp : uint8
{
	Min                            = 0,
	Max                            = 1,
	Sub                            = 2,
	Add                            = 3,
	Mul                            = 4,
	Div                            = 5,
	SourceValue                    = 6,
	TargetValue                    = 7,
};

enum class EPCGMetadataFilterMode : uint8
{
	ExcludeAttributes              = 0,
	IncludeAttributes              = 1,
	EPCGMetadataFilterMode_MAX     = 2,
};

enum class EPCGMetadataTypesConstantStructStringMode : int32
{
	String                         = 0,
	SoftObjectPath                 = 1,
	SoftClassPath                  = 2,
	EPCGMetadataTypesConstantStructStringMode_MAX = 3,
};

enum class EPCGNormalToDensityMode : uint8
{
	Set                            = 0,
	Minimum                        = 1,
	Maximum                        = 2,
	Add                            = 3,
	Subtract                       = 4,
	Multiply                       = 5,
	Divide                         = 6,
	PCGNormalToDensityMode_MAX     = 7,
};

enum class EPCGDifferenceDensityFunction : uint8
{
	Minimum                        = 0,
	ClampedSubstraction            = 1,
	Binary                         = 2,
	EPCGDifferenceDensityFunction_MAX = 3,
};

enum class EPCGDifferenceMode : uint8
{
	Inferred                       = 0,
	Continuous                     = 1,
	Discrete                       = 2,
	EPCGDifferenceMode_MAX         = 3,
};

enum class EPCGIntersectionDensityFunction : uint8
{
	Multiply                       = 0,
	Minimum                        = 1,
	EPCGIntersectionDensityFunction_MAX = 2,
};

enum class EPCGTextureColorChannel : uint8
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	EPCGTextureColorChannel_MAX    = 4,
};

enum class EPCGTextureDensityFunction : uint8
{
	Ignore                         = 0,
	Multiply                       = 1,
	EPCGTextureDensityFunction_MAX = 2,
};

enum class EPCGUnionType : uint8
{
	LeftToRightPriority            = 0,
	RightToLeftPriority            = 1,
	KeepAll                        = 2,
	EPCGUnionType_MAX              = 3,
};

enum class EPCGUnionDensityFunction : uint8
{
	Maximum                        = 0,
	ClampedAddition                = 1,
	Binary                         = 2,
	EPCGUnionDensityFunction_MAX   = 3,
};

enum class EPCGWorldQueryFilterByTag : int32
{
	NoTagFilter                    = 0,
	IncludeTagged                  = 1,
	ExcludeTagged                  = 2,
	EPCGWorldQueryFilterByTag_MAX  = 3,
};

enum class EPCGMedadataBitwiseOperation : uint16
{
	And                            = 0,
	Not                            = 1,
	Or                             = 2,
	Xor                            = 3,
	EPCGMedadataBitwiseOperation_MAX = 4,
};

enum class EPCGMedadataBooleanOperation : uint16
{
	And                            = 0,
	Not                            = 1,
	Or                             = 2,
	Xor                            = 3,
	EPCGMedadataBooleanOperation_MAX = 4,
};

enum class EPCGMedadataCompareOperation : uint16
{
	Equal                          = 0,
	NotEqual                       = 1,
	Greater                        = 2,
	GreaterOrEqual                 = 3,
	Less                           = 4,
	LessOrEqual                    = 5,
	EPCGMedadataCompareOperation_MAX = 6,
};

enum class EPCGMetadataOperationTarget : uint8
{
	PropertyToAttribute            = 0,
	AttributeToProperty            = 1,
	AttributeToAttribute           = 2,
	EPCGMetadataOperationTarget_MAX = 3,
};

enum class EPCGMetadataMakeVector3 : uint8
{
	ThreeValues                    = 0,
	Vector2AndValue                = 1,
	EPCGMetadataMakeVector3_MAX    = 2,
};

enum class EPCGMetadataMakeVector4 : uint8
{
	FourValues                     = 0,
	Vector2AndTwoValues            = 1,
	TwoVector2                     = 2,
	Vector3AndValue                = 3,
	EPCGMetadataMakeVector4_MAX    = 4,
};

enum class EPCGMedadataMathsOperation : uint16
{
	UnaryOp                        = 1024,
	Sign                           = 1025,
	Frac                           = 1026,
	Truncate                       = 1027,
	Round                          = 1028,
	Sqrt                           = 1029,
	Abs                            = 1030,
	Floor                          = 1031,
	Ceil                           = 1032,
	BinaryOp                       = 2048,
	Add                            = 2049,
	Subtract                       = 2050,
	Multiply                       = 2051,
	Divide                         = 2052,
	Max                            = 2053,
	Min                            = 2054,
	Pow                            = 2055,
	ClampMin                       = 2056,
	ClampMax                       = 2057,
	Modulo                         = 2058,
	TernaryOp                      = 4096,
	Clamp                          = 4097,
	Lerp                           = 4098,
};

enum class EPCGMetadataSettingsBaseMode : uint8
{
	Inferred                       = 0,
	NoBroadcast                    = 1,
	Broadcast                      = 2,
	EPCGMetadataSettingsBaseMode_MAX = 3,
};

enum class EPCGMetadataSettingsBaseTypes : uint8
{
	AutoUpcastTypes                = 0,
	StrictTypes                    = 1,
	EPCGMetadataSettingsBaseTypes_MAX = 2,
};

enum class EPCGMedadataRotatorOperation : uint16
{
	RotatorOp                      = 0,
	Combine                        = 1,
	Invert                         = 2,
	Lerp                           = 3,
	TransformOp                    = 100,
	TransformRotation              = 101,
	InverseTransformRotation       = 102,
	EPCGMedadataRotatorOperation_MAX = 103,
};

enum class EPCGMedadataTransformOperation : uint16
{
	Compose                        = 0,
	Invert                         = 1,
	Lerp                           = 2,
	EPCGMedadataTransformOperation_MAX = 3,
};

enum class EPCGTransformLerpMode : uint16
{
	QuatInterp                     = 0,
	EulerInterp                    = 1,
	DualQuatInterp                 = 2,
	EPCGTransformLerpMode_MAX      = 3,
};

enum class EPCGMedadataTrigOperation : uint16
{
	Acos                           = 0,
	Asin                           = 1,
	Atan                           = 2,
	Atan2                          = 3,
	Cos                            = 4,
	Sin                            = 5,
	Tan                            = 6,
	DegToRad                       = 7,
	RadToDeg                       = 8,
	EPCGMedadataTrigOperation_MAX  = 9,
};

enum class EPCGMedadataVectorOperation : uint16
{
	VectorOp                       = 0,
	Cross                          = 1,
	Dot                            = 2,
	Distance                       = 3,
	Normalize                      = 4,
	Length                         = 5,
	RotateAroundAxis               = 6,
	TransformOp                    = 100,
	TransformDirection             = 101,
	TransformLocation              = 102,
	InverseTransformDirection      = 103,
	InverseTransformLocation       = 104,
	EPCGMedadataVectorOperation_MAX = 105,
};

enum class EPCGActorSelection : uint8
{
	ByTag                          = 0,
	ByName                         = 1,
	ByClass                        = 2,
	EPCGActorSelection_MAX         = 3,
};

enum class EPCGActorFilter : uint8
{
	Self                           = 0,
	Parent                         = 1,
	Root                           = 2,
	AllWorldActors                 = 3,
	Original                       = 4,
	EPCGActorFilter_MAX            = 5,
};

enum class EPCGAttributeFilterOperation : int32
{
	KeepSelectedAttributes         = 0,
	DeleteSelectedAttributes       = 1,
	EPCGAttributeFilterOperation_MAX = 2,
};

enum class EPCGAttributeReduceOperation : int32
{
	Average                        = 0,
	Max                            = 1,
	Min                            = 2,
};

enum class EPCGAttributeSelectOperation : int32
{
	Min                            = 0,
	Max                            = 1,
	Median                         = 2,
};

enum class EPCGAttributeSelectAxis : int32
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	W                              = 3,
	CustomAxis                     = 4,
	EPCGAttributeSelectAxis_MAX    = 5,
};

enum class EPCGBoundsModifierMode : uint8
{
	Set                            = 0,
	Intersect                      = 1,
	Include                        = 2,
	Translate                      = 3,
	Scale                          = 4,
	EPCGBoundsModifierMode_MAX     = 5,
};

enum class EPCGCopyPointsInheritanceMode : uint8
{
	Relative                       = 0,
	Source                         = 1,
	Target                         = 2,
	EPCGCopyPointsInheritanceMode_MAX = 3,
};

enum class EPCGCopyPointsMetadataInheritanceMode : uint8
{
	SourceFirst                    = 0,
	TargetFirst                    = 1,
	SourceOnly                     = 2,
	TargetOnly                     = 3,
	None                           = 4,
	EPCGCopyPointsMetadataInheritanceMode_MAX = 5,
};

enum class EPCGCreateSplineMode : uint8
{
	CreateDataOnly                 = 0,
	CreateComponent                = 1,
	CreateNewActor                 = 2,
	EPCGCreateSplineMode_MAX       = 3,
};

enum class EPCGGetDataFromActorMode : uint8
{
	ParseActorComponents           = 0,
	GetSinglePoint                 = 1,
	GetDataFromProperty            = 2,
	GetDataFromPCGComponent        = 3,
	GetDataFromPCGComponentOrParseComponents = 4,
	EPCGGetDataFromActorMode_MAX   = 5,
};

enum class EPCGDensityNoiseMode : uint8
{
	Set                            = 0,
	Minimum                        = 1,
	Maximum                        = 2,
	Add                            = 3,
	Multiply                       = 4,
	EPCGDensityNoiseMode_MAX       = 5,
};

enum class EPCGFilterByTagOperation : int32
{
	KeepTagged                     = 0,
	RemoveTagged                   = 1,
	EPCGFilterByTagOperation_MAX   = 2,
};

enum class EPCGPointExtentsModifierMode : uint8
{
	Set                            = 0,
	Minimum                        = 1,
	Maximum                        = 2,
	Add                            = 3,
	Multiply                       = 4,
	EPCGPointExtentsModifierMode_MAX = 5,
};

enum class EPCGPointTargetFilterType : uint8
{
	Property                       = 0,
	Metadata                       = 1,
	EPCGPointTargetFilterType_MAX  = 2,
};

enum class EPCGPointThresholdType : uint8
{
	Property                       = 0,
	Metadata                       = 1,
	Constant                       = 2,
	EPCGPointThresholdType_MAX     = 3,
};

enum class EPCGPointFilterConstantType : uint8
{
	Integer64                      = 0,
	Float                          = 1,
	Vector                         = 2,
	Vector4                        = 3,
	String                         = 4,
	Unknown                        = 5,
	EPCGPointFilterConstantType_MAX = 6,
};

enum class EPCGPointFilterOperator : uint8
{
	Greater                        = 0,
	GreaterOrEqual                 = 1,
	Lesser                         = 2,
	LesserOrEqual                  = 3,
	Equal                          = 4,
	NotEqual                       = 5,
	EPCGPointFilterOperator_MAX    = 6,
};

enum class EPCGSelfPruningType : uint8
{
	LargeToSmall                   = 0,
	SmallToLarge                   = 1,
	AllEqual                       = 2,
	None                           = 3,
	RemoveDuplicates               = 4,
	EPCGSelfPruningType_MAX        = 5,
};

enum class EPCGSpawnActorOption : uint8
{
	CollapseActors                 = 0,
	MergePCGOnly                   = 1,
	NoMerging                      = 2,
	EPCGSpawnActorOption_MAX       = 3,
};

enum class EPCGSpawnActorGenerationTrigger : uint8
{
	Default                        = 0,
	ForceGenerate                  = 1,
	DoNotGenerateInEditor          = 2,
	DoNotGenerate                  = 3,
	EPCGSpawnActorGenerationTrigger_MAX = 4,
};

enum class EPCGSplineSamplingMode : uint8
{
	Subdivision                    = 0,
	Distance                       = 1,
	EPCGSplineSamplingMode_MAX     = 2,
};

enum class EPCGSplineSamplingDimension : uint8
{
	OnSpline                       = 0,
	OnHorizontal                   = 1,
	OnVertical                     = 2,
	OnVolume                       = 3,
	OnInterior                     = 4,
	EPCGSplineSamplingDimension_MAX = 5,
};

enum class EPCGSplineSamplingFill : uint8
{
	Fill                           = 0,
	EdgesOnly                      = 1,
	EPCGSplineSamplingFill_MAX     = 2,
};

enum class EPCGSplineSamplingInteriorOrientation : uint8
{
	Uniform                        = 0,
	FollowCurvature                = 1,
	EPCGSplineSamplingInteriorOrientation_MAX = 2,
};

enum class EPCGMeshSelectorMaterialOverrideMode : uint8
{
	NoOverride                     = 0,
	StaticOverride                 = 1,
	ByAttributeOverride            = 2,
	EPCGMeshSelectorMaterialOverrideMode_MAX = 3,
};

enum class EPCGComponentInput : uint8
{
	Actor                          = 0,
	Landscape                      = 1,
	Other                          = 2,
	EPCGComponentInput_MAX         = 3,
};

enum class EPCGComponentGenerationTrigger : uint8
{
	GenerateOnLoad                 = 0,
	GenerateOnDemand               = 1,
	EPCGComponentGenerationTrigger_MAX = 2,
};

enum class EPCGComponentDirtyFlag : uint8
{
	None                           = 0,
	Actor                          = 1,
	Landscape                      = 2,
	Input                          = 4,
	Data                           = 8,
	All                            = 15,
	EPCGComponentDirtyFlag_MAX     = 16,
};

enum class EPCGExecutionPhase : uint8
{
	NotExecuted                    = 0,
	PrepareData                    = 1,
	Execute                        = 2,
	PostExecute                    = 3,
	Done                           = 4,
	EPCGExecutionPhase_MAX         = 5,
};

enum class EPCGDebugVisScaleMethod : uint8
{
	Relative                       = 0,
	Absolute                       = 1,
	Extents                        = 2,
	EPCGDebugVisScaleMethod_MAX    = 3,
};

enum class EPCGPointProperties : uint8
{
	Density                        = 0,
	BoundsMin                      = 1,
	BoundsMax                      = 2,
	Extents                        = 3,
	Color                          = 4,
	Position                       = 5,
	Rotation                       = 6,
	Scale                          = 7,
	Transform                      = 8,
	Steepness                      = 9,
	LocalCenter                    = 10,
	EPCGPointProperties_MAX        = 11,
};

enum class EPCGSettingsExecutionMode : uint8
{
	Enabled                        = 0,
	Debug                          = 1,
	Isolated                       = 2,
	Disabled                       = 3,
	EPCGSettingsExecutionMode_MAX  = 4,
};

enum class EPCGSettingsType : uint8
{
	InputOutput                    = 0,
	Spatial                        = 1,
	Density                        = 2,
	Blueprint                      = 3,
	Metadata                       = 4,
	Filter                         = 5,
	Sampler                        = 6,
	Spawner                        = 7,
	Subgraph                       = 8,
	Debug                          = 9,
	Generic                        = 10,
	Param                          = 11,
	EPCGSettingsType_MAX           = 12,
};

enum class EDeterminismLevel : uint8
{
	None                           = 0,
	NoDeterminism                  = 0,
	Basic                          = 1,
	OrderOrthogonal                = 2,
	OrderConsistent                = 3,
	OrderIndependent               = 4,
	Deterministic                  = 4,
	EDeterminismLevel_MAX          = 5,
};

enum class EPCGUnitTestDummyEnum : int64
{
	One                            = 0,
	Two                            = 1,
	Three                          = 2,
	EPCGUnitTestDummyEnum_MAX      = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct PCG.PCGAttributeExtractorTestStructDepth2
struct FPCGAttributeExtractorTestStructDepth2
{
public:
	int32                                        IntValue;                                          // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct PCG.PCGAttributeExtractorTestStructDepth1
struct FPCGAttributeExtractorTestStructDepth1
{
public:
	struct FPCGAttributeExtractorTestStructDepth2 Depth2Struct;                                      // 0x0(0x4)(Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        FloatValue;                                        // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct PCG.PCGAttributeExtractorTestStruct
struct FPCGAttributeExtractorTestStruct
{
public:
	struct FPCGAttributeExtractorTestStructDepth1 DepthStruct;                                       // 0x0(0x8)(ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UPCGAttributeExtractorTestObject*      Object;                                            // 0x8(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct PCG.PCGAttributePropertySelector
struct FPCGAttributePropertySelector
{
public:
	enum class EPCGAttributePropertySelection    Selection;                                         // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  AttributeName;                                     // 0x4(0x8)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EPCGPointProperties               PointProperty;                                     // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DD6[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        ExtraNames;                                        // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct PCG.PCGCrc
struct FPCGCrc
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	bool                                         bValid;                                            // 0x4(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_DDA[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct PCG.PCGDataTableRowToParamDataTestStruct
struct FPCGDataTableRowToParamDataTestStruct
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	class FString                                String;                                            // 0x8(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        I32;                                               // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DDC[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	int64                                        I64;                                               // 0x20(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        F32;                                               // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DE8[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	double                                       F64;                                               // 0x30(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             V2;                                                // 0x38(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FVector                               V3;                                                // 0x48(0x18)(ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector4                              V4;                                                // 0x60(0x20)(ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSoftObjectPath                       SoftPath;                                          // 0x80(0x20)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct PCG.PCGDeterminismSettings
struct FPCGDeterminismSettings
{
public:
	bool                                         bNativeTests;                                      // 0x0(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseBlueprintDeterminismTest;                      // 0x1(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DEE[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UClass*                                DeterminismTestBlueprint;                          // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x170 (0x170 - 0x0)
// ScriptStruct PCG.PCGMetadataTypesConstantStruct
struct FPCGMetadataTypesConstantStruct
{
public:
	enum class EPCGMetadataTypes                 Type;                                              // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
	uint8                                        Pad_DF9[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class EPCGMetadataTypesConstantStructStringMode StringMode;                                        // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        FloatValue;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        Int32Value;                                        // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       DoubleValue;                                       // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int64                                        IntValue;                                          // 0x18(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector2D                             Vector2Value;                                      // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               VectorValue;                                       // 0x30(0x18)(EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E07[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              Vector4Value;                                      // 0x50(0x20)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FQuat                                 QuatValue;                                         // 0x70(0x20)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            TransformValue;                                    // 0x90(0x60)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                StringValue;                                       // 0xF0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	bool                                         BoolValue;                                         // 0x100(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E0B[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              RotatorValue;                                      // 0x108(0x18)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  NameValue;                                         // 0x120(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSoftClassPath                        SoftClassPathValue;                                // 0x128(0x20)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FSoftObjectPath                       SoftObjectPathValue;                               // 0x148(0x20)(Edit, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowsTypeChange;                                 // 0x168(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E0E[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct PCG.PCGProjectionParams
struct FPCGProjectionParams
{
public:
	bool                                         bProjectPositions;                                 // 0x0(0x1)(ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bProjectRotations;                                 // 0x1(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bProjectScales;                                    // 0x2(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bProjectColors;                                    // 0x3(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E16[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                AttributeList;                                     // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EPCGMetadataFilterMode            AttributeMode;                                     // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EPCGMetadataOp                    AttributeMergeOperation;                           // 0x19(0x1)(Edit, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E1B[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x98 (0x98 - 0x0)
// ScriptStruct PCG.PCGContext
struct FPCGContext
{
public:
	uint8                                        Pad_E1E[0x98];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1A8 (0x240 - 0x98)
// ScriptStruct PCG.PCGStaticMeshSpawnerContext
struct FPCGStaticMeshSpawnerContext : public FPCGContext
{
public:
	uint8                                        Pad_E1F[0x1A8];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x160 (0x160 - 0x0)
// ScriptStruct PCG.PCGSplineStruct
struct FPCGSplineStruct
{
public:
	struct FSplineCurves                         SplineCurves;                                      // 0x0(0x70)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst)
	struct FTransform                            Transform;                                         // 0x70(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FVector                               DefaultUpVector;                                   // 0xD0(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ReparamStepsPerSegment;                            // 0xE8(0x4)(ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bClosedLoop;                                       // 0xEC(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E33[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FBoxSphereBounds                      LocalBounds;                                       // 0xF0(0x38)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	struct FBoxSphereBounds                      Bounds;                                            // 0x128(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct PCG.PCGWorldCommonQueryParams
struct FPCGWorldCommonQueryParams
{
public:
	bool                                         bIgnorePCGHits;                                    // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIgnoreSelfHits;                                   // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ECollisionChannel                 CollisionChannel;                                  // 0x2(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bTraceComplex;                                     // 0x3(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, EditConst, SubobjectReference)
	enum class EPCGWorldQueryFilterByTag         ActorTagFilter;                                    // 0x4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ActorTagsList;                                     // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIgnoreLandscapeHits;                              // 0x18(0x1)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E3B[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TSet<class FName>                            ParsedActorTagsList;                               // 0x20(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x78 - 0x70)
// ScriptStruct PCG.PCGWorldVolumetricQueryParams
struct FPCGWorldVolumetricQueryParams : public FPCGWorldCommonQueryParams
{
public:
	bool                                         bSearchForOverlap;                                 // 0x70(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E3D[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0xB8 - 0x70)
// ScriptStruct PCG.PCGWorldRayHitQueryParams
struct FPCGWorldRayHitQueryParams : public FPCGWorldCommonQueryParams
{
public:
	bool                                         bOverrideDefaultParams;                            // 0x70(0x1)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E41[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               RayOrigin;                                         // 0x78(0x18)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               RayDirection;                                      // 0x90(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       RayLength;                                         // 0xA8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bApplyMetadataFromLandscape;                       // 0xB0(0x1)(ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E43[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct PCG.PCGActorSelectorSettings
struct FPCGActorSelectorSettings
{
public:
	enum class EPCGActorFilter                   ActorFilter;                                       // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bMustOverlapSelf;                                  // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIncludeChildren;                                  // 0x2(0x1)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDisableFilter;                                    // 0x3(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EPCGActorSelection                ActorSelection;                                    // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E47[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  ActorSelectionTag;                                 // 0x8(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                ActorSelectionClass;                               // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSelectMultiple;                                   // 0x18(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E4A[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct PCG.PCGActorPropertyOverride
struct FPCGActorPropertyOverride
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x0(0x20)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                PropertyTarget;                                    // 0x20(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct PCG.PCGSplineSamplerParams
struct FPCGSplineSamplerParams
{
public:
	enum class EPCGSplineSamplingMode            Mode;                                              // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	enum class EPCGSplineSamplingDimension       Dimension;                                         // 0x1(0x1)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EPCGSplineSamplingFill            Fill;                                              // 0x2(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E52[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        SubdivisionsPerSegment;                            // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        DistanceIncrement;                                 // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumPlanarSubdivisions;                             // 0xC(0x4)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumHeightSubdivisions;                             // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bComputeDirectionDelta;                            // 0x14(0x1)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E56[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  NextDirectionDeltaAttribute;                       // 0x18(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bComputeCurvature;                                 // 0x20(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E62[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  CurvatureAttribute;                                // 0x24(0x8)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        InteriorSampleSpacing;                             // 0x2C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        InteriorBorderSampleSpacing;                       // 0x30(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bTreatSplineAsPolyline;                            // 0x34(0x1)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EPCGSplineSamplingInteriorOrientation InteriorOrientation;                               // 0x35(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bProjectOntoSurface;                               // 0x36(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EA8[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRuntimeFloatCurve                    InteriorDensityFalloffCurve;                       // 0x38(0x88)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSeedFromLocalPosition;                            // 0xC0(0x1)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSeedFrom2DPosition;                               // 0xC1(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EB1[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// ScriptStruct PCG.PCGStaticMeshSpawnerEntry
struct FPCGStaticMeshSpawnerEntry
{
public:
	int32                                        Weight;                                            // 0x0(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst)
	uint8                                        Pad_EB4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class UStaticMesh>            Mesh;                                              // 0x8(0x30)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOverrideCollisionProfile;                         // 0x38(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EB5[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCollisionProfileName                 CollisionProfile;                                  // 0x3C(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	uint8                                        Pad_EB6[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct PCG.PCGLandscapeLayerWeight
struct FPCGLandscapeLayerWeight
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	float                                        Weight;                                            // 0x8(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct PCG.PCGPackedCustomData
struct FPCGPackedCustomData
{
public:
	int32                                        NumCustomDataFloats;                               // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EBB[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                CustomData;                                        // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x2E0 (0x2E0 - 0x0)
// ScriptStruct PCG.PCGMatchAndSetByAttributeEntry
struct FPCGMatchAndSetByAttributeEntry
{
public:
	struct FPCGMetadataTypesConstantStruct       ValueToMatch;                                      // 0x0(0x170)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FPCGMetadataTypesConstantStruct       Value;                                             // 0x170(0x170)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x180 (0x180 - 0x0)
// ScriptStruct PCG.PCGMatchAndSetWeightedEntry
struct FPCGMatchAndSetWeightedEntry
{
public:
	struct FPCGMetadataTypesConstantStruct       Value;                                             // 0x0(0x170)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
	int32                                        Weight;                                            // 0x170(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst)
	uint8                                        Pad_EC4[0xC];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x190 (0x190 - 0x0)
// ScriptStruct PCG.PCGMatchAndSetWeightedByCategoryEntryList
struct FPCGMatchAndSetWeightedByCategoryEntryList
{
public:
	struct FPCGMetadataTypesConstantStruct       CategoryValue;                                     // 0x0(0x170)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsDefault;                                        // 0x170(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EC6[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPCGMatchAndSetWeightedEntry>  WeightedEntries;                                   // 0x178(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EC7[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x208 (0x208 - 0x0)
// ScriptStruct PCG.PCGMeshInstanceList
struct FPCGMeshInstanceList
{
public:
	struct FSoftISMComponentDescriptor           Descriptor;                                        // 0x0(0x1E8)(Edit, BlueprintVisible, ExportObject, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTransform>                    Instances;                                         // 0x1E8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TArray<int64>                                InstancesMetadataEntry;                            // 0x1F8(0x10)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1F0 (0x1F0 - 0x0)
// ScriptStruct PCG.PCGMeshSelectorWeightedEntry
struct FPCGMeshSelectorWeightedEntry
{
public:
	struct FSoftISMComponentDescriptor           Descriptor;                                        // 0x0(0x1E8)(Edit, BlueprintVisible, ExportObject, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Weight;                                            // 0x1E8(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, EditConst)
	uint8                                        Pad_ECA[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct PCG.PCGWeightedByCategoryEntryList
struct FPCGWeightedByCategoryEntryList
{
public:
	class FString                                CategoryEntry;                                     // 0x0(0x10)(BlueprintVisible, Net, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsDefault;                                         // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_ECE[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPCGMeshSelectorWeightedEntry> WeightedMeshEntries;                               // 0x18(0x10)(Edit, ConstParm, BlueprintReadOnly, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x80 - 0x68)
// ScriptStruct PCG.PCGComponentInstanceData
struct FPCGComponentInstanceData : public FActorComponentInstanceData
{
public:
	TArray<class UPCGManagedResource*>           GeneratedResources;                                // 0x68(0x10)(BlueprintVisible, ExportObject, Net, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UPCGComponent*                         SourceComponent;                                   // 0x78(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct PCG.PCGTaggedData
struct FPCGTaggedData
{
public:
	class UPCGData*                              Data;                                              // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TSet<class FString>                          Tags;                                              // 0x8(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config)
	class FName                                  Pin;                                               // 0x58(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPinlessData;                                      // 0x60(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_ED2[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct PCG.PCGDataCollection
struct FPCGDataCollection
{
public:
	TArray<struct FPCGTaggedData>                TaggedData;                                        // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCancelExecutionOnEmpty;                           // 0x10(0x1)(EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_ED5[0xF];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// ScriptStruct PCG.PCGDebugVisualizationSettings
struct FPCGDebugVisualizationSettings
{
public:
	float                                        PointScale;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EPCGDebugVisScaleMethod           ScaleMethod;                                       // 0x4(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EDA[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class UStaticMesh>            PointMesh;                                         // 0x8(0x30)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TSoftObjectPtr<class UMaterialInterface>     MaterialOverride;                                  // 0x38(0x30)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCheckForDuplicates;                               // 0x68(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EDB[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct PCG.PCGOverrideInstancedPropertyBag
struct FPCGOverrideInstancedPropertyBag
{
public:
	struct FInstancedPropertyBag                 Parameters;                                        // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TSet<struct FGuid>                           PropertiesIDsOverridden;                           // 0x10(0x50)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct PCG.PCGPinProperties
struct FPCGPinProperties
{
public:
	class FName                                  Label;                                             // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EPCGDataType                      AllowedTypes;                                      // 0x8(0x4)(ConstParm, BlueprintVisible, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowMultipleData;                                // 0xC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowMultipleConnections;                         // 0xD(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAdvancedPin;                                      // 0xE(0x1)(Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EE4[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct PCG.PCGPoint
struct FPCGPoint
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	float                                        Density;                                           // 0x60(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EE7[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               BoundsMin;                                         // 0x68(0x18)(Edit, BlueprintVisible, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               BoundsMax;                                         // 0x80(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EE8[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector4                              Color;                                             // 0xA0(0x20)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	float                                        Steepness;                                         // 0xC0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Seed;                                              // 0xC4(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	int64                                        MetadataEntry;                                     // 0xC8(0x8)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct PCG.PCGSettingsOverridableParam
struct FPCGSettingsOverridableParam
{
public:
	class FName                                  Label;                                             // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          PropertiesNames;                                   // 0x8(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UStruct*                               PropertyClass;                                     // 0x18(0x8)(BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EF0[0x10];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x88 (0x88 - 0x0)
// ScriptStruct PCG.DeterminismTestResult
struct FDeterminismTestResult
{
public:
	class FName                                  TestResultTitle;                                   // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                TestResultName;                                    // 0x8(0x10)(Edit, ConstParm, ExportObject, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Seed;                                              // 0x18(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	enum class EPCGDataType                      DataTypesTested;                                   // 0x1C(0x4)(ConstParm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FName, enum class EDeterminismLevel> TestResults;                                       // 0x20(0x50)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        AdditionalDetails;                                 // 0x70(0x10)(ExportObject, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFlagRaised;                                       // 0x80(0x1)(Edit, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_EF9[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

}


