#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ENiagaraSimCacheAttributeCaptureMode : uint8
{
	All                            = 0,
	RenderingOnly                  = 1,
	ExplicitAttributes             = 2,
	ENiagaraSimCacheAttributeCaptureMode_MAX = 3,
};

enum class ENiagaraCollisionMode : uint8
{
	None                           = 0,
	SceneGeometry                  = 1,
	DepthBuffer                    = 2,
	DistanceField                  = 3,
	ENiagaraCollisionMode_MAX      = 4,
};

enum class ENiagaraBaseTypes : uint8
{
	Half                           = 0,
	Float                          = 1,
	Int32                          = 2,
	Bool                           = 3,
	Max                            = 4,
};

enum class ENiagaraGpuBufferFormat : uint8
{
	Float                          = 0,
	HalfFloat                      = 1,
	UnsignedNormalizedByte         = 2,
	Max                            = 3,
};

enum class ENiagaraGpuSyncMode : int32
{
	None                           = 0,
	SyncCpuToGpu                   = 1,
	SyncGpuToCpu                   = 2,
	SyncBoth                       = 3,
	ENiagaraGpuSyncMode_MAX        = 4,
};

enum class ENiagaraMipMapGeneration : uint8
{
	Disabled                       = 0,
	PostStage                      = 1,
	PostSimulate                   = 2,
	ENiagaraMipMapGeneration_MAX   = 3,
};

enum class ENiagaraDefaultMode : uint8
{
	Value                          = 0,
	Binding                        = 1,
	Custom                         = 2,
	FailIfPreviouslyNotSet         = 3,
	ENiagaraDefaultMode_MAX        = 4,
};

enum class ENiagaraDefaultRendererMotionVectorSetting : int32
{
	Precise                        = 0,
	Approximate                    = 1,
	ENiagaraDefaultRendererMotionVectorSetting_MAX = 2,
};

enum class ENiagaraRendererMotionVectorSetting : int32
{
	AutoDetect                     = 0,
	Precise                        = 1,
	Approximate                    = 2,
	Disable                        = 3,
	ENiagaraRendererMotionVectorSetting_MAX = 4,
};

enum class ENiagaraSimTarget : uint8
{
	CPUSim                         = 0,
	GPUComputeSim                  = 1,
	ENiagaraSimTarget_MAX          = 2,
};

enum class ENiagaraAgeUpdateMode : uint8
{
	TickDeltaTime                  = 0,
	DesiredAge                     = 1,
	DesiredAgeNoSeek               = 2,
	ENiagaraAgeUpdateMode_MAX      = 3,
};

enum class ENiagaraStatEvaluationType : uint8
{
	Average                        = 0,
	Maximum                        = 1,
	ENiagaraStatEvaluationType_MAX = 2,
};

enum class ENiagaraStatDisplayMode : uint8
{
	Percent                        = 0,
	Absolute                       = 1,
	ENiagaraStatDisplayMode_MAX    = 2,
};

enum class ENiagaraDataSetType : uint8
{
	ParticleData                   = 0,
	Shared                         = 1,
	Event                          = 2,
	ENiagaraDataSetType_MAX        = 3,
};

enum class ENiagaraInputNodeUsage : uint8
{
	Undefined                      = 0,
	Parameter                      = 1,
	Attribute                      = 2,
	SystemConstant                 = 3,
	TranslatorConstant             = 4,
	RapidIterationParameter        = 5,
	ENiagaraInputNodeUsage_MAX     = 6,
};

enum class ENiagaraScriptCompileStatus : uint8
{
	NCS_Unknown                    = 0,
	NCS_Dirty                      = 1,
	NCS_Error                      = 2,
	NCS_UpToDate                   = 3,
	NCS_BeingCreated               = 4,
	NCS_UpToDateWithWarnings       = 5,
	NCS_ComputeUpToDateWithWarnings = 6,
	NCS_MAX                        = 7,
};

enum class ENiagaraScriptUsage : uint8
{
	Function                       = 0,
	Module                         = 1,
	DynamicInput                   = 2,
	ParticleSpawnScript            = 3,
	ParticleSpawnScriptInterpolated = 4,
	ParticleUpdateScript           = 5,
	ParticleEventScript            = 6,
	ParticleSimulationStageScript  = 7,
	ParticleGPUComputeScript       = 8,
	EmitterSpawnScript             = 9,
	EmitterUpdateScript            = 10,
	SystemSpawnScript              = 11,
	SystemUpdateScript             = 12,
	ENiagaraScriptUsage_MAX        = 13,
};

enum class ENiagaraCompileUsageStaticSwitch : uint8
{
	Spawn                          = 0,
	Update                         = 1,
	Event                          = 2,
	SimulationStage                = 3,
	Default                        = 4,
	ENiagaraCompileUsageStaticSwitch_MAX = 5,
};

enum class ENiagaraScriptContextStaticSwitch : uint8
{
	System                         = 0,
	Emitter                        = 1,
	Particle                       = 2,
	ENiagaraScriptContextStaticSwitch_MAX = 3,
};

enum class ENiagaraScriptGroup : uint8
{
	Particle                       = 0,
	Emitter                        = 1,
	System                         = 2,
	Max                            = 3,
};

enum class ENiagaraBindingSource : uint8
{
	ImplicitFromSource             = 0,
	ExplicitParticles              = 1,
	ExplicitEmitter                = 2,
	ExplicitSystem                 = 3,
	ExplicitUser                   = 4,
	MaxBindingSource               = 5,
	ENiagaraBindingSource_MAX      = 6,
};

enum class ENiagaraRendererSourceDataMode : uint8
{
	Particles                      = 0,
	Emitter                        = 1,
	ENiagaraRendererSourceDataMode_MAX = 2,
};

enum class ENiagaraLegacyTrailWidthMode : uint8
{
	FromCentre                     = 0,
	FromFirst                      = 1,
	FromSecond                     = 2,
	ENiagaraLegacyTrailWidthMode_MAX = 3,
};

enum class ENiagaraSystemInstanceState : uint8
{
	None                           = 0,
	PendingSpawn                   = 1,
	PendingSpawnPaused             = 2,
	Spawning                       = 3,
	Running                        = 4,
	Paused                         = 5,
	Num                            = 6,
	ENiagaraSystemInstanceState_MAX = 7,
};

enum class ENiagaraFunctionDebugState : uint8
{
	NoDebug                        = 0,
	Basic                          = 1,
	ENiagaraFunctionDebugState_MAX = 2,
};

enum class ENiagaraGpuComputeTickStage : uint8
{
	PreInitViews                   = 0,
	PostInitViews                  = 1,
	PostOpaqueRender               = 2,
	Max                            = 3,
	First                          = 0,
	Last                           = 2,
};

enum class ENCPoolMethod : uint8
{
	None                           = 0,
	AutoRelease                    = 1,
	ManualRelease                  = 2,
	ManualRelease_OnComplete       = 3,
	FreeInPool                     = 4,
	ENCPoolMethod_MAX              = 5,
};

enum class ENiagaraDataChannelAllocationMode : uint8
{
	Static                         = 0,
	ENiagaraDataChannelAllocationMode_MAX = 1,
};

enum class ENiagaraSortMode : uint8
{
	None                           = 0,
	ViewDepth                      = 1,
	ViewDistance                   = 2,
	CustomAscending                = 3,
	CustomDecending                = 4,
	ENiagaraSortMode_MAX           = 5,
};

enum class ENDISkelMesh_GpuMaxInfluences : uint8
{
	AllowMax4                      = 0,
	AllowMax8                      = 1,
	Unlimited                      = 2,
	ENDISkelMesh_MAX               = 3,
};

enum class ENDISkelMesh_GpuUniformSamplingFormat : uint8
{
	Full                           = 0,
	Limited_24_8                   = 1,
	Limited_23_9                   = 2,
	ENDISkelMesh_MAX               = 3,
};

enum class ENDISkelMesh_AdjacencyTriangleIndexFormat : uint8
{
	Full                           = 0,
	Half                           = 1,
	ENDISkelMesh_MAX               = 2,
};

enum class ENiagaraDefaultRendererPixelCoverageMode : uint8
{
	Enabled                        = 0,
	Disabled                       = 1,
	ENiagaraDefaultRendererPixelCoverageMode_MAX = 2,
};

enum class ENiagaraDefaultSortPrecision : uint8
{
	Low                            = 0,
	High                           = 1,
	ENiagaraDefaultSortPrecision_MAX = 2,
};

enum class ENiagaraDefaultGpuTranslucentLatency : uint8
{
	Immediate                      = 0,
	Latent                         = 1,
	ENiagaraDefaultGpuTranslucentLatency_MAX = 2,
};

enum class ENDICollisionQuery_AsyncGpuTraceProvider : uint8
{
	Default                        = 0,
	HWRT                           = 1,
	GSDF                           = 2,
	None                           = 3,
	ENDICollisionQuery_MAX         = 4,
};

enum class ENiagaraTickBehavior : uint8
{
	UsePrereqs                     = 0,
	UseComponentTickGroup          = 1,
	ForceTickFirst                 = 2,
	ForceTickLast                  = 3,
	ENiagaraTickBehavior_MAX       = 4,
};

enum class ENDIActorComponentSourceMode : uint8
{
	Default                        = 0,
	AttachParent                   = 1,
	LocalPlayer                    = 2,
	ENDIActorComponentSourceMode_MAX = 3,
};

enum class ENDIStaticMesh_SourceMode : uint8
{
	Default                        = 0,
	Source                         = 1,
	AttachParent                   = 2,
	DefaultMeshOnly                = 3,
	ENDIStaticMesh_MAX             = 4,
};

enum class ENiagaraSystemSpawnSectionStartBehavior : int32
{
	Activate                       = 0,
	ENiagaraSystemSpawnSectionStartBehavior_MAX = 1,
};

enum class ENiagaraSystemSpawnSectionEvaluateBehavior : int32
{
	ActivateIfInactive             = 0,
	None                           = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2,
};

enum class ENiagaraSystemSpawnSectionEndBehavior : int32
{
	SetSystemInactive              = 0,
	Deactivate                     = 1,
	None                           = 2,
	ENiagaraSystemSpawnSectionEndBehavior_MAX = 3,
};

enum class ENiagaraCompilationState : uint8
{
	CheckDDC                       = 0,
	Precompile                     = 1,
	StartCompileJob                = 2,
	AwaitResult                    = 3,
	OptimizeByteCode               = 4,
	ProcessResult                  = 5,
	PutToDDC                       = 6,
	Finished                       = 7,
	Aborted                        = 8,
	ENiagaraCompilationState_MAX   = 9,
};

enum class ENiagaraBakerViewMode : int32
{
	Perspective                    = 0,
	OrthoFront                     = 1,
	OrthoBack                      = 2,
	OrthoLeft                      = 3,
	OrthoRight                     = 4,
	OrthoTop                       = 5,
	OrthoBottom                    = 6,
	Num                            = 7,
	ENiagaraBakerViewMode_MAX      = 8,
};

enum class ENiagaraDataInterfaceEmitterBindingMode : int32
{
	Self                           = 0,
	Other                          = 1,
	ENiagaraDataInterfaceEmitterBindingMode_MAX = 2,
};

enum class ENDIExport_GPUAllocationMode : uint8
{
	FixedSize                      = 0,
	PerParticle                    = 1,
	ENDIExport_MAX                 = 2,
};

enum class ENDILandscape_SourceMode : uint8
{
	Default                        = 0,
	Source                         = 1,
	AttachParent                   = 2,
	ENDILandscape_MAX              = 3,
};

enum class ESetResolutionMethod : int32
{
	Independent                    = 0,
	MaxAxis                        = 1,
	CellSize                       = 2,
	ESetResolutionMethod_MAX       = 3,
};

enum class ENDISkeletalMesh_SourceMode : uint8
{
	Default                        = 0,
	Source                         = 1,
	AttachParent                   = 2,
	ENDISkeletalMesh_MAX           = 3,
};

enum class ENDISkeletalMesh_SkinningMode : uint8
{
	Invalid                        = 255,
	None                           = 0,
	SkinOnTheFly                   = 1,
	PreSkin                        = 2,
	ENDISkeletalMesh_MAX           = 256,
};

enum class ENiagaraDebugPlaybackMode : uint8
{
	Play                           = 0,
	Loop                           = 1,
	Paused                         = 2,
	Step                           = 3,
	ENiagaraDebugPlaybackMode_MAX  = 4,
};

enum class ENiagaraDebugHudHAlign : uint8
{
	Left                           = 0,
	Center                         = 1,
	Right                          = 2,
	ENiagaraDebugHudHAlign_MAX     = 3,
};

enum class ENiagaraDebugHudVAlign : uint8
{
	Top                            = 0,
	Center                         = 1,
	Bottom                         = 2,
	ENiagaraDebugHudVAlign_MAX     = 3,
};

enum class ENiagaraDebugHudFont : int32
{
	Small                          = 0,
	Normal                         = 1,
	ENiagaraDebugHudFont_MAX       = 2,
};

enum class ENiagaraDebugHudVerbosity : int32
{
	None                           = 0,
	Basic                          = 1,
	Verbose                        = 2,
	ENiagaraDebugHudVerbosity_MAX  = 3,
};

enum class ENiagaraDebugHUDOverviewMode : int32
{
	Overview                       = 0,
	Scalability                    = 1,
	Performance                    = 2,
	GpuComputePerformance          = 3,
	ENiagaraDebugHUDOverviewMode_MAX = 4,
};

enum class ENiagaraDebugHUDPerfGraphMode : int32
{
	None                           = 0,
	GameThread                     = 1,
	RenderThread                   = 2,
	GPU                            = 3,
	ENiagaraDebugHUDPerfGraphMode_MAX = 4,
};

enum class ENiagaraDebugHUDPerfSampleMode : int32
{
	FrameTotal                     = 0,
	PerInstanceAverage             = 1,
	ENiagaraDebugHUDPerfSampleMode_MAX = 2,
};

enum class ENiagaraCullReaction : int32
{
	Deactivate                     = 0,
	DeactivateImmediate            = 1,
	DeactivateResume               = 2,
	DeactivateImmediateResume      = 3,
	ENiagaraCullReaction_MAX       = 4,
};

enum class ENiagaraScalabilityUpdateFrequency : int32
{
	SpawnOnly                      = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	Continuous                     = 4,
	ENiagaraScalabilityUpdateFrequency_MAX = 5,
};

enum class ENiagaraCullProxyMode : uint32
{
	None                           = 0,
	Instanced_Rendered             = 1,
	ENiagaraCullProxyMode_MAX      = 2,
};

enum class EScriptExecutionMode : uint8
{
	EveryParticle                  = 0,
	SpawnedParticles               = 1,
	SingleParticle                 = 2,
	EScriptExecutionMode_MAX       = 3,
};

enum class EParticleAllocationMode : uint8
{
	AutomaticEstimate              = 0,
	ManualEstimate                 = 1,
	FixedCount                     = 2,
	EParticleAllocationMode_MAX    = 3,
};

enum class ENiagaraEmitterCalculateBoundMode : uint8
{
	Dynamic                        = 0,
	Fixed                          = 1,
	Programmable                   = 2,
	ENiagaraEmitterCalculateBoundMode_MAX = 3,
};

enum class ENiagaraMeshFacingMode : uint8
{
	Default                        = 0,
	Velocity                       = 1,
	CameraPosition                 = 2,
	CameraPlane                    = 3,
	ENiagaraMeshFacingMode_MAX     = 4,
};

enum class ENiagaraMeshPivotOffsetSpace : uint8
{
	Mesh                           = 0,
	Simulation                     = 1,
	World                          = 2,
	Local                          = 3,
	ENiagaraMeshPivotOffsetSpace_MAX = 4,
};

enum class ENiagaraMeshLockedAxisSpace : uint8
{
	Simulation                     = 0,
	World                          = 1,
	Local                          = 2,
	ENiagaraMeshLockedAxisSpace_MAX = 3,
};

enum class ENiagaraPlatformSelectionState : uint8
{
	Default                        = 0,
	Enabled                        = 1,
	Disabled                       = 2,
	ENiagaraPlatformSelectionState_MAX = 3,
};

enum class ENiagaraPlatformSetState : uint8
{
	Disabled                       = 0,
	Enabled                        = 1,
	Active                         = 2,
	Unknown                        = 3,
	ENiagaraPlatformSetState_MAX   = 4,
};

enum class ENiagaraCVarConditionResponse : uint8
{
	None                           = 0,
	Enable                         = 1,
	Disable                        = 2,
	ENiagaraCVarConditionResponse_MAX = 3,
};

enum class ENiagaraDeviceProfileRedirectMode : uint8
{
	CVar                           = 0,
	DeviceProfile                  = 1,
	ENiagaraDeviceProfileRedirectMode_MAX = 2,
};

enum class ENiagaraPreviewGridResetMode : uint8
{
	Never                          = 0,
	Individual                     = 1,
	All                            = 2,
	ENiagaraPreviewGridResetMode_MAX = 3,
};

enum class ENiagaraRendererSortPrecision : uint8
{
	Default                        = 0,
	Low                            = 1,
	High                           = 2,
	ENiagaraRendererSortPrecision_MAX = 3,
};

enum class ENiagaraRendererGpuTranslucentLatency : uint8
{
	ProjectDefault                 = 0,
	Immediate                      = 1,
	Latent                         = 2,
	ENiagaraRendererGpuTranslucentLatency_MAX = 3,
};

enum class ENiagaraRibbonFacingMode : uint8
{
	Screen                         = 0,
	Custom                         = 1,
	CustomSideVector               = 2,
	ENiagaraRibbonFacingMode_MAX   = 3,
};

enum class ENiagaraRibbonAgeOffsetMode : uint8
{
	Scale                          = 0,
	Clip                           = 1,
	ENiagaraRibbonAgeOffsetMode_MAX = 2,
};

enum class ENiagaraRibbonDrawDirection : uint8
{
	FrontToBack                    = 0,
	BackToFront                    = 1,
	ENiagaraRibbonDrawDirection_MAX = 2,
};

enum class ENiagaraRibbonShapeMode : uint8
{
	Plane                          = 0,
	MultiPlane                     = 1,
	Tube                           = 2,
	Custom                         = 3,
	ENiagaraRibbonShapeMode_MAX    = 4,
};

enum class ENiagaraRibbonTessellationMode : uint8
{
	Automatic                      = 0,
	Custom                         = 1,
	Disabled                       = 2,
	ENiagaraRibbonTessellationMode_MAX = 3,
};

enum class ENiagaraRibbonUVEdgeMode : int32
{
	SmoothTransition               = 0,
	Locked                         = 1,
	ENiagaraRibbonUVEdgeMode_MAX   = 2,
};

enum class ENiagaraRibbonUVDistributionMode : int32
{
	ScaledUniformly                = 0,
	ScaledUsingRibbonSegmentLength = 1,
	TiledOverRibbonLength          = 2,
	TiledFromStartOverRibbonLength = 3,
	ENiagaraRibbonUVDistributionMode_MAX = 4,
};

enum class EUnusedAttributeBehaviour : uint8
{
	Copy                           = 0,
	Zero                           = 1,
	None                           = 2,
	MarkInvalid                    = 3,
	PassThrough                    = 4,
	EUnusedAttributeBehaviour_MAX  = 5,
};

enum class ENiagaraModuleDependencyType : uint8
{
	PreDependency                  = 0,
	PostDependency                 = 1,
	ENiagaraModuleDependencyType_MAX = 2,
};

enum class ENiagaraModuleDependencyScriptConstraint : uint8
{
	SameScript                     = 0,
	AllScripts                     = 1,
	ENiagaraModuleDependencyScriptConstraint_MAX = 2,
};

enum class ENiagaraScriptLibraryVisibility : uint8
{
	Invalid                        = 0,
	Unexposed                      = 1,
	Library                        = 2,
	Hidden                         = 3,
	ENiagaraScriptLibraryVisibility_MAX = 4,
};

enum class ENiagaraScriptTemplateSpecification : uint8
{
	None                           = 0,
	Template                       = 1,
	Behavior                       = 2,
	ENiagaraScriptTemplateSpecification_MAX = 3,
};

enum class ENiagaraModuleDependencyUsage : uint8
{
	None                           = 0,
	Spawn                          = 1,
	Update                         = 2,
	Event                          = 3,
	SimulationStage                = 4,
	ENiagaraModuleDependencyUsage_MAX = 5,
};

enum class ENiagaraSpriteAlignment : uint8
{
	Unaligned                      = 0,
	VelocityAligned                = 1,
	CustomAlignment                = 2,
	ENiagaraSpriteAlignment_MAX    = 3,
};

enum class ENiagaraSpriteFacingMode : uint8
{
	FaceCamera                     = 0,
	FaceCameraPlane                = 1,
	CustomFacingVector             = 2,
	FaceCameraPosition             = 3,
	FaceCameraDistanceBlend        = 4,
	ENiagaraSpriteFacingMode_MAX   = 5,
};

enum class ENiagaraRendererPixelCoverageMode : uint8
{
	Automatic                      = 0,
	Disabled                       = 1,
	Enabled                        = 2,
	Enabled_RGBA                   = 3,
	Enabled_RGB                    = 4,
	Enabled_A                      = 5,
	ENiagaraRendererPixelCoverageMode_MAX = 6,
};

enum class ENiagaraStructConversionType : uint8
{
	CopyOnly                       = 0,
	DoubleToFloat                  = 1,
	Vector2                        = 2,
	Vector3                        = 3,
	Vector4                        = 4,
	Quat                           = 5,
	ENiagaraStructConversionType_MAX = 6,
};

enum class ENiagaraNumericOutputTypeSelectionMode : uint8
{
	None                           = 0,
	Largest                        = 1,
	Smallest                       = 2,
	Scalar                         = 3,
	Custom                         = 4,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 5,
};

enum class ENiagaraExecutionStateSource : uint8
{
	Scalability                    = 0,
	Internal                       = 1,
	Owner                          = 2,
	InternalCompletion             = 3,
	ENiagaraExecutionStateSource_MAX = 4,
};

enum class ENiagaraExecutionState : uint32
{
	Active                         = 0,
	Inactive                       = 1,
	InactiveClear                  = 2,
	Complete                       = 3,
	Disabled                       = 4,
	Num                            = 5,
	ENiagaraExecutionState_MAX     = 6,
};

enum class ENiagaraCoordinateSpace : uint8
{
	Simulation                     = 0,
	World                          = 1,
	Local                          = 2,
	ENiagaraCoordinateSpace_MAX    = 3,
};

enum class ENiagaraPythonUpdateScriptReference : uint8
{
	None                           = 0,
	ScriptAsset                    = 1,
	DirectTextEntry                = 2,
	ENiagaraPythonUpdateScriptReference_MAX = 3,
};

enum class ENiagaraOrientationAxis : uint8
{
	XAxis                          = 0,
	YAxis                          = 1,
	ZAxis                          = 2,
	ENiagaraOrientationAxis_MAX    = 3,
};

enum class ENiagaraBoolDisplayMode : uint8
{
	DisplayAlways                  = 0,
	DisplayIfTrue                  = 1,
	DisplayIfFalse                 = 2,
	ENiagaraBoolDisplayMode_MAX    = 3,
};

enum class ENiagaraValidationSeverity : uint8
{
	Info                           = 0,
	Warning                        = 1,
	Error                          = 2,
	ENiagaraValidationSeverity_MAX = 3,
};

enum class ENiagaraVariantMode : int32
{
	None                           = 0,
	Object                         = 1,
	DataInterface                  = 2,
	Bytes                          = 3,
	ENiagaraVariantMode_MAX        = 4,
};

enum class EVolumeCacheType : uint8
{
	OpenVDB                        = 0,
	EVolumeCacheType_MAX           = 1,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x58 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheCreateParameters
struct FNiagaraSimCacheCreateParameters
{
public:
	enum class ENiagaraSimCacheAttributeCaptureMode AttributeCaptureMode;                              // 0x0(0x1)(BlueprintVisible, ExportObject, Net, Parm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_B6F[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint8                                        bAllowRebasing : 1;                                // Mask: 0x1, PropSize: 0x10x4(0x1)(BlueprintVisible, Net, Parm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        bAllowDataInterfaceCaching : 1;                    // Mask: 0x2, PropSize: 0x10x4(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        bAllowInterpolation : 1;                           // Mask: 0x4, PropSize: 0x10x4(0x1)(Edit, ConstParm, ExportObject, Parm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        bAllowVelocityExtrapolation : 1;                   // Mask: 0x8, PropSize: 0x10x4(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, SubobjectReference)
	uint8                                        BitPad_59 : 4;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_B72[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          RebaseIncludeAttributes;                           // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, Config, EditConst, SubobjectReference)
	TArray<class FName>                          RebaseExcludeAttributes;                           // 0x18(0x10)(ConstParm, Net, EditFixedSize, Transient, Config, EditConst, SubobjectReference)
	TArray<class FName>                          InterpolationIncludeAttributes;                    // 0x28(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Transient, Config, EditConst, SubobjectReference)
	TArray<class FName>                          InterpolationExcludeAttributes;                    // 0x38(0x10)(ConstParm, EditFixedSize, Transient, Config, EditConst, SubobjectReference)
	TArray<class FName>                          ExplicitCaptureAttributes;                         // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Transient, Config, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Niagara.NDIRenderTargetVolumeSimCacheFrame
struct FNDIRenderTargetVolumeSimCacheFrame
{
public:
	struct FIntVector                            Size;                                              // 0x0(0xC)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	enum class EPixelFormat                      Format;                                            // 0xC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst)
	uint8                                        Pad_BB7[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        UncompressedSize;                                  // 0x10(0x4)(ExportObject, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CompressedSize;                                    // 0x14(0x4)(Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BB8[0x30];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraDataSetID
struct FNiagaraDataSetID
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	enum class ENiagaraDataSetType               Type;                                              // 0x8(0x1)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
	uint8                                        Pad_BBB[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraTypeDefinitionHandle
struct FNiagaraTypeDefinitionHandle
{
public:
	int32                                        RegisteredTypeIndex;                               // 0x0(0x4)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraVariableBase
struct FNiagaraVariableBase
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	struct FNiagaraTypeDefinitionHandle          TypeDefHandle;                                     // 0x8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x14 (0x20 - 0xC)
// ScriptStruct Niagara.NiagaraVariable
struct FNiagaraVariable : public FNiagaraVariableBase
{
public:
	uint8                                        Pad_BC5[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                VarData;                                           // 0x10(0x10)(BlueprintVisible, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraDataSetProperties
struct FNiagaraDataSetProperties
{
public:
	struct FNiagaraDataSetID                     ID;                                                // 0x0(0xC)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	uint8                                        Pad_BC8[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNiagaraVariable>              Variables;                                         // 0x10(0x10)(BlueprintVisible, ExportObject, Transient, Config)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraScriptDataUsageInfo
struct FNiagaraScriptDataUsageInfo
{
public:
	bool                                         bReadsAttributeData;                               // 0x0(0x1)(Edit, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Niagara.NiagaraFunctionSignature
struct FNiagaraFunctionSignature
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	TArray<struct FNiagaraVariable>              Inputs;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraVariable>              Outputs;                                           // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  OwnerName;                                         // 0x28(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRequiresContext : 1;                              // Mask: 0x1, PropSize: 0x10x30(0x1)(EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRequiresExecPin : 1;                              // Mask: 0x2, PropSize: 0x10x30(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bMemberFunction : 1;                               // Mask: 0x4, PropSize: 0x10x30(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bExperimental : 1;                                 // Mask: 0x8, PropSize: 0x10x30(0x1)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bSupportsCPU : 1;                                  // Mask: 0x10, PropSize: 0x10x30(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bSupportsGPU : 1;                                  // Mask: 0x20, PropSize: 0x10x30(0x1)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bWriteFunction : 1;                                // Mask: 0x40, PropSize: 0x10x30(0x1)(BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bReadFunction : 1;                                 // Mask: 0x80, PropSize: 0x10x30(0x1)(ExportObject, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bSoftDeprecatedFunction : 1;                       // Mask: 0x1, PropSize: 0x10x31(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsCompileTagGenerator : 1;                        // Mask: 0x2, PropSize: 0x10x31(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bHidden : 1;                                       // Mask: 0x4, PropSize: 0x10x31(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config)
	uint8                                        BitPad_5A : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_BD0[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        ModuleUsageBitmask;                                // 0x34(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ContextStageIndex;                                 // 0x38(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int16                                        RequiredInputs;                                    // 0x3C(0x2)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int16                                        RequiredOutputs;                                   // 0x3E(0x2)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FName, class FName>               FunctionSpecifiers;                                // 0x40(0x50)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraTypeDefinition
struct FNiagaraTypeDefinition
{
public:
	class UObject*                               ClassStructOrEnum;                                 // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       UnderlyingType;                                    // 0x8(0x2)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Flags;                                             // 0xA(0x1)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_BD3[0x5];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
struct FNiagaraScriptDataInterfaceInfo
{
public:
	class UNiagaraDataInterface*                 DataInterface;                                     // 0x0(0x8)(BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class FName                                  Name;                                              // 0x8(0x8)(ConstParm, Net, OutParm)
	int32                                        UserPtrIdx;                                        // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BD5[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraTypeDefinition                Type;                                              // 0x18(0x10)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
	class FName                                  RegisteredParameterMapRead;                        // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  RegisteredParameterMapWrite;                       // 0x30(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
struct FNiagaraScriptDataInterfaceCompileInfo
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	int32                                        UserPtrIdx;                                        // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BD9[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraTypeDefinition                Type;                                              // 0x10(0x10)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
	class FName                                  RegisteredParameterMapRead;                        // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  RegisteredParameterMapWrite;                       // 0x28(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsPlaceholder;                                    // 0x30(0x1)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BDE[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraStatScope
struct FNiagaraStatScope
{
public:
	class FName                                  FullName;                                          // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  FriendlyName;                                      // 0x8(0x8)(ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.VMFunctionSpecifier
struct FVMFunctionSpecifier
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class FName                                  Value;                                             // 0x8(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Niagara.VMExternalFunctionBindingInfo
struct FVMExternalFunctionBindingInfo
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	class FName                                  OwnerName;                                         // 0x8(0x8)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<bool>                                 InputParamLocations;                               // 0x10(0x10)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumOutputs;                                        // 0x20(0x4)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BE3[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FVMFunctionSpecifier>          FunctionSpecifiers;                                // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraVariableBase>          VariadicInputs;                                    // 0x38(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraVariableBase>          VariadicOutputs;                                   // 0x48(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Niagara.NiagaraSystemUpdateContext
struct FNiagaraSystemUpdateContext
{
public:
	TArray<class UNiagaraComponent*>             ComponentsToReset;                                 // 0x0(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UNiagaraComponent*>             ComponentsToReInit;                                // 0x10(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UNiagaraComponent*>             ComponentsToNotifySimDestroy;                      // 0x20(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UNiagaraSystem*>                SystemSimsToDestroy;                               // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UNiagaraSystem*>                SystemSimsToRecache;                               // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BEB[0x28];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraVariableInfo
struct FNiagaraVariableInfo
{
public:
	struct FNiagaraVariable                      Variable;                                          // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	class FText                                  Definition;                                        // 0x20(0x18)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UNiagaraDataInterface*                 DataInterface;                                     // 0x38(0x8)(BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Niagara.NiagaraVariableAttributeBinding
struct FNiagaraVariableAttributeBinding
{
public:
	struct FNiagaraVariableBase                  ParamMapVariable;                                  // 0x0(0xC)(Edit, BlueprintVisible, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BF4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraVariable                      DataSetVariable;                                   // 0x10(0x20)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraVariable                      RootVariable;                                      // 0x30(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraBindingSource             BindingSourceMode;                                 // 0x50(0x1)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BFA[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint8                                        bBindingExistsOnSource : 1;                        // Mask: 0x1, PropSize: 0x10x54(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsCachedParticleValue : 1;                        // Mask: 0x2, PropSize: 0x10x54(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_BFC[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x2C (0x2C - 0x0)
// ScriptStruct Niagara.NiagaraMaterialAttributeBinding
struct FNiagaraMaterialAttributeBinding
{
public:
	class FName                                  MaterialParameterName;                             // 0x0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraVariableBase                  NiagaraVariable;                                   // 0x8(0xC)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient)
	struct FNiagaraVariableBase                  ResolvedNiagaraVariable;                           // 0x14(0xC)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraVariableBase                  NiagaraChildVariable;                              // 0x20(0xC)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
struct FNiagaraVariableDataInterfaceBinding
{
public:
	struct FNiagaraVariable                      BoundVariable;                                     // 0x0(0x20)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraScriptVariableBinding
struct FNiagaraScriptVariableBinding
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraUserParameterBinding
struct FNiagaraUserParameterBinding
{
public:
	struct FNiagaraVariable                      Parameter;                                         // 0x0(0x20)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraCompileDependency
struct FNiagaraCompileDependency
{
public:
	class FString                                LinkerErrorMessage;                                // 0x0(0x10)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 NodeGuid;                                          // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 PinGuid;                                           // 0x20(0x10)(ExportObject, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FGuid>                         StackGuids;                                        // 0x30(0x10)(ConstParm, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraVariableBase                  DependentVariable;                                 // 0x40(0xC)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDependentVariableFromCustomIterationNamespace;    // 0x4C(0x1)(Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C05[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo
struct FNiagaraCompileHashVisitorDebugInfo
{
public:
	class FString                                Object;                                            // 0x0(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	TArray<class FString>                        PropertyKeys;                                      // 0x10(0x10)(BlueprintVisible, Net, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        PropertyValues;                                    // 0x20(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraDataChannelReference
struct FNiagaraDataChannelReference
{
public:
	class FName                                  ChannelName;                                       // 0x0(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NDIDataChannelFunctionInfo
struct FNDIDataChannelFunctionInfo
{
public:
	class FName                                  FunctionName;                                      // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, SubobjectReference)
	TArray<struct FNiagaraVariableBase>          Inputs;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraVariableBase>          Outputs;                                           // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NDIDataChannel_GPUScriptParameterAccessInfo
struct FNDIDataChannel_GPUScriptParameterAccessInfo
{
public:
	TArray<struct FNiagaraVariableBase>          SortedParameters;                                  // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Niagara.NDIDataChannelCompiledData
struct FNDIDataChannelCompiledData
{
public:
	TArray<struct FNDIDataChannelFunctionInfo>   FunctionInfo;                                      // 0x0(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TMap<struct FNiagaraCompileHash, struct FNDIDataChannel_GPUScriptParameterAccessInfo> GPUScriptParameterInfos;                           // 0x10(0x50)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       TotalParams;                                       // 0x60(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUsedByCPU;                                        // 0x64(0x1)(Edit, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUsedByGPU;                                        // 0x65(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C0D[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Niagara.NiagaraTypeLayoutInfo
struct FNiagaraTypeLayoutInfo
{
public:
	TArray<uint32>                               FloatComponentByteOffsets;                         // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint32>                               FloatComponentRegisterOffsets;                     // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint32>                               Int32ComponentByteOffsets;                         // 0x20(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint32>                               Int32ComponentRegisterOffsets;                     // 0x30(0x10)(Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint32>                               HalfComponentByteOffsets;                          // 0x40(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint32>                               HalfComponentRegisterOffsets;                      // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Niagara.NiagaraVariableLayoutInfo
struct FNiagaraVariableLayoutInfo
{
public:
	uint32                                       FloatComponentStart;                               // 0x0(0x4)(Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       Int32ComponentStart;                               // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       HalfComponentStart;                                // 0x8(0x4)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C19[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraTypeLayoutInfo                LayoutInfo;                                        // 0x10(0x60)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Niagara.NiagaraDataSetCompiledData
struct FNiagaraDataSetCompiledData
{
public:
	TArray<struct FNiagaraVariable>              Variables;                                         // 0x0(0x10)(BlueprintVisible, ExportObject, Transient, Config)
	TArray<struct FNiagaraVariableLayoutInfo>    VariableLayouts;                                   // 0x10(0x10)(BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraDataSetID                     ID;                                                // 0x20(0xC)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	uint32                                       TotalFloatComponents;                              // 0x2C(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       TotalInt32Components;                              // 0x30(0x4)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       TotalHalfComponents;                               // 0x34(0x4)(Edit, ConstParm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRequiresPersistentIDs : 1;                        // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_5B : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_C1F[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class ENiagaraSimTarget                 SimTarget;                                         // 0x3C(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C20[0xB];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0xB0 - 0x68)
// ScriptStruct Niagara.NDIDataChannelWriteCompiledData
struct FNDIDataChannelWriteCompiledData : public FNDIDataChannelCompiledData
{
public:
	struct FNiagaraDataSetCompiledData           DataLayout;                                        // 0x68(0x48)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraParameterBinding
struct FNiagaraParameterBinding
{
public:
	struct FNiagaraVariableBase                  Parameter;                                         // 0x0(0xC)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraScalabilityState
struct FNiagaraScalabilityState
{
public:
	float                                        Significance;                                      // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        LastVisibleTime;                                   // 0x4(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C24[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	uint8                                        bCulled : 1;                                       // Mask: 0x1, PropSize: 0x10xA(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreviousCulled : 1;                               // Mask: 0x2, PropSize: 0x10xA(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bCulledByDistance : 1;                             // Mask: 0x4, PropSize: 0x10xA(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bCulledByInstanceCount : 1;                        // Mask: 0x8, PropSize: 0x10xA(0x1)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bCulledByVisibility : 1;                           // Mask: 0x10, PropSize: 0x10xA(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bCulledByGlobalBudget : 1;                         // Mask: 0x20, PropSize: 0x10xA(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C2A[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheCaptureParameters
struct FNiagaraSimCacheCaptureParameters
{
public:
	int32                                        NumFrames;                                         // 0x0(0x4)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DuplicateTransient)
	int32                                        CaptureRate;                                       // 0x4(0x4)(ConstParm, BlueprintVisible, Net, Transient, Config, EditConst, SubobjectReference)
	bool                                         bManuallyAdvanceSimulation;                        // 0x8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C2B[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        AdvanceDeltaTime;                                  // 0xC(0x4)(Edit, ConstParm, BlueprintReadOnly, Transient, Config, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraStackSection
struct FNiagaraStackSection
{
public:
	class FName                                  SectionIdentifier;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  SectionDisplayName;                                // 0x8(0x18)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FText>                          Categories;                                        // 0x20(0x10)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, EditConst)
	bool                                         bEnabled;                                          // 0x30(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_C2F[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraDynamicMeshSection
struct FNiagaraDynamicMeshSection
{
public:
	int32                                        NumTriangles;                                      // 0x0(0x4)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaterialIndex;                                     // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraDynamicMeshMaterial
struct FNiagaraDynamicMeshMaterial
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(Edit, ConstParm, Net, EditFixedSize, Transient, Config, DisableEditOnInstance)
	struct FNiagaraUserParameterBinding          MaterialUserParamBinding;                          // 0x8(0x20)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NDIStaticMeshSectionFilter
struct FNDIStaticMeshSectionFilter
{
public:
	TArray<int32>                                AllowedMaterialSlots;                              // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraUObjectPropertyReaderRemap
struct FNiagaraUObjectPropertyReaderRemap
{
public:
	class FName                                  GraphName;                                         // 0x0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  RemapName;                                         // 0x8(0x8)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
{
public:
};

// 0x18 (0x28 - 0x10)
// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
{
public:
	struct FFrameNumber                          SpawnSectionStartFrame;                            // 0x10(0x4)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          SpawnSectionEndFrame;                              // 0x14(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior;                         // 0x18(0x4)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior;                      // 0x1C(0x4)(Edit, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior;                           // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraAgeUpdateMode             AgeUpdateMode;                                     // 0x24(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowScalability;                                 // 0x25(0x1)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C3F[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x40 - 0x20)
// ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FNiagaraVariable                      Parameter;                                         // 0x20(0x20)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x100 (0x140 - 0x40)
// ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneBoolChannel                BoolChannel;                                       // 0x40(0x100)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x440 (0x480 - 0x40)
// ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneFloatChannel               RedChannel;                                        // 0x40(0x110)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneFloatChannel               GreenChannel;                                      // 0x150(0x110)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneFloatChannel               BlueChannel;                                       // 0x260(0x110)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneFloatChannel               AlphaChannel;                                      // 0x370(0x110)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x110 (0x150 - 0x40)
// ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneFloatChannel               FloatChannel;                                      // 0x40(0x110)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x100 (0x140 - 0x40)
// ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneIntegerChannel             IntegerChannel;                                    // 0x40(0x100)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x448 (0x488 - 0x40)
// ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneFloatChannel               VectorChannels[0x4];                               // 0x40(0x440)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ChannelsUsed;                                      // 0x480(0x4)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C4D[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct Niagara.EmitterCompiledScriptPair
struct FEmitterCompiledScriptPair
{
public:
	uint8                                        Pad_C51[0xA0];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraBakerTextureSource
struct FNiagaraBakerTextureSource
{
public:
	class FString                                DisplayString;                                     // 0x0(0x10)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  SourceName;                                        // 0x10(0x8)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraBakerCameraSettings
struct FNiagaraBakerCameraSettings
{
public:
	enum class ENiagaraBakerViewMode             ViewMode;                                          // 0x0(0x4)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C54[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ViewportLocation;                                  // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              ViewportRotation;                                  // 0x20(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        OrbitDistance;                                     // 0x38(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        FOV;                                               // 0x3C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig)
	float                                        OrthoWidth;                                        // 0x40(0x4)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseAspectRatio;                                   // 0x44(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C5B[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        AspectRatio;                                       // 0x48(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C5D[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraBakerTextureSettings
struct FNiagaraBakerTextureSettings
{
public:
	class FName                                  OutputName;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FNiagaraBakerTextureSource            SourceBinding;                                     // 0x8(0x18)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseFrameSize : 1;                                 // Mask: 0x1, PropSize: 0x10x20(0x1)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_63 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_C5F[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FIntPoint                             FrameSize;                                         // 0x24(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FIntPoint                             TextureSize;                                       // 0x2C(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C60[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            GeneratedTexture;                                  // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NCPoolElement
struct FNCPoolElement
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_C62[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NCPool
struct FNCPool
{
public:
	TArray<struct FNCPoolElement>                FreeElements;                                      // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct Niagara.NiagaraComponentPropertyBinding
struct FNiagaraComponentPropertyBinding
{
public:
	struct FNiagaraVariableAttributeBinding      AttributeBinding;                                  // 0x0(0x58)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  PropertyName;                                      // 0x58(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, EditConst, SubobjectReference)
	struct FNiagaraTypeDefinition                PropertyType;                                      // 0x60(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  MetadataSetterName;                                // 0x70(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FString, class FString>           PropertySetterParameterDefaults;                   // 0x78(0x50)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraCulledComponentInfo
struct FNiagaraCulledComponentInfo
{
public:
	uint8                                        Pad_C67[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Niagara.NiagaraStructConversionStep
struct FNiagaraStructConversionStep
{
public:
	int32                                        LWCBytes;                                          // 0x0(0x4)(Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        LWCOffset;                                         // 0x4(0x4)(Edit, ConstParm, Net, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SimulationBytes;                                   // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SimulationOffset;                                  // 0xC(0x4)(Edit, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraStructConversionType      ConversionType;                                    // 0x10(0x1)(Edit, ExportObject, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C6B[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraLwcStructConverter
struct FNiagaraLwcStructConverter
{
public:
	int32                                        LWCSize;                                           // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SWCSize;                                           // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraStructConversionStep>  ConversionSteps;                                   // 0x8(0x10)(DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Niagara.NiagaraDataChannelGameDataLayout
struct FNiagaraDataChannelGameDataLayout
{
public:
	TMap<struct FNiagaraVariableBase, int32>     VariableIndices;                                   // 0x0(0x50)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraLwcStructConverter>    LwcConverters;                                     // 0x50(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraDataInterfaceEmitterBinding
struct FNiagaraDataInterfaceEmitterBinding
{
public:
	enum class ENiagaraDataInterfaceEmitterBindingMode BindingMode;                                       // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EmitterName;                                       // 0x4(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.BasicParticleData
struct FBasicParticleData
{
public:
	struct FVector                               Position;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)
	float                                        Size;                                              // 0x18(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	uint8                                        Pad_C73[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Velocity;                                          // 0x20(0x18)(Config, EditConst, GlobalConfig)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.MeshTriCoordinate
struct FMeshTriCoordinate
{
public:
	int32                                        Tri;                                               // 0x0(0x4)(Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector3f                             BaryCoord;                                         // 0x4(0xC)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraDataInterfaceSplineLUT
struct FNiagaraDataInterfaceSplineLUT
{
public:
	TArray<struct FVector>                       Positions;                                         // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<struct FVector>                       Scales;                                            // 0x10(0x10)(Edit, ConstParm, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FQuat>                         Rotations;                                         // 0x20(0x10)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        SplineLength;                                      // 0x30(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        SplineDistanceStep;                                // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        InvSplineDistanceStep;                             // 0x38(0x4)(ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxIndex;                                          // 0x3C(0x4)(Edit, ConstParm, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerTimingData
struct FNiagaraOutlinerTimingData
{
public:
	float                                        GameThread;                                        // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor)
	float                                        RenderThread;                                      // 0x4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerEmitterInstanceData
struct FNiagaraOutlinerEmitterInstanceData
{
public:
	class FString                                EmitterName;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraSimTarget                 SimTarget;                                         // 0x10(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C7C[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class ENiagaraExecutionState            ExecState;                                         // 0x14(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumParticles;                                      // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRequiresPersistentIDs : 1;                        // Mask: 0x1, PropSize: 0x10x1C(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C7E[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerSystemInstanceData
struct FNiagaraOutlinerSystemInstanceData
{
public:
	class FString                                ComponentName;                                     // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector3f                             LWCTile;                                           // 0x10(0xC)(BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C82[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNiagaraOutlinerEmitterInstanceData> Emitters;                                          // 0x20(0x10)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraExecutionState            ActualExecutionState;                              // 0x30(0x4)(Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraExecutionState            RequestedExecutionState;                           // 0x34(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraScalabilityState              ScalabilityState;                                  // 0x38(0xC)(ConstParm, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPendingKill : 1;                                  // Mask: 0x1, PropSize: 0x10x44(0x1)(Edit, ConstParm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUsingCullProxy : 1;                               // Mask: 0x2, PropSize: 0x10x44(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_64 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_C85[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class ENCPoolMethod                     PoolMethod;                                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C87[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraOutlinerTimingData            AverageTime;                                       // 0x4C(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraOutlinerTimingData            MaxTime;                                           // 0x54(0x8)(ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ETickingGroup                     TickGroup;                                         // 0x5C(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Config, EditConst, SubobjectReference)
	enum class ENiagaraGpuComputeTickStage       GpuTickStage;                                      // 0x5D(0x1)(Edit, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C8A[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	uint8                                        bIsSolo : 1;                                       // Mask: 0x1, PropSize: 0x10x60(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRequiresDistanceFieldData : 1;                    // Mask: 0x2, PropSize: 0x10x60(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRequiresDepthBuffer : 1;                          // Mask: 0x4, PropSize: 0x10x60(0x1)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRequiresEarlyViewData : 1;                        // Mask: 0x8, PropSize: 0x10x60(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRequiresViewUniformBuffer : 1;                    // Mask: 0x10, PropSize: 0x10x60(0x1)(Edit, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRequiresRayTracingScene : 1;                      // Mask: 0x20, PropSize: 0x10x60(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C8D[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerSystemData
struct FNiagaraOutlinerSystemData
{
public:
	TArray<struct FNiagaraOutlinerSystemInstanceData> SystemInstances;                                   // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraOutlinerTimingData            AveragePerFrameTime;                               // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraOutlinerTimingData            MaxPerFrameTime;                                   // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraOutlinerTimingData            AveragePerInstanceTime;                            // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraOutlinerTimingData            MaxPerInstanceTime;                                // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerWorldData
struct FNiagaraOutlinerWorldData
{
public:
	TMap<class FString, struct FNiagaraOutlinerSystemData> Systems;                                           // 0x0(0x50)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasBegunPlay;                                     // 0x50(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        WorldType;                                         // 0x51(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        NetMode;                                           // 0x52(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C94[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraOutlinerTimingData            AveragePerFrameTime;                               // 0x54(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraOutlinerTimingData            MaxPerFrameTime;                                   // 0x5C(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C95[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerData
struct FNiagaraOutlinerData
{
public:
	TMap<class FString, struct FNiagaraOutlinerWorldData> WorldData;                                         // 0x0(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraDebuggerRequestConnection
struct FNiagaraDebuggerRequestConnection
{
public:
	struct FGuid                                 SessionId;                                         // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 InstanceId;                                        // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraDebuggerAcceptConnection
struct FNiagaraDebuggerAcceptConnection
{
public:
	struct FGuid                                 SessionId;                                         // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 InstanceId;                                        // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraDebuggerConnectionClosed
struct FNiagaraDebuggerConnectionClosed
{
public:
	struct FGuid                                 SessionId;                                         // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 InstanceId;                                        // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraDebuggerExecuteConsoleCommand
struct FNiagaraDebuggerExecuteConsoleCommand
{
public:
	class FString                                Command;                                           // 0x0(0x10)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         bRequiresWorld;                                    // 0x10(0x1)(Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_C9E[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraDebuggerOutlinerUpdate
struct FNiagaraDebuggerOutlinerUpdate
{
public:
	struct FNiagaraOutlinerData                  OutlinerData;                                      // 0x0(0x50)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraDebugHudTextOptions
struct FNiagaraDebugHudTextOptions
{
public:
	enum class ENiagaraDebugHudFont              Font;                                              // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	enum class ENiagaraDebugHudHAlign            HorizontalAlignment;                               // 0x4(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraDebugHudVAlign            VerticalAlignment;                                 // 0x5(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CA2[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ScreenOffset;                                      // 0x8(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraDebugHUDVariable
struct FNiagaraDebugHUDVariable
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_CA6[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Name;                                              // 0x8(0x10)(ConstParm, Net, OutParm)
};

// 0x238 (0x238 - 0x0)
// ScriptStruct Niagara.NiagaraDebugHUDSettingsData
struct FNiagaraDebugHUDSettingsData
{
public:
	bool                                         bHudEnabled;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHudRenderingEnabled;                              // 0x1(0x1)(Edit, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bValidateSystemSimulationDataBuffers;              // 0x2(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bValidateParticleDataBuffers;                      // 0x3(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOverviewEnabled;                                  // 0x4(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CAC[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class ENiagaraDebugHUDOverviewMode      OverviewMode;                                      // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraDebugHudFont              OverviewFont;                                      // 0xC(0x4)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             OverviewLocation;                                  // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShowRegisteredComponents;                         // 0x20(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOverviewShowFilteredSystemOnly;                   // 0x21(0x1)(ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CB0[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ActorFilter;                                       // 0x28(0x10)(Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bComponentFilterEnabled;                           // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CB2[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                ComponentFilter;                                   // 0x40(0x10)(Edit, ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSystemFilterEnabled;                              // 0x50(0x1)(Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CB4[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                SystemFilter;                                      // 0x58(0x10)(Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEmitterFilterEnabled;                             // 0x68(0x1)(Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CB7[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                EmitterFilter;                                     // 0x70(0x10)(Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bActorFilterEnabled;                               // 0x80(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CB9[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class ENiagaraDebugHudVerbosity         SystemDebugVerbosity;                              // 0x84(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraDebugHudVerbosity         SystemEmitterVerbosity;                            // 0x88(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraDebugHudVerbosity         DataInterfaceVerbosity;                            // 0x8C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSystemShowBounds;                                 // 0x90(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CBE[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        SystemBoundsSolidBoxAlpha;                         // 0x94(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSystemShowActiveOnlyInWorld;                      // 0x98(0x1)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShowSystemVariables;                              // 0x99(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CC2[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNiagaraDebugHUDVariable>      SystemVariables;                                   // 0xA0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraDebugHudTextOptions           SystemTextOptions;                                 // 0xB0(0x18)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShowParticleVariables;                            // 0xC8(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableGpuParticleReadback;                        // 0xC9(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShowParticleIndex;                                // 0xCA(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CC7[0x5];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNiagaraDebugHUDVariable>      ParticlesVariables;                                // 0xD0(0x10)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraDebugHudTextOptions           ParticleTextOptions;                               // 0xE0(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShowParticlesVariablesWithSystem;                 // 0xF8(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShowParticleVariablesVertical;                    // 0xF9(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseMaxParticlesToDisplay;                         // 0xFA(0x1)(Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseParticleDisplayClip;                           // 0xFB(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CCC[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ParticleDisplayClip;                               // 0x100(0x10)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseParticleDisplayCenterRadius;                   // 0x110(0x1)(OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CCF[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        ParticleDisplayCenterRadius;                       // 0x114(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxParticlesToDisplay;                             // 0x118(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PerfReportFrames;                                  // 0x11C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraDebugHUDPerfSampleMode    PerfSampleMode;                                    // 0x120(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraDebugHUDPerfGraphMode     PerfGraphMode;                                     // 0x124(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PerfHistoryFrames;                                 // 0x128(0x4)(ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PerfGraphTimeRange;                                // 0x12C(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             PerfGraphSize;                                     // 0x130(0x10)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          PerfGraphAxisColor;                                // 0x140(0x10)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableSmoothing;                                  // 0x150(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CD3[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        SmoothingWidth;                                    // 0x154(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          DefaultBackgroundColor;                            // 0x158(0x10)(Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          OverviewHeadingColor;                              // 0x168(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          OverviewDetailColor;                               // 0x178(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          OverviewDetailHighlightColor;                      // 0x188(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          InWorldErrorTextColor;                             // 0x198(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          InWorldTextColor;                                  // 0x1A8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          MessageInfoTextColor;                              // 0x1B8(0x10)(BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          MessageWarningTextColor;                           // 0x1C8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          MessageErrorTextColor;                             // 0x1D8(0x10)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        SystemColorTableOpacity;                           // 0x1E8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       SystemColorSeed;                                   // 0x1EC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               SystemColorHSVMin;                                 // 0x1F0(0x18)(Edit, ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               SystemColorHSVMax;                                 // 0x208(0x18)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraDebugPlaybackMode         PlaybackMode;                                      // 0x220(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPlaybackRateEnabled;                              // 0x221(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CD8[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        PlaybackRate;                                      // 0x224(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLoopTimeEnabled;                                  // 0x228(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CD9[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        LoopTime;                                          // 0x22C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShowGlobalBudgetInfo;                             // 0x230(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CDA[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraRequestSimpleClientInfoMessage
struct FNiagaraRequestSimpleClientInfoMessage
{
public:
	uint8                                        Pad_CDC[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerCaptureSettings
struct FNiagaraOutlinerCaptureSettings
{
public:
	bool                                         bTriggerCapture;                                   // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CDE[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       CaptureDelayFrames;                                // 0x4(0x4)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bGatherPerfData;                                   // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CE0[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       SimCacheCaptureFrames;                             // 0xC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraSimpleClientInfo
struct FNiagaraSimpleClientInfo
{
public:
	TArray<class FString>                        Systems;                                           // 0x0(0x10)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        Actors;                                            // 0x10(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        Components;                                        // 0x20(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor)
	TArray<class FString>                        Emitters;                                          // 0x30(0x10)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraSystemSimCacheCaptureRequest
struct FNiagaraSystemSimCacheCaptureRequest
{
public:
	class FName                                  ComponentName;                                     // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       CaptureDelayFrames;                                // 0x8(0x4)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       CaptureFrames;                                     // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraSystemSimCacheCaptureReply
struct FNiagaraSystemSimCacheCaptureReply
{
public:
	class FName                                  ComponentName;                                     // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint8>                                SimCacheData;                                      // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraGraphViewSettings
struct FNiagaraGraphViewSettings
{
public:
	struct FVector2D                             Location;                                          // 0x0(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        Zoom;                                              // 0x10(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsValid;                                          // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
	uint8                                        Pad_CE8[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraLinearRamp
struct FNiagaraLinearRamp
{
public:
	float                                        StartX;                                            // 0x0(0x4)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        StartY;                                            // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        EndX;                                              // 0x8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        EndY;                                              // 0xC(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraGlobalBudgetScaling
struct FNiagaraGlobalBudgetScaling
{
public:
	uint8                                        bCullByGlobalBudget : 1;                           // Mask: 0x1, PropSize: 0x10x0(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bScaleMaxDistanceByGlobalBudgetUse : 1;            // Mask: 0x2, PropSize: 0x10x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bScaleMaxInstanceCountByGlobalBudgetUse : 1;       // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bScaleSystemInstanceCountByGlobalBudgetUse : 1;    // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_68 : 4;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_CF5[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MaxGlobalBudgetUsage;                              // 0x4(0x4)(BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraLinearRamp                    MaxDistanceScaleByGlobalBudgetUse;                 // 0x8(0x10)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraLinearRamp                    MaxInstanceCountScaleByGlobalBudgetUse;            // 0x18(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraLinearRamp                    MaxSystemInstanceCountScaleByGlobalBudgetUse;      // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraSystemVisibilityCullingSettings
struct FNiagaraSystemVisibilityCullingSettings
{
public:
	uint8                                        bCullWhenNotRendered : 1;                          // Mask: 0x1, PropSize: 0x10x0(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bCullByViewFrustum : 1;                            // Mask: 0x2, PropSize: 0x10x0(0x1)(EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAllowPreCullingByViewFrustum : 1;                 // Mask: 0x4, PropSize: 0x10x0(0x1)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_69 : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_CFA[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MaxTimeOutsideViewFrustum;                         // 0x4(0x4)(ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxTimeWithoutRender;                              // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraDeviceProfileStateEntry
struct FNiagaraDeviceProfileStateEntry
{
public:
	class FName                                  ProfileName;                                       // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint32                                       QualityLevelMask;                                  // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint32                                       SetQualityLevelMask;                               // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraPlatformSetCVarCondition
struct FNiagaraPlatformSetCVarCondition
{
public:
	class FName                                  CVarName;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	enum class ENiagaraCVarConditionResponse     PassResponse;                                      // 0x8(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraCVarConditionResponse     FailResponse;                                      // 0x9(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Value;                                             // 0xA(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	uint8                                        Pad_CFD[0x1];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        MinInt;                                            // 0xC(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxInt;                                            // 0x10(0x4)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinFloat;                                          // 0x14(0x4)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxFloat;                                          // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseMinInt : 1;                                    // Mask: 0x1, PropSize: 0x10x1C(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseMaxInt : 1;                                    // Mask: 0x2, PropSize: 0x10x1C(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseMinFloat : 1;                                  // Mask: 0x4, PropSize: 0x10x1C(0x1)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseMaxFloat : 1;                                  // Mask: 0x8, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_CFF[0x13];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraPlatformSet
struct FNiagaraPlatformSet
{
public:
	int32                                        QualityLevelMask;                                  // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_D01[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNiagaraDeviceProfileStateEntry> DeviceProfileStates;                               // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraPlatformSetCVarCondition> CVarConditions;                                    // 0x18(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D03[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x98 (0x98 - 0x0)
// ScriptStruct Niagara.NiagaraSystemScalabilitySettings
struct FNiagaraSystemScalabilitySettings
{
public:
	struct FNiagaraPlatformSet                   Platforms;                                         // 0x0(0x30)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bCullByDistance : 1;                               // Mask: 0x1, PropSize: 0x10x30(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bCullMaxInstanceCount : 1;                         // Mask: 0x2, PropSize: 0x10x30(0x1)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bCullPerSystemMaxInstanceCount : 1;                // Mask: 0x4, PropSize: 0x10x30(0x1)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_6A : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_D07[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MaxDistance;                                       // 0x34(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        bCullByMaxTimeWithoutRender : 1;                   // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_6B : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_D09[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxInstances;                                      // 0x3C(0x4)(ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxSystemInstances;                                // 0x40(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxTimeWithoutRender;                              // 0x44(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraCullProxyMode             CullProxyMode;                                     // 0x48(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxSystemProxies;                                  // 0x4C(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraSystemVisibilityCullingSettings VisibilityCulling;                                 // 0x50(0xC)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraGlobalBudgetScaling           BudgetScaling;                                     // 0x5C(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D0B[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray
struct FNiagaraSystemScalabilitySettingsArray
{
public:
	TArray<struct FNiagaraSystemScalabilitySettings> Settings;                                          // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x8 (0xA0 - 0x98)
// ScriptStruct Niagara.NiagaraSystemScalabilityOverride
struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
{
public:
	uint8                                        bOverrideDistanceSettings : 1;                     // Mask: 0x1, PropSize: 0x10x98(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOverrideInstanceCountSettings : 1;                // Mask: 0x2, PropSize: 0x10x98(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOverridePerSystemInstanceCountSettings : 1;       // Mask: 0x4, PropSize: 0x10x98(0x1)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOverrideVisibilitySettings : 1;                   // Mask: 0x8, PropSize: 0x10x98(0x1)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOverrideGlobalBudgetScalingSettings : 1;          // Mask: 0x10, PropSize: 0x10x98(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOverrideCullProxySettings : 1;                    // Mask: 0x20, PropSize: 0x10x98(0x1)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D0F[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterScalabilitySettings
struct FNiagaraEmitterScalabilitySettings
{
public:
	struct FNiagaraPlatformSet                   Platforms;                                         // 0x0(0x30)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bScaleSpawnCount : 1;                              // Mask: 0x1, PropSize: 0x10x30(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_6C : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_D11[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        SpawnCountScale;                                   // 0x34(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray
struct FNiagaraEmitterScalabilitySettingsArray
{
public:
	TArray<struct FNiagaraEmitterScalabilitySettings> Settings;                                          // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
};

// 0x8 (0x40 - 0x38)
// ScriptStruct Niagara.NiagaraEmitterScalabilityOverride
struct FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
{
public:
	uint8                                        bOverrideSpawnCountScale : 1;                      // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D15[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides
struct FNiagaraEmitterScalabilityOverrides
{
public:
	TArray<struct FNiagaraEmitterScalabilityOverride> Overrides;                                         // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraEventReceiverProperties
struct FNiagaraEventReceiverProperties
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	class FName                                  SourceEventGenerator;                              // 0x8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  SourceEmitter;                                     // 0x10(0x8)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Niagara.NiagaraEventGeneratorProperties
struct FNiagaraEventGeneratorProperties
{
public:
	int32                                        MaxEventsPerFrame;                                 // 0x0(0x4)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  ID;                                                // 0x4(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	uint8                                        Pad_D19[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraDataSetCompiledData           DataSetCompiledData;                               // 0x10(0x48)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterScriptProperties
struct FNiagaraEmitterScriptProperties
{
public:
	class UNiagaraScript*                        Script;                                            // 0x0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraEventReceiverProperties> EventReceivers;                                    // 0x8(0x10)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraEventGeneratorProperties> EventGenerators;                                   // 0x18(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x58 - 0x28)
// ScriptStruct Niagara.NiagaraEventScriptProperties
struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{
public:
	enum class EScriptExecutionMode              ExecutionMode;                                     // 0x28(0x1)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D1D[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       SpawnNumber;                                       // 0x2C(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       MaxEventsPerFrame;                                 // 0x30(0x4)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 SourceEmitterID;                                   // 0x34(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  SourceEventName;                                   // 0x44(0x8)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRandomSpawnNumber;                                // 0x4C(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D1F[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       MinSpawnNumber;                                    // 0x50(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         UpdateAttributeInitialValues;                      // 0x54(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D20[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
struct FNiagaraDetailsLevelScaleOverrides
{
public:
	float                                        Low;                                               // 0x0(0x4)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor)
	float                                        Medium;                                            // 0x4(0x4)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	float                                        High;                                              // 0x8(0x4)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor)
	float                                        Epic;                                              // 0xC(0x4)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient)
	float                                        Cine;                                              // 0x10(0x4)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Niagara.NiagaraAssetVersion
struct FNiagaraAssetVersion
{
public:
	int32                                        MajorVersion;                                      // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MinorVersion;                                      // 0x4(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 VersionGuid;                                       // 0x8(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsVisibleInVersionSelector;                       // 0x18(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D25[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1C (0x28 - 0xC)
// ScriptStruct Niagara.NiagaraVariableWithOffset
struct FNiagaraVariableWithOffset : public FNiagaraVariableBase
{
public:
	int32                                        Offset;                                            // 0xC(0x4)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	struct FNiagaraLwcStructConverter            StructConverter;                                   // 0x10(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraPositionSource
struct FNiagaraPositionSource
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	struct FVector                               Value;                                             // 0x8(0x18)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Niagara.NiagaraParameterStore
struct FNiagaraParameterStore
{
public:
	uint8                                        Pad_D28[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TWeakObjectPtr<class UObject>                Owner;                                             // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor)
	TArray<struct FNiagaraVariableWithOffset>    SortedParameterOffsets;                            // 0x10(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint8>                                ParameterData;                                     // 0x20(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UNiagaraDataInterface*>         DataInterfaces;                                    // 0x30(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UObject*>                       UObjects;                                          // 0x40(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraPositionSource>        OriginalPositionData;                              // 0x50(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D2A[0x28];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x2E8 (0x2E8 - 0x0)
// ScriptStruct Niagara.VersionedNiagaraEmitterData
struct FVersionedNiagaraEmitterData
{
public:
	struct FNiagaraAssetVersion                  Version;                                           // 0x0(0x1C)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         bDeprecated;                                       // 0x1C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D2F[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FText                                  DeprecationMessage;                                // 0x20(0x18)(Edit, BlueprintVisible, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLocalSpace;                                       // 0x38(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDeterminism;                                      // 0x39(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D31[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        RandomSeed;                                        // 0x3C(0x4)(Edit, BlueprintReadOnly, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bInterpolatedSpawning : 1;                         // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, BlueprintVisible, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_6D : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_D33[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class ENiagaraSimTarget                 SimTarget;                                         // 0x44(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraEmitterCalculateBoundMode CalculateBoundsMode;                               // 0x45(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D35[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FBox                                  FixedBounds;                                       // 0x48(0x38)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRequiresPersistentIDs : 1;                        // Mask: 0x1, PropSize: 0x10x80(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bCombineEventSpawn : 1;                            // Mask: 0x2, PropSize: 0x10x80(0x1)(Edit, ExportObject, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_6E : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_D38[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps;                           // 0x88(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraPlatformSet                   Platforms;                                         // 0x98(0x30)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraEmitterScalabilityOverrides   ScalabilityOverrides;                              // 0xC8(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bLimitDeltaTime : 1;                               // Mask: 0x1, PropSize: 0x10xD8(0x1)(ExportObject, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_6F : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_D3B[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxGPUParticlesSpawnPerFrame;                      // 0xDC(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxDeltaTimePerTick;                               // 0xE0(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EParticleAllocationMode           AllocationMode;                                    // 0xE4(0x1)(ConstParm, BlueprintVisible, Net, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D3D[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        PreAllocationCount;                                // 0xE8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D3E[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraEmitterScriptProperties       UpdateScriptProps;                                 // 0xF0(0x28)(ConstParm, BlueprintReadOnly, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraEmitterScriptProperties       SpawnScriptProps;                                  // 0x118(0x28)(Edit, ExportObject, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraParameterStore                RendererBindings;                                  // 0x140(0x88)(Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UNiagaraRendererProperties*>    RendererProperties;                                // 0x1C8(0x10)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UNiagaraSimulationStageBase*>   SimulationStages;                                  // 0x1D8(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UNiagaraScript*                        GPUComputeScript;                                  // 0x1E8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          SharedEventGeneratorIds;                           // 0x1F0(0x10)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraEmitterScalabilitySettings    CurrentScalabilitySettings;                        // 0x200(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D45[0xB0];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.VersionedNiagaraEmitter
struct FVersionedNiagaraEmitter
{
public:
	class UNiagaraEmitter*                       Emitter;                                           // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor)
	struct FGuid                                 Version;                                           // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterHandle
struct FNiagaraEmitterHandle
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	class FName                                  IdName;                                            // 0x10(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsEnabled;                                        // 0x18(0x1)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_D48[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  Name;                                              // 0x1C(0x8)(ConstParm, Net, OutParm)
	uint8                                        Pad_D49[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UNiagaraEmitter*                       Instance;                                          // 0x28(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVersionedNiagaraEmitter              VersionedInstance;                                 // 0x30(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraCollisionEventPayload
struct FNiagaraCollisionEventPayload
{
public:
	struct FVector                               CollisionPos;                                      // 0x0(0x18)(BlueprintVisible, ExportObject, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               CollisionNormal;                                   // 0x18(0x18)(Edit, ConstParm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               CollisionVelocity;                                 // 0x30(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ParticleIndex;                                     // 0x48(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        PhysicalMaterialIndex;                             // 0x4C(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraMeshMICOverride
struct FNiagaraMeshMICOverride
{
public:
	class UMaterialInterface*                    OriginalMaterial;                                  // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInstanceConstant*             ReplacementMaterial;                               // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraMeshMaterialOverride
struct FNiagaraMeshMaterialOverride
{
public:
	class UMaterialInterface*                    ExplicitMat;                                       // 0x0(0x8)(BlueprintReadOnly, Net, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraUserParameterBinding          UserParamBinding;                                  // 0x8(0x20)(Edit, ConstParm, BlueprintVisible, Net, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Niagara.NiagaraMeshRendererMeshProperties
struct FNiagaraMeshRendererMeshProperties
{
public:
	class UStaticMesh*                           Mesh;                                              // 0x0(0x8)(ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraParameterBinding              MeshParameterBinding;                              // 0x8(0xC)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D55[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Scale;                                             // 0x18(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	struct FRotator                              Rotation;                                          // 0x30(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               PivotOffset;                                       // 0x48(0x18)(EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraMeshPivotOffsetSpace      PivotOffsetSpace;                                  // 0x60(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D56[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.ParameterDefinitionsSubscription
struct FParameterDefinitionsSubscription
{
public:
	uint8                                        Pad_D57[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraParameters
struct FNiagaraParameters
{
public:
	TArray<struct FNiagaraVariable>              Parameters;                                        // 0x0(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraBoundParameter
struct FNiagaraBoundParameter
{
public:
	struct FNiagaraVariable                      Parameter;                                         // 0x0(0x20)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SrcOffset;                                         // 0x20(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DestOffset;                                        // 0x24(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraPerfBaselineStats
struct FNiagaraPerfBaselineStats
{
public:
	float                                        PerInstanceAvg_GT;                                 // 0x0(0x4)(ConstParm, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PerInstanceAvg_RT;                                 // 0x4(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PerInstanceMax_GT;                                 // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PerInstanceMax_RT;                                 // 0xC(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraPlatformSetConflictEntry
struct FNiagaraPlatformSetConflictEntry
{
public:
	class FName                                  ProfileName;                                       // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        QualityLevelMask;                                  // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraPlatformSetConflictInfo
struct FNiagaraPlatformSetConflictInfo
{
public:
	int32                                        SetAIndex;                                         // 0x0(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SetBIndex;                                         // 0x4(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraPlatformSetConflictEntry> Conflicts;                                         // 0x8(0x10)(BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Niagara.NiagaraPlatformSetRedirect
struct FNiagaraPlatformSetRedirect
{
public:
	TArray<class FName>                          ProfileNames;                                      // 0x0(0x10)(EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraDeviceProfileRedirectMode Mode;                                              // 0x10(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_D5E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  RedirectProfileName;                               // 0x14(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D5F[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraPlatformSetCVarCondition      CVarConditionEnabled;                              // 0x20(0x30)(ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraPlatformSetCVarCondition      CVarConditionDisabled;                             // 0x50(0x30)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraRendererMaterialScalarParameter
struct FNiagaraRendererMaterialScalarParameter
{
public:
	class FName                                  MaterialParameterName;                             // 0x0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Value;                                             // 0x8(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraRendererMaterialVectorParameter
struct FNiagaraRendererMaterialVectorParameter
{
public:
	class FName                                  MaterialParameterName;                             // 0x0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          Value;                                             // 0x8(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraRendererMaterialTextureParameter
struct FNiagaraRendererMaterialTextureParameter
{
public:
	class FName                                  MaterialParameterName;                             // 0x0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTexture*                              Texture;                                           // 0x8(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraRendererMaterialStaticBoolParameter
struct FNiagaraRendererMaterialStaticBoolParameter
{
public:
	class FName                                  MaterialParameterName;                             // 0x0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  StaticVariableName;                                // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraRendererMaterialParameters
struct FNiagaraRendererMaterialParameters
{
public:
	TArray<struct FNiagaraMaterialAttributeBinding> AttributeBindings;                                 // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraRendererMaterialScalarParameter> ScalarParameters;                                  // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraRendererMaterialVectorParameter> VectorParameters;                                  // 0x20(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraRendererMaterialTextureParameter> TextureParameters;                                 // 0x30(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraRendererMaterialStaticBoolParameter> StaticBoolParameters;                              // 0x40(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Niagara.NiagaraRibbonShapeCustomVertex
struct FNiagaraRibbonShapeCustomVertex
{
public:
	struct FVector2f                             Position;                                          // 0x0(0x8)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)
	struct FVector2f                             Normal;                                            // 0x8(0x8)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	float                                        TextureV;                                          // 0x10(0x4)(ConstParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraRibbonUVSettings
struct FNiagaraRibbonUVSettings
{
public:
	enum class ENiagaraRibbonUVDistributionMode  DistributionMode;                                  // 0x0(0x4)(EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraRibbonUVEdgeMode          LeadingEdgeMode;                                   // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraRibbonUVEdgeMode          TrailingEdgeMode;                                  // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        TilingLength;                                      // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             Offset;                                            // 0x10(0x10)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	struct FVector2D                             Scale;                                             // 0x20(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	bool                                         bEnablePerParticleUOverride;                       // 0x30(0x1)(ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnablePerParticleVRangeOverride;                  // 0x31(0x1)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D6F[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct Niagara.NiagaraScalabilityManager
struct FNiagaraScalabilityManager
{
public:
	class UNiagaraEffectType*                    EffectType;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig)
	TArray<class UNiagaraComponent*>             ManagedComponents;                                 // 0x8(0x10)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D71[0xC8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Niagara.NiagaraModuleDependency
struct FNiagaraModuleDependency
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	enum class ENiagaraModuleDependencyType      Type;                                              // 0x8(0x1)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
	enum class ENiagaraModuleDependencyScriptConstraint ScriptConstraint;                                  // 0x9(0x1)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D77[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                RequiredVersion;                                   // 0x10(0x10)(Edit, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        OnlyEvaluateInScriptUsage;                         // 0x20(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D7A[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FText                                  Description;                                       // 0x28(0x18)(BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig)
	uint8                                        Pad_D7B[0x28];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraCompilerTag
struct FNiagaraCompilerTag
{
public:
	struct FNiagaraVariable                      Variable;                                          // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	class FString                                StringValue;                                       // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Niagara.NiagaraVMExecutableDataId
struct FNiagaraVMExecutableDataId
{
public:
	struct FGuid                                 CompilerVersionID;                                 // 0x0(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraScriptUsage               ScriptUsageType;                                   // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D83[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 ScriptUsageTypeID;                                 // 0x14(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUsesRapidIterationParams : 1;                     // Mask: 0x1, PropSize: 0x10x24(0x1)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDisableDebugSwitches : 1;                         // Mask: 0x2, PropSize: 0x10x24(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bInterpolatedSpawn : 1;                            // Mask: 0x4, PropSize: 0x10x24(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRequiresPersistentIDs : 1;                        // Mask: 0x8, PropSize: 0x10x24(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_70 : 4;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_D89[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 BaseScriptID;                                      // 0x28(0x10)(ExportObject, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraCompileHash                   BaseScriptCompileHash;                             // 0x38(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 ScriptVersionID;                                   // 0x48(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraVMExecutableByteCode
struct FNiagaraVMExecutableByteCode
{
public:
	TArray<uint8>                                Data;                                              // 0x0(0x10)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        UncompressedSize;                                  // 0x10(0x4)(ExportObject, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D8E[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x190 (0x190 - 0x0)
// ScriptStruct Niagara.NiagaraVMExecutableData
struct FNiagaraVMExecutableData
{
public:
	struct FNiagaraVMExecutableByteCode          ByteCode;                                          // 0x0(0x18)(EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraVMExecutableByteCode          OptimizedByteCode;                                 // 0x18(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D95[0x38];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        NumTempRegisters;                                  // 0x68(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumUserPtrs;                                       // 0x6C(0x4)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraCompilerTag>           CompileTags;                                       // 0x70(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint8>                                ScriptLiterals;                                    // 0x80(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraVariable>              Attributes;                                        // 0x90(0x10)(Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config)
	struct FNiagaraScriptDataUsageInfo           DataUsage;                                         // 0xA0(0x1)(Edit, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D9F[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;                                 // 0xA8(0x10)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVMExternalFunctionBindingInfo> CalledVMExternalFunctions;                         // 0xB8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DA4[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNiagaraDataSetID>             ReadDataSets;                                      // 0xD8(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraDataSetProperties>     WriteDataSets;                                     // 0xE8(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraStatScope>             StatScopes;                                        // 0xF8(0x10)(BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraShaderScriptParametersMetadata ShaderScriptParametersMetadata;                    // 0x108(0x58)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraScriptCompileStatus       LastCompileStatus;                                 // 0x160(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DA7[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FSimulationStageMetaData>      SimulationStageMetaData;                           // 0x168(0x10)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient)
	TArray<uint8>                                ExperimentalContextData;                           // 0x178(0x10)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bReadsSignificanceIndex : 1;                       // Mask: 0x1, PropSize: 0x10x188(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bNeedsGPUContextInit : 1;                          // Mask: 0x2, PropSize: 0x10x188(0x1)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DA9[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.VersionedNiagaraScriptData
struct FVersionedNiagaraScriptData
{
public:
	uint8                                        Pad_DAA[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
struct FNiagaraScriptExecutionPaddingInfo
{
public:
	uint16                                       SrcOffset;                                         // 0x0(0x2)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       DestOffset;                                        // 0x2(0x2)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       SrcSize;                                           // 0x4(0x2)(ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       DestSize;                                          // 0x6(0x2)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0xA8 - 0x88)
// ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{
public:
	int32                                        ParameterSize;                                     // 0x88(0x4)(Edit, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       PaddedParameterSize;                               // 0x8C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraScriptExecutionPaddingInfo> PaddingInfo;                                       // 0x90(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bInitialized : 1;                                  // Mask: 0x1, PropSize: 0x10xA0(0x1)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DAF[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x98 - 0x88)
// ScriptStruct Niagara.NiagaraScriptInstanceParameterStore
struct FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore
{
public:
	uint8                                        Pad_DB1[0x10];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraScriptHighlight
struct FNiagaraScriptHighlight
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	class FText                                  DisplayName;                                       // 0x10(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheDataBuffers
struct FNiagaraSimCacheDataBuffers
{
public:
	uint32                                       NumInstances;                                      // 0x0(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DB3[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                FloatData;                                         // 0x8(0x10)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint8>                                HalfData;                                          // 0x18(0x10)(ConstParm, BlueprintVisible, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint8>                                Int32Data;                                         // 0x28(0x10)(OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                IDToIndexTable;                                    // 0x38(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       IDAcquireTag;                                      // 0x48(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DB6[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<uint32>                               InterpMapping;                                     // 0x50(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheEmitterFrame
struct FNiagaraSimCacheEmitterFrame
{
public:
	struct FBox                                  LocalBounds;                                       // 0x0(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        TotalSpawnedParticles;                             // 0x38(0x4)(Edit, ConstParm, Net, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DBA[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraSimCacheDataBuffers           ParticleDataBuffers;                               // 0x40(0x60)(ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheSystemFrame
struct FNiagaraSimCacheSystemFrame
{
public:
	struct FBox                                  LocalBounds;                                       // 0x0(0x38)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FNiagaraSimCacheDataBuffers           SystemDataBuffers;                                 // 0x38(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x120 (0x120 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheFrame
struct FNiagaraSimCacheFrame
{
public:
	struct FTransform                            LocalToWorld;                                      // 0x0(0x60)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector3f                             LWCTile;                                           // 0x60(0xC)(BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        SimulationAge;                                     // 0x6C(0x4)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraSimCacheSystemFrame           SystemData;                                        // 0x70(0x98)(EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraSimCacheEmitterFrame>  EmitterData;                                       // 0x108(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DC4[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheVariable
struct FNiagaraSimCacheVariable
{
public:
	struct FNiagaraVariableBase                  Variable;                                          // 0x0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
	uint16                                       FloatOffset;                                       // 0xC(0x2)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       FloatCount;                                        // 0xE(0x2)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       HalfOffset;                                        // 0x10(0x2)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       HalfCount;                                         // 0x12(0x2)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       Int32Offset;                                       // 0x14(0x2)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       Int32Count;                                        // 0x16(0x2)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheDataBuffersLayout
struct FNiagaraSimCacheDataBuffersLayout
{
public:
	class FName                                  LayoutName;                                        // 0x0(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ENiagaraSimTarget                 SimTarget;                                         // 0x8(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DCB[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNiagaraSimCacheVariable>      Variables;                                         // 0x10(0x10)(BlueprintVisible, ExportObject, Transient, Config)
	uint16                                       FloatCount;                                        // 0x20(0x2)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       HalfCount;                                         // 0x22(0x2)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       Int32Count;                                        // 0x24(0x2)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLocalSpace;                                       // 0x26(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowInterpolation;                               // 0x27(0x1)(Edit, ConstParm, ExportObject, Parm, Transient, Config, EditConst, SubobjectReference)
	bool                                         bAllowVelocityExtrapolation;                       // 0x28(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_DCF[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          RebaseVariableNames;                               // 0x30(0x10)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          InterpVariableNames;                               // 0x40(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       ComponentVelocity;                                 // 0x50(0x2)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_DD4[0x66];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheLayout
struct FNiagaraSimCacheLayout
{
public:
	struct FNiagaraSimCacheDataBuffersLayout     SystemLayout;                                      // 0x0(0xB8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraSimCacheDataBuffersLayout> EmitterLayouts;                                    // 0xB8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x138 (0x138 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterCompiledData
struct FNiagaraEmitterCompiledData
{
public:
	TArray<class FName>                          SpawnAttributes;                                   // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraVariable                      EmitterSpawnIntervalVar;                           // 0x10(0x20)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraVariable                      EmitterInterpSpawnStartDTVar;                      // 0x30(0x20)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraVariable                      EmitterSpawnGroupVar;                              // 0x50(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraVariable                      EmitterAgeVar;                                     // 0x70(0x20)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraVariable                      EmitterRandomSeedVar;                              // 0x90(0x20)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraVariable                      EmitterInstanceSeedVar;                            // 0xB0(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraVariable                      EmitterTotalSpawnedParticlesVar;                   // 0xD0(0x20)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraDataSetCompiledData           DataSetCompiledData;                               // 0xF0(0x48)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraParameterDataSetBinding
struct FNiagaraParameterDataSetBinding
{
public:
	int32                                        ParameterOffset;                                   // 0x0(0x4)(ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DataSetComponentOffset;                            // 0x4(0x4)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection
struct FNiagaraParameterDataSetBindingCollection
{
public:
	TArray<struct FNiagaraParameterDataSetBinding> FloatOffsets;                                      // 0x0(0x10)(ConstParm, Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraParameterDataSetBinding> Int32Offsets;                                      // 0x10(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x240 (0x240 - 0x0)
// ScriptStruct Niagara.NiagaraSystemCompiledData
struct FNiagaraSystemCompiledData
{
public:
	struct FNiagaraParameterStore                InstanceParamStore;                                // 0x0(0x88)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraDataSetCompiledData           DataSetCompiledData;                               // 0x88(0x48)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraDataSetCompiledData           SpawnInstanceParamsDataSetCompiledData;            // 0xD0(0x48)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraDataSetCompiledData           UpdateInstanceParamsDataSetCompiledData;           // 0x118(0x48)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding;                        // 0x160(0x20)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding;                        // 0x180(0x20)(ConstParm, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding;                         // 0x1A0(0x20)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings;                      // 0x1C0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding;                       // 0x1D0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding;                       // 0x1F0(0x20)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding;                        // 0x210(0x20)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings;                     // 0x230(0x10)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraSystemCompileRequest
struct FNiagaraSystemCompileRequest
{
public:
	uint8                                        Pad_DE4[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<class UObject*>                       RootObjects;                                       // 0x8(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraSystemScalabilityOverrides
struct FNiagaraSystemScalabilityOverrides
{
public:
	TArray<struct FNiagaraSystemScalabilityOverride> Overrides;                                         // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraWildcard
struct FNiagaraWildcard
{
public:
	uint8                                        Pad_DEB[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraFloat
struct FNiagaraFloat
{
public:
	float                                        Value;                                             // 0x0(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraInt32
struct FNiagaraInt32
{
public:
	int32                                        Value;                                             // 0x0(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraBool
struct FNiagaraBool
{
public:
	int32                                        Value;                                             // 0x0(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x0 (0xC - 0xC)
// ScriptStruct Niagara.NiagaraPosition
struct FNiagaraPosition : public FVector3f
{
public:
};

// 0x2 (0x2 - 0x0)
// ScriptStruct Niagara.NiagaraHalf
struct FNiagaraHalf
{
public:
	uint16                                       Value;                                             // 0x0(0x2)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraHalfVector2
struct FNiagaraHalfVector2
{
public:
	uint16                                       X;                                                 // 0x0(0x2)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	uint16                                       Y;                                                 // 0x2(0x2)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
};

// 0x6 (0x6 - 0x0)
// ScriptStruct Niagara.NiagaraHalfVector3
struct FNiagaraHalfVector3
{
public:
	uint16                                       X;                                                 // 0x0(0x2)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	uint16                                       Y;                                                 // 0x2(0x2)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	uint16                                       Z;                                                 // 0x4(0x2)(Edit, EditFixedSize, ReturnParm, Transient, Config)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraHalfVector4
struct FNiagaraHalfVector4
{
public:
	uint16                                       X;                                                 // 0x0(0x2)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	uint16                                       Y;                                                 // 0x2(0x2)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	uint16                                       Z;                                                 // 0x4(0x2)(Edit, EditFixedSize, ReturnParm, Transient, Config)
	uint16                                       W;                                                 // 0x6(0x2)(Edit, ConstParm, EditFixedSize, ReturnParm, Transient, Config)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraNumeric
struct FNiagaraNumeric
{
public:
	uint8                                        Pad_DFD[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraParameterMap
struct FNiagaraParameterMap
{
public:
	uint8                                        Pad_DFE[0x1];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraDouble
struct FNiagaraDouble
{
public:
	double                                       Value;                                             // 0x0(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraMatrix
struct FNiagaraMatrix
{
public:
	struct FVector4f                             Row0;                                              // 0x0(0x10)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector4f                             Row1;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector4f                             Row2;                                              // 0x20(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector4f                             Row3;                                              // 0x30(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraSpawnInfo
struct FNiagaraSpawnInfo
{
public:
	int32                                        Count;                                             // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	float                                        InterpStartDt;                                     // 0x4(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        IntervalDt;                                        // 0x8(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SpawnGroup;                                        // 0xC(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraID
struct FNiagaraID
{
public:
	int32                                        Index;                                             // 0x0(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	int32                                        AcquireTag;                                        // 0x4(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraRandInfo
struct FNiagaraRandInfo
{
public:
	int32                                        Seed1;                                             // 0x0(0x4)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Seed2;                                             // 0x4(0x4)(ConstParm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Seed3;                                             // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraInputConditionMetadata
struct FNiagaraInputConditionMetadata
{
public:
	class FName                                  InputName;                                         // 0x0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
	TArray<class FString>                        TargetValues;                                      // 0x8(0x10)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraEnumParameterMetaData
struct FNiagaraEnumParameterMetaData
{
public:
	class FName                                  OverrideName;                                      // 0x0(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            IconOverride;                                      // 0x8(0x8)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseColorOverride;                                 // 0x10(0x1)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E19[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          ColorOverride;                                     // 0x14(0x10)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E1A[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraBoolParameterMetaData
struct FNiagaraBoolParameterMetaData
{
public:
	enum class ENiagaraBoolDisplayMode           DisplayMode;                                       // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E1C[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  OverrideNameTrue;                                  // 0x4(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  OverrideNameFalse;                                 // 0xC(0x8)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E1E[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            IconOverrideTrue;                                  // 0x18(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            IconOverrideFalse;                                 // 0x20(0x8)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x148 (0x148 - 0x0)
// ScriptStruct Niagara.NiagaraVariableMetaData
struct FNiagaraVariableMetaData
{
public:
	class FText                                  Description;                                       // 0x0(0x18)(BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig)
	class FText                                  CategoryName;                                      // 0x18(0x18)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference)
	bool                                         bAdvancedDisplay;                                  // 0x30(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDisplayInOverviewStack;                           // 0x31(0x1)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E23[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        InlineParameterSortPriority;                       // 0x34(0x4)(Edit, ConstParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOverrideColor;                                    // 0x38(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E26[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          InlineParameterColorOverride;                      // 0x3C(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E28[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNiagaraEnumParameterMetaData> InlineParameterEnumOverrides;                      // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableBoolOverride;                               // 0x60(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E2B[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraBoolParameterMetaData         InlineParameterBoolOverride;                       // 0x68(0x28)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        EditorSortPriority;                                // 0x90(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bInlineEditConditionToggle;                        // 0x94(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E2F[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FNiagaraInputConditionMetadata        EditCondition;                                     // 0x98(0x18)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FNiagaraInputConditionMetadata        VisibleCondition;                                  // 0xB0(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FName, class FString>             PropertyMetaData;                                  // 0xC8(0x50)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  ParentAttribute;                                   // 0x118(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          AlternateAliases;                                  // 0x120(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 VariableGuid;                                      // 0x130(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bIsStaticSwitch;                                   // 0x140(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E35[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        StaticSwitchDefaultValue;                          // 0x144(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0xD8 - 0x88)
// ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{
public:
	TMap<struct FNiagaraVariable, struct FNiagaraVariable> UserParameterRedirects;                            // 0x88(0x50)(ExportObject, Net, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraVariant
struct FNiagaraVariant
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class UNiagaraDataInterface*                 DataInterface;                                     // 0x8(0x8)(BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	TArray<uint8>                                Bytes;                                             // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	enum class ENiagaraVariantMode               CurrentMode;                                       // 0x20(0x4)(ConstParm, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_E3B[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Niagara.NiagaraWorldManagerTickFunction
struct FNiagaraWorldManagerTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_E3D[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

}


