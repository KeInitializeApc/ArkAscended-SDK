#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EARTrackingState : uint8
{
	Unknown                        = 0,
	Tracking                       = 1,
	NotTracking                    = 2,
	StoppedTracking                = 3,
	EARTrackingState_MAX           = 4,
};

enum class EARSessionConfigFlags : uint8
{
	None                           = 0,
	GenerateMeshData               = 1,
	RenderMeshDataInWireframe      = 2,
	GenerateCollisionForMeshData   = 4,
	GenerateNavMeshForMeshData     = 8,
	UseMeshDataForOcclusion        = 16,
	EARSessionConfigFlags_MAX      = 17,
};

enum class EPlaneComponentDebugMode : uint8
{
	None                           = 0,
	ShowNetworkRole                = 1,
	ShowClassification             = 2,
	EPlaneComponentDebugMode_MAX   = 3,
};

enum class EFaceComponentDebugMode : uint8
{
	None                           = 0,
	ShowEyeVectors                 = 1,
	ShowFaceMesh                   = 2,
	EFaceComponentDebugMode_MAX    = 3,
};

enum class EARFaceTransformMixing : uint8
{
	ComponentOnly                  = 0,
	ComponentLocationTrackedRotation = 1,
	ComponentWithTracked           = 2,
	TrackingOnly                   = 3,
	EARFaceTransformMixing_MAX     = 4,
};

enum class EImageComponentDebugMode : uint8
{
	None                           = 0,
	ShowDetectedImage              = 1,
	EImageComponentDebugMode_MAX   = 2,
};

enum class EQRCodeComponentDebugMode : uint8
{
	None                           = 0,
	ShowQRCode                     = 1,
	EQRCodeComponentDebugMode_MAX  = 2,
};

enum class EPoseComponentDebugMode : uint8
{
	None                           = 0,
	ShowSkeleton                   = 1,
	EPoseComponentDebugMode_MAX    = 2,
};

enum class EGeoAnchorComponentDebugMode : uint8
{
	None                           = 0,
	ShowGeoData                    = 1,
	EGeoAnchorComponentDebugMode_MAX = 2,
};

enum class EARServiceAvailability : uint8
{
	UnknownError                   = 0,
	UnknownChecking                = 1,
	UnknownTimedOut                = 2,
	UnsupportedDeviceNotCapable    = 3,
	SupportedNotInstalled          = 4,
	SupportedVersionTooOld         = 5,
	SupportedInstalled             = 6,
	EARServiceAvailability_MAX     = 7,
};

enum class EARServiceInstallRequestResult : uint8
{
	Installed                      = 0,
	DeviceNotCompatible            = 1,
	UserDeclinedInstallation       = 2,
	FatalError                     = 3,
	EARServiceInstallRequestResult_MAX = 4,
};

enum class EARServicePermissionRequestResult : uint8
{
	Granted                        = 0,
	Denied                         = 1,
	EARServicePermissionRequestResult_MAX = 2,
};

enum class EARGeoTrackingState : uint8
{
	Initializing                   = 0,
	Localized                      = 1,
	Localizing                     = 2,
	NotAvailable                   = 3,
	EARGeoTrackingState_MAX        = 4,
};

enum class EARGeoTrackingStateReason : uint8
{
	None                           = 0,
	NotAvailableAtLocation         = 1,
	NeedLocationPermissions        = 2,
	DevicePointedTooLow            = 3,
	WorldTrackingUnstable          = 4,
	WaitingForLocation             = 5,
	GeoDataNotLoaded               = 6,
	VisualLocalizationFailed       = 7,
	WaitingForAvailabilityCheck    = 8,
	EARGeoTrackingStateReason_MAX  = 9,
};

enum class EARGeoTrackingAccuracy : uint8
{
	Undetermined                   = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	EARGeoTrackingAccuracy_MAX     = 4,
};

enum class EARWorldAlignment : uint8
{
	Gravity                        = 0,
	GravityAndHeading              = 1,
	Camera                         = 2,
	EARWorldAlignment_MAX          = 3,
};

enum class EARSessionType : uint8
{
	None                           = 0,
	Orientation                    = 1,
	World                          = 2,
	Face                           = 3,
	Image                          = 4,
	ObjectScanning                 = 5,
	PoseTracking                   = 6,
	GeoTracking                    = 7,
	EARSessionType_MAX             = 8,
};

enum class EARPlaneDetectionMode : uint8
{
	None                           = 0,
	HorizontalPlaneDetection       = 1,
	VerticalPlaneDetection         = 2,
	EARPlaneDetectionMode_MAX      = 3,
};

enum class EARLightEstimationMode : uint8
{
	None                           = 0,
	AmbientLightEstimate           = 1,
	DirectionalLightEstimate       = 2,
	EARLightEstimationMode_MAX     = 3,
};

enum class EARFrameSyncMode : uint8
{
	SyncTickWithCameraImage        = 0,
	SyncTickWithoutCameraImage     = 1,
	EARFrameSyncMode_MAX           = 2,
};

enum class EAREnvironmentCaptureProbeType : uint8
{
	None                           = 0,
	Manual                         = 1,
	Automatic                      = 2,
	EAREnvironmentCaptureProbeType_MAX = 3,
};

enum class EARFaceTrackingUpdate : uint8
{
	CurvesAndGeo                   = 0,
	CurvesOnly                     = 1,
	EARFaceTrackingUpdate_MAX      = 2,
};

enum class EARSessionTrackingFeature : uint8
{
	None                           = 0,
	PoseDetection2D                = 1,
	PersonSegmentation             = 2,
	PersonSegmentationWithDepth    = 3,
	SceneDepth                     = 4,
	SmoothedSceneDepth             = 5,
	EARSessionTrackingFeature_MAX  = 6,
};

enum class EARSceneReconstruction : uint8
{
	None                           = 0,
	MeshOnly                       = 1,
	MeshWithClassification         = 2,
	EARSceneReconstruction_MAX     = 3,
};

enum class EARTextureType : uint8
{
	Unknown                        = 0,
	CameraImage                    = 1,
	CameraDepth                    = 2,
	EnvironmentCapture             = 3,
	PersonSegmentationImage        = 4,
	PersonSegmentationDepth        = 5,
	SceneDepthMap                  = 6,
	SceneDepthConfidenceMap        = 7,
	EARTextureType_MAX             = 8,
};

enum class EARDepthQuality : uint8
{
	Unkown                         = 0,
	Low                            = 1,
	High                           = 2,
	EARDepthQuality_MAX            = 3,
};

enum class EARDepthAccuracy : uint8
{
	Unkown                         = 0,
	Approximate                    = 1,
	Accurate                       = 2,
	EARDepthAccuracy_MAX           = 3,
};

enum class EARFaceTrackingDirection : uint8
{
	FaceRelative                   = 0,
	FaceMirrored                   = 1,
	EARFaceTrackingDirection_MAX   = 2,
};

enum class EARFaceBlendShape : uint8
{
	EyeBlinkLeft                   = 0,
	EyeLookDownLeft                = 1,
	EyeLookInLeft                  = 2,
	EyeLookOutLeft                 = 3,
	EyeLookUpLeft                  = 4,
	EyeSquintLeft                  = 5,
	EyeWideLeft                    = 6,
	EyeBlinkRight                  = 7,
	EyeLookDownRight               = 8,
	EyeLookInRight                 = 9,
	EyeLookOutRight                = 10,
	EyeLookUpRight                 = 11,
	EyeSquintRight                 = 12,
	EyeWideRight                   = 13,
	JawForward                     = 14,
	JawLeft                        = 15,
	JawRight                       = 16,
	JawOpen                        = 17,
	MouthClose                     = 18,
	MouthFunnel                    = 19,
	MouthPucker                    = 20,
	MouthLeft                      = 21,
	MouthRight                     = 22,
	MouthSmileLeft                 = 23,
	MouthSmileRight                = 24,
	MouthFrownLeft                 = 25,
	MouthFrownRight                = 26,
	MouthDimpleLeft                = 27,
	MouthDimpleRight               = 28,
	MouthStretchLeft               = 29,
	MouthStretchRight              = 30,
	MouthRollLower                 = 31,
	MouthRollUpper                 = 32,
	MouthShrugLower                = 33,
	MouthShrugUpper                = 34,
	MouthPressLeft                 = 35,
	MouthPressRight                = 36,
	MouthLowerDownLeft             = 37,
	MouthLowerDownRight            = 38,
	MouthUpperUpLeft               = 39,
	MouthUpperUpRight              = 40,
	BrowDownLeft                   = 41,
	BrowDownRight                  = 42,
	BrowInnerUp                    = 43,
	BrowOuterUpLeft                = 44,
	BrowOuterUpRight               = 45,
	CheekPuff                      = 46,
	CheekSquintLeft                = 47,
	CheekSquintRight               = 48,
	NoseSneerLeft                  = 49,
	NoseSneerRight                 = 50,
	TongueOut                      = 51,
	HeadYaw                        = 52,
	HeadPitch                      = 53,
	HeadRoll                       = 54,
	LeftEyeYaw                     = 55,
	LeftEyePitch                   = 56,
	LeftEyeRoll                    = 57,
	RightEyeYaw                    = 58,
	RightEyePitch                  = 59,
	RightEyeRoll                   = 60,
	MAX                            = 61,
};

enum class EAREye : uint8
{
	LeftEye                        = 0,
	RightEye                       = 1,
	EAREye_MAX                     = 2,
};

enum class EARCaptureType : uint8
{
	Camera                         = 0,
	QRCode                         = 1,
	SpatialMapping                 = 2,
	SceneUnderstanding             = 3,
	HandMesh                       = 4,
	EARCaptureType_MAX             = 5,
};

enum class EARLineTraceChannels : uint8
{
	None                           = 0,
	FeaturePoint                   = 1,
	GroundPlane                    = 2,
	PlaneUsingExtent               = 4,
	PlaneUsingBoundaryPolygon      = 8,
	EARLineTraceChannels_MAX       = 9,
};

enum class EARTrackingQuality : uint8
{
	NotTracking                    = 0,
	OrientationOnly                = 1,
	OrientationAndPosition         = 2,
	EARTrackingQuality_MAX         = 3,
};

enum class EARTrackingQualityReason : uint8
{
	None                           = 0,
	Initializing                   = 1,
	Relocalizing                   = 2,
	ExcessiveMotion                = 3,
	InsufficientFeatures           = 4,
	InsufficientLight              = 5,
	BadState                       = 6,
	EARTrackingQualityReason_MAX   = 7,
};

enum class EARSessionStatus : uint8
{
	NotStarted                     = 0,
	Running                        = 1,
	NotSupported                   = 2,
	FatalError                     = 3,
	PermissionNotGranted           = 4,
	UnsupportedConfiguration       = 5,
	Other                          = 6,
	EARSessionStatus_MAX           = 7,
};

enum class EARWorldMappingState : uint8
{
	NotAvailable                   = 0,
	StillMappingNotRelocalizable   = 1,
	StillMappingRelocalizable      = 2,
	Mapped                         = 3,
	EARWorldMappingState_MAX       = 4,
};

enum class EARPlaneOrientation : uint8
{
	Horizontal                     = 0,
	Vertical                       = 1,
	Diagonal                       = 2,
	EARPlaneOrientation_MAX        = 3,
};

enum class EARObjectClassification : uint8
{
	NotApplicable                  = 0,
	Unknown                        = 1,
	Wall                           = 2,
	Ceiling                        = 3,
	Floor                          = 4,
	Table                          = 5,
	Seat                           = 6,
	Face                           = 7,
	Image                          = 8,
	World                          = 9,
	SceneObject                    = 10,
	HandMesh                       = 11,
	Door                           = 12,
	Window                         = 13,
	EARObjectClassification_MAX    = 14,
};

enum class EARSpatialMeshUsageFlags : uint8
{
	NotApplicable                  = 0,
	Visible                        = 1,
	Collision                      = 2,
	EARSpatialMeshUsageFlags_MAX   = 3,
};

enum class EARJointTransformSpace : uint8
{
	Model                          = 0,
	ParentJoint                    = 1,
	EARJointTransformSpace_MAX     = 2,
};

enum class EARAltitudeSource : uint8
{
	Precise                        = 0,
	Coarse                         = 1,
	UserDefined                    = 2,
	Unknown                        = 3,
	EARAltitudeSource_MAX          = 4,
};

enum class EARCandidateImageOrientation : uint8
{
	Landscape                      = 0,
	Portrait                       = 1,
	EARCandidateImageOrientation_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct AugmentedReality.TrackedGeometryGroup
struct FTrackedGeometryGroup
{
public:
	class AARActor*                              ARActor;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, GlobalConfig)
	class UARComponent*                          ARComponent;                                       // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig)
	class UARTrackedGeometry*                    TrackedGeometry;                                   // 0x10(0x8)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AugmentedReality.ARSessionPayload
struct FARSessionPayload
{
public:
	int32                                        ConfigFlags;                                       // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_25F2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    DefaultMeshMaterial;                               // 0x8(0x8)(ConstParm, Transient, Config, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    DefaultWireframeMeshMaterial;                      // 0x10(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct AugmentedReality.ARPlaneUpdatePayload
struct FARPlaneUpdatePayload
{
public:
	struct FARSessionPayload                     SessionPayload;                                    // 0x0(0x18)(ExportObject, Net, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_25F6[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            WorldTransform;                                    // 0x20(0x60)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               Center;                                            // 0x80(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	struct FVector                               Extents;                                           // 0x98(0x18)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config)
	TArray<struct FVector>                       BoundaryVertices;                                  // 0xB0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, Config, InstancedReference, SubobjectReference)
	enum class EARObjectClassification           ObjectClassification;                              // 0xC0(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_25F8[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct AugmentedReality.ARPointUpdatePayload
struct FARPointUpdatePayload
{
public:
	uint8                                        Pad_25F9[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct AugmentedReality.ARFaceUpdatePayload
struct FARFaceUpdatePayload
{
public:
	struct FARSessionPayload                     SessionPayload;                                    // 0x0(0x18)(ExportObject, Net, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               LeftEyePosition;                                   // 0x18(0x18)(EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               RightEyePosition;                                  // 0x30(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               LookAtTarget;                                      // 0x48(0x18)(BlueprintReadOnly, Net, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct AugmentedReality.ARImageUpdatePayload
struct FARImageUpdatePayload
{
public:
	struct FARSessionPayload                     SessionPayload;                                    // 0x0(0x18)(ExportObject, Net, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_25FC[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            WorldTransform;                                    // 0x20(0x60)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UARCandidateImage*                     DetectedImage;                                     // 0x80(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             EstimatedSize;                                     // 0x88(0x10)(Edit, ExportObject, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_25FD[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct AugmentedReality.ARQRCodeUpdatePayload
struct FARQRCodeUpdatePayload
{
public:
	struct FARSessionPayload                     SessionPayload;                                    // 0x0(0x18)(ExportObject, Net, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_25FE[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            WorldTransform;                                    // 0x20(0x60)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               Extents;                                           // 0x80(0x18)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config)
	class FString                                QRCode;                                            // 0x98(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2600[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// ScriptStruct AugmentedReality.ARPoseUpdatePayload
struct FARPoseUpdatePayload
{
public:
	struct FTransform                            WorldTransform;                                    // 0x0(0x60)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<struct FTransform>                    JointTransforms;                                   // 0x60(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct AugmentedReality.AREnvironmentProbeUpdatePayload
struct FAREnvironmentProbeUpdatePayload
{
public:
	struct FTransform                            WorldTransform;                                    // 0x0(0x60)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct AugmentedReality.ARObjectUpdatePayload
struct FARObjectUpdatePayload
{
public:
	struct FTransform                            WorldTransform;                                    // 0x0(0x60)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct AugmentedReality.ARMeshUpdatePayload
struct FARMeshUpdatePayload
{
public:
	struct FARSessionPayload                     SessionPayload;                                    // 0x0(0x18)(ExportObject, Net, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2607[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            WorldTransform;                                    // 0x20(0x60)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EARObjectClassification           ObjectClassification;                              // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2608[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct AugmentedReality.ARGeoAnchorUpdatePayload
struct FARGeoAnchorUpdatePayload
{
public:
	struct FARSessionPayload                     SessionPayload;                                    // 0x0(0x18)(ExportObject, Net, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_260B[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            WorldTransform;                                    // 0x20(0x60)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Longitude;                                         // 0x80(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, InstancedReference)
	float                                        Latitude;                                          // 0x84(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        AltitudeMeters;                                    // 0x88(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	enum class EARAltitudeSource                 AltitudeSource;                                    // 0x8C(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_260D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                AnchorName;                                        // 0x90(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AugmentedReality.ARSharedWorldReplicationState
struct FARSharedWorldReplicationState
{
public:
	int32                                        PreviewImageOffset;                                // 0x0(0x4)(BlueprintVisible, Parm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        ARWorldOffset;                                     // 0x4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct AugmentedReality.ARTraceResult
struct FARTraceResult
{
public:
	float                                        DistanceFromCamera;                                // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EARLineTraceChannels              TraceChannel;                                      // 0x4(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2612[0xB];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            LocalTransform;                                    // 0x10(0x60)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UARTrackedGeometry*                    TrackedGeometry;                                   // 0x70(0x8)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2614[0x18];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AugmentedReality.ARSessionStatus
struct FARSessionStatus
{
public:
	class FString                                AdditionalInfo;                                    // 0x0(0x10)(Edit, ConstParm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EARSessionStatus                  Status;                                            // 0x10(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2616[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct AugmentedReality.ARVideoFormat
struct FARVideoFormat
{
public:
	int32                                        FPS;                                               // 0x0(0x4)(ExportObject, BlueprintReadOnly, Parm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        Width;                                             // 0x4(0x4)(ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
	int32                                        Height;                                            // 0x8(0x4)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AugmentedReality.ARSkeletonDefinition
struct FARSkeletonDefinition
{
public:
	int32                                        NumJoints;                                         // 0x0(0x4)(Edit, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_261B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          JointNames;                                        // 0x8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<int32>                                ParentIndices;                                     // 0x18(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct AugmentedReality.ARPose2D
struct FARPose2D
{
public:
	struct FARSkeletonDefinition                 SkeletonDefinition;                                // 0x0(0x28)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FVector2D>                     JointLocations;                                    // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<bool>                                 IsJointTracked;                                    // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AugmentedReality.ARPose3D
struct FARPose3D
{
public:
	struct FARSkeletonDefinition                 SkeletonDefinition;                                // 0x0(0x28)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FTransform>                    JointTransforms;                                   // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	TArray<bool>                                 IsJointTracked;                                    // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EARJointTransformSpace            JointTransformSpace;                               // 0x48(0x1)(Edit, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2622[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AugmentedReality.ARCameraIntrinsics
struct FARCameraIntrinsics
{
public:
	struct FIntPoint                             ImageResolution;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             FocalLength;                                       // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FVector2D                             PrincipalPoint;                                    // 0x18(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
};

}


