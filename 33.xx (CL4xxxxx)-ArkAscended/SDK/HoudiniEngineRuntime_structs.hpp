#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EHoudiniStaticMeshMethod : uint8
{
	RawMesh                        = 0,
	FMeshDescription               = 1,
	UHoudiniStaticMesh             = 2,
	EHoudiniStaticMeshMethod_MAX   = 3,
};

enum class EHoudiniBakeAfterNextCook : uint8
{
	Disabled                       = 0,
	Always                         = 1,
	Once                           = 2,
	EHoudiniBakeAfterNextCook_MAX  = 3,
};

enum class EHoudiniAssetState : uint8
{
	NeedInstantiation              = 0,
	NewHDA                         = 1,
	PreInstantiation               = 2,
	Instantiating                  = 3,
	PreCook                        = 4,
	Cooking                        = 5,
	PostCook                       = 6,
	PreProcess                     = 7,
	Processing                     = 8,
	None                           = 9,
	NeedRebuild                    = 10,
	NeedDelete                     = 11,
	Deleting                       = 12,
	ProcessTemplate                = 13,
	EHoudiniAssetState_MAX         = 14,
};

enum class EHoudiniAssetStateResult : uint8
{
	None                           = 0,
	Working                        = 1,
	Success                        = 2,
	FinishedWithError              = 3,
	FinishedWithFatalError         = 4,
	Aborted                        = 5,
	EHoudiniAssetStateResult_MAX   = 6,
};

enum class EHoudiniEngineEditorSettingUseCustomLocation : uint8
{
	Project                        = 0,
	Disabled                       = 1,
	Enabled                        = 2,
	EHoudiniEngineEditorSettingUseCustomLocation_MAX = 3,
};

enum class EHoudiniRampInterpolationType : uint8
{
	InValid                        = -1,
	CONSTANT                       = 0,
	LINEAR                         = 1,
	CATMULL_ROM                    = 2,
	MONOTONE_CUBIC                 = 3,
	BEZIER                         = 4,
	BSPLINE                        = 5,
	HERMITE                        = 6,
	EHoudiniRampInterpolationType_MAX = 7,
};

enum class EHoudiniLandscapeOutputBakeType : uint8
{
	Detachment                     = 0,
	BakeToImage                    = 1,
	BakeToWorld                    = 2,
	InValid                        = 3,
	EHoudiniLandscapeOutputBakeType_MAX = 4,
};

enum class EHoudiniInputType : uint8
{
	Invalid                        = 0,
	Geometry                       = 1,
	Curve                          = 2,
	Asset_DEPRECATED               = 3,
	Landscape_DEPRECATED           = 4,
	World                          = 5,
	Skeletal_DEPRECATED            = 6,
	GeometryCollection_DEPRECATED  = 7,
	EHoudiniInputType_MAX          = 8,
};

enum class EHoudiniOutputType : uint8
{
	Invalid                        = 0,
	Mesh                           = 1,
	Instancer                      = 2,
	Landscape                      = 3,
	Curve                          = 4,
	Skeletal                       = 5,
	GeometryCollection             = 6,
	DataTable                      = 7,
	LandscapeSpline                = 8,
	AnimSequence                   = 9,
	EHoudiniOutputType_MAX         = 10,
};

enum class EHoudiniCurveType : uint8
{
	Invalid                        = -1,
	Polygon                        = 0,
	Nurbs                          = 1,
	Bezier                         = 2,
	Points                         = 3,
	EHoudiniCurveType_MAX          = 4,
};

enum class EHoudiniCurveMethod : uint8
{
	Invalid                        = -1,
	CVs                            = 0,
	Breakpoints                    = 1,
	Freehand                       = 2,
	EHoudiniCurveMethod_MAX        = 3,
};

enum class EHoudiniCurveBreakpointParameterization : uint8
{
	Invalid                        = -1,
	Uniform                        = 0,
	Chord                          = 1,
	Centripetal                    = 2,
	EHoudiniCurveBreakpointParameterization_MAX = 3,
};

enum class EHoudiniLandscapeExportType : uint8
{
	Heightfield                    = 0,
	Mesh                           = 1,
	Points                         = 2,
	EHoudiniLandscapeExportType_MAX = 3,
};

enum class EHoudiniProxyRefineResult : uint8
{
	Invalid                        = 0,
	Failed                         = 1,
	Success                        = 2,
	Skipped                        = 3,
	EHoudiniProxyRefineResult_MAX  = 4,
};

enum class EHoudiniProxyRefineRequestResult : uint8
{
	Invalid                        = 0,
	None                           = 1,
	PendingCooks                   = 2,
	Refined                        = 3,
	EHoudiniProxyRefineRequestResult_MAX = 4,
};

enum class EAttribStorageType : uint8
{
	Invalid                        = -1,
	INT                            = 0,
	INT64                          = 1,
	FLOAT                          = 2,
	FLOAT64                        = 3,
	STRING                         = 4,
	EAttribStorageType_MAX         = 5,
};

enum class EAttribOwner : uint8
{
	Invalid                        = -1,
	Vertex                         = 0,
	Point                          = 1,
	Prim                           = 2,
	Detail                         = 3,
	EAttribOwner_MAX               = 4,
};

enum class EHoudiniGeoType : uint8
{
	Invalid                        = 0,
	Default                        = 1,
	Intermediate                   = 2,
	Input                          = 3,
	Curve                          = 4,
	EHoudiniGeoType_MAX            = 5,
};

enum class EHoudiniPartType : uint8
{
	Invalid                        = 0,
	Mesh                           = 1,
	Instancer                      = 2,
	Curve                          = 3,
	Volume                         = 4,
	DataTable                      = 5,
	LandscapeSpline                = 6,
	SkeletalMesh                   = 7,
	MotionClip                     = 8,
	EHoudiniPartType_MAX           = 9,
};

enum class EHoudiniInstancerType : uint8
{
	Invalid                        = 0,
	ObjectInstancer                = 1,
	PackedPrimitive                = 2,
	AttributeInstancer             = 3,
	OldSchoolAttributeInstancer    = 4,
	GeometryCollection             = 5,
	SkeletalMesh                   = 6,
	MotionClip                     = 7,
	EHoudiniInstancerType_MAX      = 8,
};

enum class EXformParameter : uint8
{
	TX                             = 0,
	TY                             = 1,
	TZ                             = 2,
	RX                             = 3,
	RY                             = 4,
	RZ                             = 5,
	SX                             = 6,
	SY                             = 7,
	SZ                             = 8,
	COUNT                          = 9,
	EXformParameter_MAX            = 10,
};

enum class EHoudiniHandleType : uint8
{
	Xform                          = 0,
	Bounder                        = 1,
	Unsupported                    = 2,
	EHoudiniHandleType_MAX         = 3,
};

enum class EHoudiniInputObjectType : uint8
{
	Invalid                        = 0,
	Object                         = 1,
	StaticMesh                     = 2,
	SkeletalMesh                   = 3,
	SceneComponent                 = 4,
	StaticMeshComponent            = 5,
	InstancedStaticMeshComponent   = 6,
	SplineComponent                = 7,
	HoudiniSplineComponent         = 8,
	HoudiniAssetComponent          = 9,
	Actor                          = 10,
	Landscape                      = 11,
	Brush                          = 12,
	CameraComponent                = 13,
	DataTable                      = 14,
	HoudiniAssetActor              = 15,
	FoliageType_InstancedStaticMesh = 16,
	GeometryCollection             = 17,
	GeometryCollectionComponent    = 18,
	GeometryCollectionActor_Deprecated = 19,
	SkeletalMeshComponent          = 20,
	LandscapeSplineActor           = 21,
	LandscapeSplinesComponent      = 22,
	Blueprint                      = 23,
	Animation                      = 24,
	SplineMeshComponent            = 25,
	LevelInstance                  = 26,
	PackedLevelActor               = 27,
	EHoudiniInputObjectType_MAX    = 28,
};

enum class EHoudiniXformType : uint8
{
	None                           = 0,
	IntoThisObject                 = 1,
	Auto                           = 2,
	EHoudiniXformType_MAX          = 3,
};

enum class EHoudiniCurveOutputType : uint8
{
	UnrealSpline                   = 0,
	HoudiniSpline                  = 1,
	EHoudiniCurveOutputType_MAX    = 2,
};

enum class EHoudiniParameterType : uint8
{
	Invalid                        = 0,
	Button                         = 1,
	ButtonStrip                    = 2,
	Color                          = 3,
	ColorRamp                      = 4,
	File                           = 5,
	FileDir                        = 6,
	FileGeo                        = 7,
	FileImage                      = 8,
	Float                          = 9,
	FloatRamp                      = 10,
	Folder                         = 11,
	FolderList                     = 12,
	Input                          = 13,
	Int                            = 14,
	IntChoice                      = 15,
	Label                          = 16,
	MultiParm                      = 17,
	Separator                      = 18,
	String                         = 19,
	StringChoice                   = 20,
	StringAssetRef                 = 21,
	Toggle                         = 22,
	EHoudiniParameterType_MAX      = 23,
};

enum class EHoudiniFolderParameterType : uint8
{
	Invalid                        = 0,
	Collapsible                    = 1,
	Simple                         = 2,
	Tabs                           = 3,
	Radio                          = 4,
	Other                          = 5,
	EHoudiniFolderParameterType_MAX = 6,
};

enum class EHoudiniMultiParmModificationType : uint8
{
	None                           = 0,
	Inserted                       = 1,
	Removed                        = 2,
	Modified                       = 3,
	EHoudiniMultiParmModificationType_MAX = 4,
};

enum class EHoudiniRampPointConstructStatus : uint8
{
	None                           = 0,
	INITIALIZED                    = 1,
	POSITION_INSERTED              = 2,
	VALUE_INSERTED                 = 3,
	INTERPTYPE_INSERTED            = 4,
	EHoudiniRampPointConstructStatus_MAX = 5,
};

enum class EPDGLinkState : uint8
{
	Inactive                       = 0,
	Linking                        = 1,
	Linked                         = 2,
	Error_Not_Linked               = 3,
	EPDGLinkState_MAX              = 4,
};

enum class EPDGNodeState : uint8
{
	None                           = 0,
	Dirtied                        = 1,
	Dirtying                       = 2,
	Cooking                        = 3,
	Cook_Complete                  = 4,
	Cook_Failed                    = 5,
	EPDGNodeState_MAX              = 6,
};

enum class EPDGWorkResultState : uint8
{
	None                           = 0,
	ToLoad                         = 1,
	Loading                        = 2,
	Loaded                         = 3,
	ToDelete                       = 4,
	Deleting                       = 5,
	Deleted                        = 6,
	NotLoaded                      = 7,
	EPDGWorkResultState_MAX        = 8,
};

enum class EHoudiniRuntimeSettingsSessionType : uint8
{
	HRSST_InProcess                = 0,
	HRSST_Socket                   = 1,
	HRSST_NamedPipe                = 2,
	HRSST_None                     = 3,
	HRSST_MAX                      = 4,
};

enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8
{
	HRSRF_Always                   = 0,
	HRSRF_OnlyIfMissing            = 1,
	HRSRF_Never                    = 2,
	HRSRF_MAX                      = 3,
};

enum class EHoudiniExecutableType : uint8
{
	HRSHE_Houdini                  = 0,
	HRSHE_HoudiniFX                = 1,
	HRSHE_HoudiniCore              = 2,
	HRSHE_HoudiniIndie             = 3,
	HRSHE_MAX                      = 4,
};

enum class EHoudiniToolType : uint8
{
	HTOOLTYPE_GENERATOR            = 0,
	HTOOLTYPE_OPERATOR_SINGLE      = 1,
	HTOOLTYPE_OPERATOR_MULTI       = 2,
	HTOOLTYPE_OPERATOR_BATCH       = 3,
	HTOOLTYPE_MAX                  = 4,
};

enum class EHoudiniToolSelectionType : uint8
{
	HTOOL_SELECTION_ALL            = 0,
	HTOOL_SELECTION_WORLD_ONLY     = 1,
	HTOOL_SELECTION_CB_ONLY        = 2,
	HTOOL_SELECTION_MAX            = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniCurveOutputProperties
struct FHoudiniCurveOutputProperties
{
public:
	enum class EHoudiniCurveOutputType           CurveOutputType;                                   // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C49[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        NumPoints;                                         // 0x4(0x4)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bClosed;                                           // 0x8(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EHoudiniCurveType                 CurveType;                                         // 0x9(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EHoudiniCurveMethod               CurveMethod;                                       // 0xA(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C4A[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniDataLayer
struct FHoudiniDataLayer
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	bool                                         bCreateIfNeeded;                                   // 0x10(0x1)(ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C4B[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniHLODLayer
struct FHoudiniHLODLayer
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniLevelInstanceParams
struct FHoudiniLevelInstanceParams
{
public:
	enum class ELevelInstanceCreationType        Type;                                              // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
	uint8                                        Pad_C52[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                OutputName;                                        // 0x8(0x10)(ConstParm, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x168 (0x168 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniOutputObject
struct FHoudiniOutputObject
{
public:
	class UObject*                               OutputObject;                                      // 0x0(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UObject*>                       OutputComponents;                                  // 0x8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<TSoftObjectPtr<class AActor>>         OutputActors;                                      // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               OutputComponent;                                   // 0x28(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               ProxyObject;                                       // 0x30(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               ProxyComponent;                                    // 0x38(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bProxyIsCurrent;                                   // 0x40(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsImplicit;                                       // 0x41(0x1)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsGeometryCollectionPiece;                        // 0x42(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C58[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                GeometryCollectionPieceName;                       // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                BakeName;                                          // 0x58(0x10)(ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FHoudiniCurveOutputProperties         CurveOutputProperty;                               // 0x68(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C5A[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TMap<class FString, class FString>           CachedAttributes;                                  // 0x78(0x50)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FString, class FString>           CachedTokens;                                      // 0xC8(0x50)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               UserFoliageType;                                   // 0x118(0x8)(Edit, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UFoliageType*                          FoliageType;                                       // 0x120(0x8)(Edit, ConstParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UWorld*                                World;                                             // 0x128(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance)
	TArray<struct FHoudiniDataLayer>             DataLayers;                                        // 0x130(0x10)(ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FHoudiniHLODLayer>             HLODLayers;                                        // 0x140(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FHoudiniLevelInstanceParams           LevelInstanceParams;                               // 0x150(0x18)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x170 (0x170 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniAssetBlueprintOutput
struct FHoudiniAssetBlueprintOutput
{
public:
	int32                                        OutputIndex;                                       // 0x0(0x4)(Edit, Net, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C5D[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FHoudiniOutputObject                  OutputObject;                                      // 0x8(0x168)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniOutputObjectIdentifier
struct FHoudiniOutputObjectIdentifier
{
public:
	int32                                        ObjectID;                                          // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, GlobalConfig, DuplicateTransient)
	int32                                        GeoId;                                             // 0x4(0x4)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PartId;                                            // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C5E[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                SplitIdentifier;                                   // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                PartName;                                          // 0x20(0x10)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PrimitiveIndex;                                    // 0x30(0x4)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PointIndex;                                        // 0x34(0x4)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C5F[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xB8 (0x120 - 0x68)
// ScriptStruct HoudiniEngineRuntime.HoudiniAssetBlueprintInstanceData
struct FHoudiniAssetBlueprintInstanceData : public FActorComponentInstanceData
{
public:
	class UHoudiniAsset*                         HoudiniAsset;                                      // 0x68(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	int32                                        AssetId;                                           // 0x70(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EHoudiniAssetState                AssetState;                                        // 0x74(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C60[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       SubAssetIndex;                                     // 0x78(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       AssetCookCount;                                    // 0x7C(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasBeenLoaded;                                    // 0x80(0x1)(EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasBeenDuplicated;                                // 0x81(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPendingDelete;                                    // 0x82(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRecookRequested;                                  // 0x83(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRebuildRequested;                                 // 0x84(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableCooking;                                    // 0x85(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         bForceNeedUpdate;                                  // 0x86(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLastCookSuccess;                                  // 0x87(0x1)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 ComponentGUID;                                     // 0x88(0x10)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 HapiGUID;                                          // 0x98(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRegisteredComponentTemplate;                      // 0xA8(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C65[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                SourceName;                                        // 0xB0(0x10)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniAssetBlueprintOutput> Outputs;                                           // 0xC0(0x50)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UHoudiniInput*>                 Inputs;                                            // 0x110(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct HoudiniEngineRuntime.UserPackageRules
struct FUserPackageRules
{
public:
	class UHoudiniToolsPackageAsset*             ToolsPackageAsset;                                 // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        Include;                                           // 0x8(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        Exclude;                                           // 0x18(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HoudiniEngineRuntime.UserCategoryRules
struct FUserCategoryRules
{
public:
	TArray<struct FUserPackageRules>             Packages;                                          // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniGenericAttributeChangedProperty
struct FHoudiniGenericAttributeChangedProperty
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	uint8                                        Pad_C70[0x90];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniGenericAttribute
struct FHoudiniGenericAttribute
{
public:
	class FString                                AttributeName;                                     // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EAttribStorageType                AttributeType;                                     // 0x10(0x1)(ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EAttribOwner                      AttributeOwner;                                    // 0x11(0x1)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C73[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        AttributeCount;                                    // 0x14(0x4)(ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        AttributeTupleSize;                                // 0x18(0x4)(BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C74[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<double>                               DoubleValues;                                      // 0x20(0x10)(Edit, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<int64>                                IntValues;                                         // 0x30(0x10)(Edit, ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        StringValues;                                      // 0x40(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniObjectInfo
struct FHoudiniObjectInfo
{
public:
	uint8                                        Pad_C7A[0x28];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniGeoInfo
struct FHoudiniGeoInfo
{
public:
	uint8                                        Pad_C7B[0x30];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniPartInfo
struct FHoudiniPartInfo
{
public:
	uint8                                        Pad_C7C[0x48];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniVolumeInfo
struct FHoudiniVolumeInfo
{
public:
	uint8                                        Pad_C7D[0xB0];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1C (0x1C - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniCurveInfo
struct FHoudiniCurveInfo
{
public:
	uint8                                        Pad_C7E[0x1C];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x90 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniMeshSocket
struct FHoudiniMeshSocket
{
public:
	uint8                                        Pad_C7F[0x90];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x2B0 (0x2B0 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniGeoPartObject
struct FHoudiniGeoPartObject
{
public:
	int32                                        AssetId;                                           // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C83[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                AssetName;                                         // 0x8(0x10)(BlueprintReadOnly, Net, Parm, Transient, EditConst, SubobjectReference)
	int32                                        ObjectID;                                          // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, GlobalConfig, DuplicateTransient)
	uint8                                        Pad_C85[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ObjectName;                                        // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        GeoId;                                             // 0x30(0x4)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PartId;                                            // 0x34(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                PartName;                                          // 0x38(0x10)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasCustomPartName;                                // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C88[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        SplitGroups;                                       // 0x50(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            TransformMatrix;                                   // 0x60(0x60)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                NodePath;                                          // 0xC0(0x10)(EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EHoudiniPartType                  Type;                                              // 0xD0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
	enum class EHoudiniInstancerType             InstancerType;                                     // 0xD1(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C8E[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                VolumeName;                                        // 0xD8(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasEditLayers;                                    // 0xE8(0x1)(ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C90[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                VolumeLayerName;                                   // 0xF0(0x10)(Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        VolumeTileIndex;                                   // 0x100(0x4)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsVisible;                                        // 0x104(0x1)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsEditable;                                       // 0x105(0x1)(Edit, ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsTemplated;                                      // 0x106(0x1)(BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsInstanced;                                      // 0x107(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasGeoChanged;                                    // 0x108(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasPartChanged;                                   // 0x109(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasTransformChanged;                              // 0x10A(0x1)(Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasMaterialsChanged;                              // 0x10B(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C93[0x174];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<struct FHoudiniMeshSocket>            AllMeshSockets;                                    // 0x280(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FHoudiniGenericAttribute>      GenericPropertyAttributes;                         // 0x290(0x10)(EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bKeepTags;                                         // 0x2A0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C94[0xF];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniBrushInfo
struct FHoudiniBrushInfo
{
public:
	TWeakObjectPtr<class ABrush>                 BrushActor;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C98[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            CachedTransform;                                   // 0x10(0x60)(ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               CachedOrigin;                                      // 0x70(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               CachedExtent;                                      // 0x88(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EBrushType                        CachedBrushType;                                   // 0xA0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C9A[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	uint64                                       CachedSurfaceHash;                                 // 0xA8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniLandscapeSplineControlPointData
struct FHoudiniLandscapeSplineControlPointData
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FRotator                              Rotation;                                          // 0x18(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        Width;                                             // 0x30(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	uint8                                        Pad_CA0[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniLandscapeSplineSegmentData
struct FHoudiniLandscapeSplineSegmentData
{
public:
	uint8                                        Pad_CA1[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniInputObjectSettings
struct FHoudiniInputObjectSettings
{
public:
	enum class EHoudiniXformType                 KeepWorldTransform;                                // 0x0(0x1)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bImportAsReference;                                // 0x1(0x1)(Edit, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bImportAsReferenceRotScaleEnabled;                 // 0x2(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bImportAsReferenceBboxEnabled;                     // 0x3(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bImportAsReferenceMaterialEnabled;                 // 0x4(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bExportLODs;                                       // 0x5(0x1)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bExportSockets;                                    // 0x6(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPreferNaniteFallbackMesh;                         // 0x7(0x1)(BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bExportColliders;                                  // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bExportMaterialParameters;                         // 0x9(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAddRotAndScaleAttributesOnCurves;                 // 0xA(0x1)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseLegacyInputCurves;                             // 0xB(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        UnrealSplineResolution;                            // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EHoudiniLandscapeExportType       LandscapeExportType;                               // 0x10(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLandscapeExportSelectionOnly;                     // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLandscapeAutoSelectComponent;                     // 0x12(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLandscapeExportMaterials;                         // 0x13(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLandscapeExportLighting;                          // 0x14(0x1)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLandscapeExportNormalizedUVs;                     // 0x15(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLandscapeExportTileUVs;                           // 0x16(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLandscapeAutoSelectSplines;                       // 0x17(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLandscapeSplinesExportControlPoints;              // 0x18(0x1)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLandscapeSplinesExportLeftRightCurves;            // 0x19(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLandscapeSplinesExportSplineMeshComponents;       // 0x1A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bMergeSplineMeshComponents;                        // 0x1B(0x1)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bExportPerEditLayerData;                           // 0x1C(0x1)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bExportLevelInstanceContent;                       // 0x1D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CB1[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniExtents
struct FHoudiniExtents
{
public:
	struct FIntPoint                             Min;                                               // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FIntPoint                             Max;                                               // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniClearedTargetLayer
struct FHoudiniClearedTargetLayer
{
public:
	TSet<class FString>                          TargetLayers;                                      // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniClearedEditLayers
struct FHoudiniClearedEditLayers
{
public:
	TMap<class FString, struct FHoudiniClearedTargetLayer> EditLayers;                                        // 0x0(0x50)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniMaterialIdentifier
struct FHoudiniMaterialIdentifier
{
public:
	uint8                                        Pad_CB6[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                MaterialObjectPath;                                // 0x8(0x10)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsHoudiniMaterial;                                // 0x18(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bMakeMaterialInstance;                             // 0x19(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CB9[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                MaterialInstanceParametersSlug;                    // 0x20(0x10)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutputObjectIdentifier
struct FHoudiniBakedOutputObjectIdentifier
{
public:
	int32                                        PartId;                                            // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CBA[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                SplitIdentifier;                                   // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniInstancedOutput
struct FHoudiniInstancedOutput
{
public:
	TSoftObjectPtr<class UObject>                OriginalObject;                                    // 0x0(0x30)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        OriginalObjectIndex;                               // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CBC[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTransform>                    OriginalTransforms;                                // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<TSoftObjectPtr<class UObject>>        VariationObjects;                                  // 0x48(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTransform>                    VariationTransformOffsets;                         // 0x58(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                TransformVariationIndices;                         // 0x68(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                OriginalInstanceIndices;                           // 0x78(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bChanged;                                          // 0x88(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bStale;                                            // 0x89(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CBE[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutputObject
struct FHoudiniBakedOutputObject
{
public:
	class FString                                Actor;                                             // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class FString                                Blueprint;                                         // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, GlobalConfig, InstancedReference, DuplicateTransient)
	class FName                                  ActorBakeName;                                     // 0x20(0x8)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                BakedObject;                                       // 0x28(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                BakedComponent;                                    // 0x38(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        InstancedActors;                                   // 0x48(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        InstancedComponents;                               // 0x58(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FName, class FString>             LandscapeLayers;                                   // 0x68(0x50)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       FoliageInstancePositions;                          // 0xB8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UFoliageType*                          FoliageType;                                       // 0xC8(0x8)(Edit, ConstParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	TArray<class FString>                        LevelInstanceActors;                               // 0xD0(0x10)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Landscape;                                         // 0xE0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutput
struct FHoudiniBakedOutput
{
public:
	TMap<struct FHoudiniBakedOutputObjectIdentifier, struct FHoudiniBakedOutputObject> BakedOutputObjects;                                // 0x0(0x50)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HoudiniEngineRuntime.OutputActorOwner
struct FOutputActorOwner
{
public:
	uint8                                        Pad_CC6[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class AActor*                                OutputActor;                                       // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct HoudiniEngineRuntime.TOPWorkResultObject
struct FTOPWorkResultObject
{
public:
	uint8                                        Pad_CC8[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Name;                                              // 0x8(0x10)(ConstParm, Net, OutParm)
	class FString                                FilePath;                                          // 0x18(0x10)(Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	enum class EPDGWorkResultState               State;                                             // 0x28(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
	uint8                                        Pad_CCA[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        WorkItemResultInfoIndex;                           // 0x2C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UHoudiniOutput*>                ResultOutputs;                                     // 0x30(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAutoBakedSinceLastLoad;                           // 0x40(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CCC[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FOutputActorOwner                     OutputActorOwner;                                  // 0x48(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct HoudiniEngineRuntime.TOPWorkResult
struct FTOPWorkResult
{
public:
	int32                                        WorkItemIndex;                                     // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        WorkItemID;                                        // 0x4(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTOPWorkResultObject>          ResultObjects;                                     // 0x8(0x10)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct HoudiniEngineRuntime.WorkItemTallyBase
struct FWorkItemTallyBase
{
public:
	uint8                                        Pad_CCE[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x230 (0x238 - 0x8)
// ScriptStruct HoudiniEngineRuntime.WorkItemTally
struct FWorkItemTally : public FWorkItemTallyBase
{
public:
	TSet<int32>                                  AllWorkItems;                                      // 0x8(0x50)(ExportObject, BlueprintReadOnly, EditConst, GlobalConfig, SubobjectReference)
	TSet<int32>                                  WaitingWorkItems;                                  // 0x58(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditConst, GlobalConfig, SubobjectReference)
	TSet<int32>                                  ScheduledWorkItems;                                // 0xA8(0x50)(Edit, BlueprintVisible, EditConst, GlobalConfig, SubobjectReference)
	TSet<int32>                                  CookingWorkItems;                                  // 0xF8(0x50)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TSet<int32>                                  CookedWorkItems;                                   // 0x148(0x50)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TSet<int32>                                  ErroredWorkItems;                                  // 0x198(0x50)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TSet<int32>                                  CookCancelledWorkItems;                            // 0x1E8(0x50)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct HoudiniEngineRuntime.AggregatedWorkItemTally
struct FAggregatedWorkItemTally : public FWorkItemTallyBase
{
public:
	int32                                        TotalWorkItems;                                    // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditConst, GlobalConfig, SubobjectReference)
	int32                                        WaitingWorkItems;                                  // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ScheduledWorkItems;                                // 0x10(0x4)(Edit, BlueprintVisible, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CookingWorkItems;                                  // 0x14(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CookedWorkItems;                                   // 0x18(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ErroredWorkItems;                                  // 0x1C(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CookCancelledWorkItems;                            // 0x20(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CD8[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniPDGWorkResultObjectBakedOutput
struct FHoudiniPDGWorkResultObjectBakedOutput
{
public:
	TArray<struct FHoudiniBakedOutput>           BakedOutputs;                                      // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1A0 (0x1A0 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniStaticMeshGenerationProperties
struct FHoudiniStaticMeshGenerationProperties
{
public:
	uint8                                        bGeneratedDoubleSidedGeometry : 1;                 // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, ExportObject, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_90 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_CDC[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class UPhysicalMaterial*                     GeneratedPhysMaterial;                             // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, EditConst, GlobalConfig, SubobjectReference)
	struct FBodyInstance                         DefaultBodyInstance;                               // 0x10(0x150)(ConstParm, BlueprintReadOnly, Net, Parm, EditConst, GlobalConfig, SubobjectReference)
	enum class ECollisionTraceFlag               GeneratedCollisionTraceFlag;                       // 0x160(0x1)(Edit, ConstParm, Net, Parm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CDD[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        GeneratedLightMapResolution;                       // 0x164(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, EditConst, GlobalConfig, SubobjectReference)
	struct FWalkableSlopeOverride                GeneratedWalkableSlopeOverride;                    // 0x168(0x10)(BlueprintVisible, Parm, EditConst, GlobalConfig, SubobjectReference)
	int32                                        GeneratedLightMapCoordinateIndex;                  // 0x178(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bGeneratedUseMaximumStreamingTexelRatio : 1;       // Mask: 0x1, PropSize: 0x10x17C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_91 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_CDF[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        GeneratedStreamingDistanceMultiplier;              // 0x180(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CE0[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UFoliageType_InstancedStaticMesh*      GeneratedFoliageDefaultSettings;                   // 0x188(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UAssetUserData*>                GeneratedAssetUserData;                            // 0x190(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x98 - 0x68)
// ScriptStruct HoudiniEngineRuntime.HoudiniSplineComponentInstanceData
struct FHoudiniSplineComponentInstanceData : public FActorComponentInstanceData
{
public:
	TArray<struct FTransform>                    CurvePoints;                                       // 0x68(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       DisplayPoints;                                     // 0x78(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                DisplayPointIndexDivider;                          // 0x88(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HImageData
struct FHImageData
{
public:
	int32                                        SizeX;                                             // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, InstancedReference)
	int32                                        SizeY;                                             // 0x4(0x4)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, DuplicateTransient)
	int32                                        NumSlices;                                         // 0x8(0x4)(ConstParm, BlueprintVisible, OutParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Format;                                            // 0xC(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	uint8                                        GammaSpace;                                        // 0xD(0x1)(OutParm, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CE4[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                RawData;                                           // 0x10(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
	class FString                                RawDataMD5;                                        // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct HoudiniEngineRuntime.CategoryRules
struct FCategoryRules
{
public:
	TArray<class FString>                        Include;                                           // 0x0(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        Exclude;                                           // 0x10(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

}


