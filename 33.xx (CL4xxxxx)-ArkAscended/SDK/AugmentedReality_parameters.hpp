#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// Function AugmentedReality.ARActor.AddARComponent
struct AARActor_AddARComponent_Params
{
public:
	class UClass*                                InComponentClass;                                  // 0x0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FGuid                                 NativeID;                                          // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UARComponent*                          ReturnValue;                                       // 0x18(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
struct UARBlueprintLibrary_UnpinComponent_Params
{
public:
	class USceneComponent*                       ComponentToUnpin;                                  // 0x0(0x8)(EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture
struct UARBlueprintLibrary_ToggleARCapture_Params
{
public:
	bool                                         bOnOff;                                            // 0x0(0x1)(EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EARCaptureType                    CaptureType;                                       // 0x1(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.StartARSession
struct UARBlueprintLibrary_StartARSession_Params
{
public:
	class UARSessionConfig*                      SessionConfig;                                     // 0x0(0x8)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera
struct UARBlueprintLibrary_SetEnabledXRCamera_Params
{
public:
	bool                                         bOnOff;                                            // 0x0(0x1)(EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale
struct UARBlueprintLibrary_SetARWorldScale_Params
{
public:
	float                                        InWorldScale;                                      // 0x0(0x4)(ConstParm, BlueprintReadOnly, Net, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation
struct UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Params
{
public:
	struct FVector                               OriginLocation;                                    // 0x0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FRotator                              OriginRotation;                                    // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIsTransformInWorldSpace;                          // 0x30(0x1)(Edit, BlueprintVisible, Net, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bMaintainUpDirection;                              // 0x31(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B5B[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
struct UARBlueprintLibrary_SetAlignmentTransform_Params
{
public:
	struct FTransform                            InAlignmentTransform;                              // 0x0(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore
struct UARBlueprintLibrary_SaveARPinToLocalStore_Params
{
public:
	class FName                                  InSaveName;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UARPin*                                InPin;                                             // 0x8(0x8)(Edit, ConstParm, ExportObject, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2B5C[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera
struct UARBlueprintLibrary_ResizeXRCamera_Params
{
public:
	struct FIntPoint                             InSize;                                            // 0x0(0x8)(Edit, ConstParm, ExportObject, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
	struct FIntPoint                             ReturnValue;                                       // 0x8(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.RemovePin
struct UARBlueprintLibrary_RemovePin_Params
{
public:
	class UARPin*                                PinToRemove;                                       // 0x0(0x8)(BlueprintVisible, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore
struct UARBlueprintLibrary_RemoveARPinFromLocalStore_Params
{
public:
	class FName                                  InSaveName;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
struct UARBlueprintLibrary_PinComponentToTraceResult_Params
{
public:
	class USceneComponent*                       ComponentToPin;                                    // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B5D[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARTraceResult                        TraceResult;                                       // 0x10(0x90)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  DebugName;                                         // 0xA0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UARPin*                                ReturnValue;                                       // 0xA8(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin
struct UARBlueprintLibrary_PinComponentToARPin_Params
{
public:
	class USceneComponent*                       ComponentToPin;                                    // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UARPin*                                Pin;                                               // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2B5E[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x90 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.PinComponent
struct UARBlueprintLibrary_PinComponent_Params
{
public:
	class USceneComponent*                       ComponentToPin;                                    // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B5F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            PinToWorldTransform;                               // 0x10(0x60)(BlueprintVisible, Net, EditFixedSize, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UARTrackedGeometry*                    TrackedGeometry;                                   // 0x70(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  DebugName;                                         // 0x78(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UARPin*                                ReturnValue;                                       // 0x80(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2B60[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore
struct UARBlueprintLibrary_LoadARPinsFromLocalStore_Params
{
public:
	TMap<class FName, class UARPin*>             ReturnValue;                                       // 0x0(0x50)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
struct UARBlueprintLibrary_LineTraceTrackedObjects3D_Params
{
public:
	struct FVector                               Start;                                             // 0x0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
	struct FVector                               End;                                               // 0x18(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance)
	bool                                         bTestFeaturePoints;                                // 0x30(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bTestGroundPlane;                                  // 0x31(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bTestPlaneExtents;                                 // 0x32(0x1)(EditFixedSize, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bTestPlaneBoundaryPolygon;                         // 0x33(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B63[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FARTraceResult>                ReturnValue;                                       // 0x38(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
struct UARBlueprintLibrary_LineTraceTrackedObjects_Params
{
public:
	struct FVector2D                             ScreenCoord;                                       // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bTestFeaturePoints;                                // 0x10(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bTestGroundPlane;                                  // 0x11(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bTestPlaneExtents;                                 // 0x12(0x1)(EditFixedSize, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bTestPlaneBoundaryPolygon;                         // 0x13(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B66[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FARTraceResult>                ReturnValue;                                       // 0x18(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
struct UARBlueprintLibrary_IsSessionTypeSupported_Params
{
public:
	enum class EARSessionType                    SessionType;                                       // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
struct UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Params
{
public:
	enum class EARSessionType                    SessionType;                                       // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	enum class EARSessionTrackingFeature         SessionTrackingFeature;                            // 0x1(0x1)(ConstParm, BlueprintVisible, Net, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported
struct UARBlueprintLibrary_IsSceneReconstructionSupported_Params
{
public:
	enum class EARSessionType                    SessionType;                                       // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	enum class EARSceneReconstruction            SceneReconstructionMethod;                         // 0x1(0x1)(ExportObject, BlueprintReadOnly, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.IsARSupported
struct UARBlueprintLibrary_IsARSupported_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported
struct UARBlueprintLibrary_IsARPinLocalStoreSupported_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady
struct UARBlueprintLibrary_IsARPinLocalStoreReady_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
struct UARBlueprintLibrary_GetWorldMappingStatus_Params
{
public:
	enum class EARWorldMappingState              ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
struct UARBlueprintLibrary_GetTrackingQualityReason_Params
{
public:
	enum class EARTrackingQualityReason          ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
struct UARBlueprintLibrary_GetTrackingQuality_Params
{
public:
	enum class EARTrackingQuality                ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
struct UARBlueprintLibrary_GetSupportedVideoFormats_Params
{
public:
	enum class EARSessionType                    SessionType;                                       // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_2B6D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FARVideoFormat>                ReturnValue;                                       // 0x8(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
struct UARBlueprintLibrary_GetSessionConfig_Params
{
public:
	class UARSessionConfig*                      ReturnValue;                                       // 0x0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
struct UARBlueprintLibrary_GetPointCloud_Params
{
public:
	TArray<struct FVector>                       ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
struct UARBlueprintLibrary_GetPersonSegmentationImage_Params
{
public:
	class UARTexture*                            ReturnValue;                                       // 0x0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
struct UARBlueprintLibrary_GetPersonSegmentationDepthImage_Params
{
public:
	class UARTexture*                            ReturnValue;                                       // 0x0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation
struct UARBlueprintLibrary_GetObjectClassificationAtLocation_Params
{
public:
	struct FVector                               InWorldLocation;                                   // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARObjectClassification           OutClassification;                                 // 0x18(0x1)(Edit, BlueprintVisible, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B70[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OutClassificationLocation;                         // 0x20(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MaxLocationDiff;                                   // 0x38(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2B72[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported
struct UARBlueprintLibrary_GetNumberOfTrackedFacesSupported_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
struct UARBlueprintLibrary_GetCurrentLightEstimate_Params
{
public:
	class UARLightEstimate*                      ReturnValue;                                       // 0x0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics
struct UARBlueprintLibrary_GetCameraIntrinsics_Params
{
public:
	struct FARCameraIntrinsics                   OutCameraIntrinsics;                               // 0x0(0x28)(Edit, ConstParm, Net, EditFixedSize, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2B73[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
struct UARBlueprintLibrary_GetCameraImage_Params
{
public:
	class UARTextureCameraImage*                 ReturnValue;                                       // 0x0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
struct UARBlueprintLibrary_GetCameraDepth_Params
{
public:
	class UARTextureCameraDepth*                 ReturnValue;                                       // 0x0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale
struct UARBlueprintLibrary_GetARWorldScale_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetARTexture
struct UARBlueprintLibrary_GetARTexture_Params
{
public:
	enum class EARTextureType                    TextureType;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B75[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UARTexture*                            ReturnValue;                                       // 0x8(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
struct UARBlueprintLibrary_GetARSessionStatus_Params
{
public:
	struct FARSessionStatus                      ReturnValue;                                       // 0x0(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
struct UARBlueprintLibrary_GetAllTrackedPoses_Params
{
public:
	TArray<class UARTrackedPose*>                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
struct UARBlueprintLibrary_GetAllTrackedPoints_Params
{
public:
	TArray<class UARTrackedPoint*>               ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
struct UARBlueprintLibrary_GetAllTrackedPlanes_Params
{
public:
	TArray<class UARPlaneGeometry*>              ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
struct UARBlueprintLibrary_GetAllTrackedImages_Params
{
public:
	TArray<class UARTrackedImage*>               ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
struct UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Params
{
public:
	TArray<class UAREnvironmentCaptureProbe*>    ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
struct UARBlueprintLibrary_GetAllTracked2DPoses_Params
{
public:
	TArray<struct FARPose2D>                     ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetAllPins
struct UARBlueprintLibrary_GetAllPins_Params
{
public:
	TArray<class UARPin*>                        ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass
struct UARBlueprintLibrary_GetAllGeometriesByClass_Params
{
public:
	class UClass*                                GeometryClass;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UARTrackedGeometry*>            ReturnValue;                                       // 0x8(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
struct UARBlueprintLibrary_GetAllGeometries_Params
{
public:
	TArray<class UARTrackedGeometry*>            ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform
struct UARBlueprintLibrary_GetAlignmentTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName
struct UARBlueprintLibrary_FindTrackedPointsByName_Params
{
public:
	class FString                                PointName;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UARTrackedPoint*>               ReturnValue;                                       // 0x10(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
struct UARBlueprintLibrary_DebugDrawTrackedGeometry_Params
{
public:
	class UARTrackedGeometry*                    TrackedGeometry;                                   // 0x0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               WorldContextObject;                                // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FLinearColor                          Color;                                             // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	float                                        OutlineThickness;                                  // 0x20(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PersistForSeconds;                                 // 0x24(0x4)(Edit, EditFixedSize, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
struct UARBlueprintLibrary_DebugDrawPin_Params
{
public:
	class UARPin*                                ARPin;                                             // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class UObject*                               WorldContextObject;                                // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FLinearColor                          Color;                                             // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	float                                        Scale;                                             // 0x20(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        PersistForSeconds;                                 // 0x24(0x4)(Edit, EditFixedSize, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection
struct UARBlueprintLibrary_CalculateClosestIntersection_Params
{
public:
	TArray<struct FVector>                       StartPoints;                                       // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FVector>                       EndPoints;                                         // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               ClosestIntersection;                               // 0x20(0x18)(Edit, ExportObject, Net, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x120 (0x120 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform
struct UARBlueprintLibrary_CalculateAlignmentTransform_Params
{
public:
	struct FTransform                            TransformInFirstCoordinateSystem;                  // 0x0(0x60)(ExportObject, BlueprintReadOnly, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTransform                            TransformInSecondCoordinateSystem;                 // 0x60(0x60)(ConstParm, BlueprintVisible, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTransform                            AlignmentTransform;                                // 0xC0(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName
struct UARBlueprintLibrary_AddTrackedPointWithName_Params
{
public:
	struct FTransform                            WorldTransform;                                    // 0x0(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)
	class FString                                PointName;                                         // 0x60(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDeletePointsWithSameName;                         // 0x70(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x71(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2B86[0xE];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
struct UARBlueprintLibrary_AddRuntimeCandidateImage_Params
{
public:
	class UARSessionConfig*                      SessionConfig;                                     // 0x0(0x8)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UTexture2D*                            CandidateTexture;                                  // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                FriendlyName;                                      // 0x10(0x10)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	float                                        PhysicalWidth;                                     // 0x20(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B88[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UARCandidateImage*                     ReturnValue;                                       // 0x28(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
struct UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Extent;                                            // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2B8B[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
struct UARTraceResultLibrary_GetTrackedGeometry_Params
{
public:
	struct FARTraceResult                        TraceResult;                                       // 0x0(0x90)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UARTrackedGeometry*                    ReturnValue;                                       // 0x90(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2B8F[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
struct UARTraceResultLibrary_GetTraceChannel_Params
{
public:
	struct FARTraceResult                        TraceResult;                                       // 0x0(0x90)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARLineTraceChannels              ReturnValue;                                       // 0x90(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2B93[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xF0 (0xF0 - 0x0)
// Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform
struct UARTraceResultLibrary_GetLocalTransform_Params
{
public:
	struct FARTraceResult                        TraceResult;                                       // 0x0(0x90)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTransform                            ReturnValue;                                       // 0x90(0x60)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
struct UARTraceResultLibrary_GetLocalToWorldTransform_Params
{
public:
	struct FARTraceResult                        TraceResult;                                       // 0x0(0x90)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTransform                            ReturnValue;                                       // 0x90(0x60)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
struct UARTraceResultLibrary_GetLocalToTrackingTransform_Params
{
public:
	struct FARTraceResult                        TraceResult;                                       // 0x0(0x90)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTransform                            ReturnValue;                                       // 0x90(0x60)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
struct UARTraceResultLibrary_GetDistanceFromCamera_Params
{
public:
	struct FARTraceResult                        TraceResult;                                       // 0x0(0x90)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x90(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2B97[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
struct UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UARSaveWorldAsyncTaskBlueprintProxy*   ReturnValue;                                       // 0x8(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
struct UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Extent;                                            // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue;                                       // 0x38(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARComponent.SetNativeID
struct UARComponent_SetNativeID_Params
{
public:
	struct FGuid                                 NativeID;                                          // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARComponent.GetMRMesh
struct UARComponent_GetMRMesh_Params
{
public:
	class UMRMeshComponent*                      ReturnValue;                                       // 0x0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
struct UARPlaneComponent_SetPlaneComponentDebugMode_Params
{
public:
	enum class EPlaneComponentDebugMode          NewDebugMode;                                      // 0x0(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
struct UARPlaneComponent_SetObjectClassificationDebugColors_Params
{
public:
	TMap<enum class EARObjectClassification, struct FLinearColor> InColors;                                          // 0x0(0x50)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// Function AugmentedReality.ARPlaneComponent.ServerUpdatePayload
struct UARPlaneComponent_ServerUpdatePayload_Params
{
public:
	struct FARPlaneUpdatePayload                 NewPayload;                                        // 0x0(0xD0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// Function AugmentedReality.ARPlaneComponent.ReceiveUpdate
struct UARPlaneComponent_ReceiveUpdate_Params
{
public:
	struct FARPlaneUpdatePayload                 Payload;                                           // 0x0(0xD0)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// Function AugmentedReality.ARPlaneComponent.ReceiveAdd
struct UARPlaneComponent_ReceiveAdd_Params
{
public:
	struct FARPlaneUpdatePayload                 Payload;                                           // 0x0(0xD0)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
struct UARPlaneComponent_GetObjectClassificationDebugColors_Params
{
public:
	TMap<enum class EARObjectClassification, struct FLinearColor> ReturnValue;                                       // 0x0(0x50)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARPointComponent.ServerUpdatePayload
struct UARPointComponent_ServerUpdatePayload_Params
{
public:
	struct FARPointUpdatePayload                 NewPayload;                                        // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARPointComponent.ReceiveUpdate
struct UARPointComponent_ReceiveUpdate_Params
{
public:
	struct FARPointUpdatePayload                 Payload;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARPointComponent.ReceiveAdd
struct UARPointComponent_ReceiveAdd_Params
{
public:
	struct FARPointUpdatePayload                 Payload;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
struct UARFaceComponent_SetFaceComponentDebugMode_Params
{
public:
	enum class EFaceComponentDebugMode           NewDebugMode;                                      // 0x0(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function AugmentedReality.ARFaceComponent.ServerUpdatePayload
struct UARFaceComponent_ServerUpdatePayload_Params
{
public:
	struct FARFaceUpdatePayload                  NewPayload;                                        // 0x0(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function AugmentedReality.ARFaceComponent.ReceiveUpdate
struct UARFaceComponent_ReceiveUpdate_Params
{
public:
	struct FARFaceUpdatePayload                  Payload;                                           // 0x0(0x60)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function AugmentedReality.ARFaceComponent.ReceiveAdd
struct UARFaceComponent_ReceiveAdd_Params
{
public:
	struct FARFaceUpdatePayload                  Payload;                                           // 0x0(0x60)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode
struct UARImageComponent_SetImageComponentDebugMode_Params
{
public:
	enum class EImageComponentDebugMode          NewDebugMode;                                      // 0x0(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function AugmentedReality.ARImageComponent.ServerUpdatePayload
struct UARImageComponent_ServerUpdatePayload_Params
{
public:
	struct FARImageUpdatePayload                 NewPayload;                                        // 0x0(0xA0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function AugmentedReality.ARImageComponent.ReceiveUpdate
struct UARImageComponent_ReceiveUpdate_Params
{
public:
	struct FARImageUpdatePayload                 Payload;                                           // 0x0(0xA0)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function AugmentedReality.ARImageComponent.ReceiveAdd
struct UARImageComponent_ReceiveAdd_Params
{
public:
	struct FARImageUpdatePayload                 Payload;                                           // 0x0(0xA0)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
struct UARQRCodeComponent_SetQRCodeComponentDebugMode_Params
{
public:
	enum class EQRCodeComponentDebugMode         NewDebugMode;                                      // 0x0(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// Function AugmentedReality.ARQRCodeComponent.ServerUpdatePayload
struct UARQRCodeComponent_ServerUpdatePayload_Params
{
public:
	struct FARQRCodeUpdatePayload                NewPayload;                                        // 0x0(0xB0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// Function AugmentedReality.ARQRCodeComponent.ReceiveUpdate
struct UARQRCodeComponent_ReceiveUpdate_Params
{
public:
	struct FARQRCodeUpdatePayload                Payload;                                           // 0x0(0xB0)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// Function AugmentedReality.ARQRCodeComponent.ReceiveAdd
struct UARQRCodeComponent_ReceiveAdd_Params
{
public:
	struct FARQRCodeUpdatePayload                Payload;                                           // 0x0(0xB0)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
struct UARPoseComponent_SetPoseComponentDebugMode_Params
{
public:
	enum class EPoseComponentDebugMode           NewDebugMode;                                      // 0x0(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function AugmentedReality.ARPoseComponent.ServerUpdatePayload
struct UARPoseComponent_ServerUpdatePayload_Params
{
public:
	struct FARPoseUpdatePayload                  NewPayload;                                        // 0x0(0x70)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function AugmentedReality.ARPoseComponent.ReceiveUpdate
struct UARPoseComponent_ReceiveUpdate_Params
{
public:
	struct FARPoseUpdatePayload                  Payload;                                           // 0x0(0x70)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function AugmentedReality.ARPoseComponent.ReceiveAdd
struct UARPoseComponent_ReceiveAdd_Params
{
public:
	struct FARPoseUpdatePayload                  Payload;                                           // 0x0(0x70)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload
struct UAREnvironmentProbeComponent_ServerUpdatePayload_Params
{
public:
	struct FAREnvironmentProbeUpdatePayload      NewPayload;                                        // 0x0(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate
struct UAREnvironmentProbeComponent_ReceiveUpdate_Params
{
public:
	struct FAREnvironmentProbeUpdatePayload      Payload;                                           // 0x0(0x60)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd
struct UAREnvironmentProbeComponent_ReceiveAdd_Params
{
public:
	struct FAREnvironmentProbeUpdatePayload      Payload;                                           // 0x0(0x60)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function AugmentedReality.ARObjectComponent.ServerUpdatePayload
struct UARObjectComponent_ServerUpdatePayload_Params
{
public:
	struct FARObjectUpdatePayload                NewPayload;                                        // 0x0(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function AugmentedReality.ARObjectComponent.ReceiveUpdate
struct UARObjectComponent_ReceiveUpdate_Params
{
public:
	struct FARObjectUpdatePayload                Payload;                                           // 0x0(0x60)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function AugmentedReality.ARObjectComponent.ReceiveAdd
struct UARObjectComponent_ReceiveAdd_Params
{
public:
	struct FARObjectUpdatePayload                Payload;                                           // 0x0(0x60)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function AugmentedReality.ARMeshComponent.ServerUpdatePayload
struct UARMeshComponent_ServerUpdatePayload_Params
{
public:
	struct FARMeshUpdatePayload                  NewPayload;                                        // 0x0(0x90)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function AugmentedReality.ARMeshComponent.ReceiveUpdate
struct UARMeshComponent_ReceiveUpdate_Params
{
public:
	struct FARMeshUpdatePayload                  Payload;                                           // 0x0(0x90)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function AugmentedReality.ARMeshComponent.ReceiveAdd
struct UARMeshComponent_ReceiveAdd_Params
{
public:
	struct FARMeshUpdatePayload                  Payload;                                           // 0x0(0x90)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
struct UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Params
{
public:
	enum class EGeoAnchorComponentDebugMode      NewDebugMode;                                      // 0x0(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
struct UARGeoAnchorComponent_ServerUpdatePayload_Params
{
public:
	struct FARGeoAnchorUpdatePayload             NewPayload;                                        // 0x0(0xA0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
struct UARGeoAnchorComponent_ReceiveUpdate_Params
{
public:
	struct FARGeoAnchorUpdatePayload             Payload;                                           // 0x0(0xA0)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
struct UARGeoAnchorComponent_ReceiveAdd_Params
{
public:
	struct FARGeoAnchorUpdatePayload             Payload;                                           // 0x0(0xA0)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AugmentedReality.ARDependencyHandler.StartARSessionLatent
struct UARDependencyHandler_StartARSessionLatent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UARSessionConfig*                      SessionConfig;                                     // 0x8(0x8)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x10(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission
struct UARDependencyHandler_RequestARSessionPermission_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UARSessionConfig*                      SessionConfig;                                     // 0x8(0x8)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x10(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EARServicePermissionRequestResult OutPermissionResult;                               // 0x28(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C0A[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// Function AugmentedReality.ARDependencyHandler.InstallARService
struct UARDependencyHandler_InstallARService_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x8(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EARServiceInstallRequestResult    OutInstallResult;                                  // 0x20(0x1)(ExportObject, Net, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C0C[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler
struct UARDependencyHandler_GetARDependencyHandler_Params
{
public:
	class UARDependencyHandler*                  ReturnValue;                                       // 0x0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability
struct UARDependencyHandler_CheckARServiceAvailability_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x8(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EARServiceAvailability            OutAvailability;                                   // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C0F[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport
struct UARGeoTrackingSupport_GetGeoTrackingSupport_Params
{
public:
	class UARGeoTrackingSupport*                 ReturnValue;                                       // 0x0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason
struct UARGeoTrackingSupport_GetGeoTrackingStateReason_Params
{
public:
	enum class EARGeoTrackingStateReason         ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState
struct UARGeoTrackingSupport_GetGeoTrackingState_Params
{
public:
	enum class EARGeoTrackingState               ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy
struct UARGeoTrackingSupport_GetGeoTrackingAccuracy_Params
{
public:
	enum class EARGeoTrackingAccuracy            ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude
struct UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Params
{
public:
	float                                        Longitude;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference)
	float                                        Latitude;                                          // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	float                                        AltitudeMeters;                                    // 0x8(0x4)(BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C17[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                OptionalAnchorName;                                // 0x10(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2C18[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation
struct UARGeoTrackingSupport_AddGeoAnchorAtLocation_Params
{
public:
	float                                        Longitude;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference)
	float                                        Latitude;                                          // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	class FString                                OptionalAnchorName;                                // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2C19[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Params
{
public:
	bool                                         bIsAvailable;                                      // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C1B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Error;                                             // 0x8(0x10)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x18 (0x18 - 0x0)
// Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Longitude;                                         // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference)
	float                                        Latitude;                                          // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue;                                       // 0x10(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue;                                       // 0x8(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
struct UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Params
{
public:
	float                                        Longitude;                                         // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference)
	float                                        Latitude;                                          // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	float                                        Altitude;                                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C20[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Error;                                             // 0x10(0x10)(ExportObject, EditFixedSize, Parm, ReturnParm)
};

// 0x28 (0x28 - 0x0)
// Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
struct UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               WorldPosition;                                     // 0x8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Config, EditConst, SubobjectReference)
	class UGetGeoLocationAsyncTaskBlueprintProxy* ReturnValue;                                       // 0x20(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
struct UARLifeCycleComponent_ServerSpawnARActor_Params
{
public:
	class UClass*                                ComponentClass;                                    // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 NativeID;                                          // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
struct UARLifeCycleComponent_ServerDestroyARActor_Params
{
public:
	class AARActor*                              Actor;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
struct UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature_Params
{
public:
	class AARActor*                              Actor;                                             // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
struct UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Params
{
public:
	class UClass*                                ComponentClass;                                    // 0x0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 NativeID;                                          // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	class AARActor*                              SpawnedActor;                                      // 0x18(0x8)(EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
struct UARBasicLightEstimate_GetAmbientIntensityLumens_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
struct UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
struct UARBasicLightEstimate_GetAmbientColor_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARPin.GetTrackingState
struct UARPin_GetTrackingState_Params
{
public:
	enum class EARTrackingState                  ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARPin.GetTrackedGeometry
struct UARPin_GetTrackedGeometry_Params
{
public:
	class UARTrackedGeometry*                    ReturnValue;                                       // 0x0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARPin.GetPinnedComponent
struct UARPin_GetPinnedComponent_Params
{
public:
	class USceneComponent*                       ReturnValue;                                       // 0x0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function AugmentedReality.ARPin.GetLocalToWorldTransform
struct UARPin_GetLocalToWorldTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function AugmentedReality.ARPin.GetLocalToTrackingTransform
struct UARPin_GetLocalToTrackingTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARPin.GetDebugName
struct UARPin_GetDebugName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function AugmentedReality.ARPin.DebugDraw
struct UARPin_DebugDraw_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	struct FLinearColor                          Color;                                             // 0x8(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	float                                        Scale;                                             // 0x18(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	float                                        PersistForSeconds;                                 // 0x1C(0x4)(Edit, EditFixedSize, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
struct UARSessionConfig_ShouldResetTrackedObjects_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
struct UARSessionConfig_ShouldResetCameraTracking_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
struct UARSessionConfig_ShouldRenderCameraOverlay_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
struct UARSessionConfig_ShouldEnableCameraTracking_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
struct UARSessionConfig_ShouldEnableAutoFocus_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARSessionConfig.SetWorldMapData
struct UARSessionConfig_SetWorldMapData_Params
{
public:
	TArray<uint8>                                WorldMapData;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
struct UARSessionConfig_SetSessionTrackingFeatureToEnable_Params
{
public:
	enum class EARSessionTrackingFeature         InSessionTrackingFeature;                          // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
struct UARSessionConfig_SetSceneReconstructionMethod_Params
{
public:
	enum class EARSceneReconstruction            InSceneReconstructionMethod;                       // 0x0(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
struct UARSessionConfig_SetResetTrackedObjects_Params
{
public:
	bool                                         bNewValue;                                         // 0x0(0x1)(ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
struct UARSessionConfig_SetResetCameraTracking_Params
{
public:
	bool                                         bNewValue;                                         // 0x0(0x1)(ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
struct UARSessionConfig_SetFaceTrackingUpdate_Params
{
public:
	enum class EARFaceTrackingUpdate             InUpdate;                                          // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
struct UARSessionConfig_SetFaceTrackingDirection_Params
{
public:
	enum class EARFaceTrackingDirection          InDirection;                                       // 0x0(0x1)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
struct UARSessionConfig_SetEnableAutoFocus_Params
{
public:
	bool                                         bNewValue;                                         // 0x0(0x1)(ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
struct UARSessionConfig_SetDesiredVideoFormat_Params
{
public:
	struct FARVideoFormat                        NewFormat;                                         // 0x0(0xC)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
struct UARSessionConfig_SetCandidateObjectList_Params
{
public:
	TArray<class UARCandidateObject*>            InCandidateObjects;                                // 0x0(0x10)(Edit, ConstParm, EditFixedSize, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARSessionConfig.GetWorldMapData
struct UARSessionConfig_GetWorldMapData_Params
{
public:
	TArray<uint8>                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARSessionConfig.GetWorldAlignment
struct UARSessionConfig_GetWorldAlignment_Params
{
public:
	enum class EARWorldAlignment                 ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARSessionConfig.GetSessionType
struct UARSessionConfig_GetSessionType_Params
{
public:
	enum class EARSessionType                    ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
struct UARSessionConfig_GetSceneReconstructionMethod_Params
{
public:
	enum class EARSceneReconstruction            ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
struct UARSessionConfig_GetPlaneDetectionMode_Params
{
public:
	enum class EARPlaneDetectionMode             ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
struct UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
struct UARSessionConfig_GetLightEstimationMode_Params
{
public:
	enum class EARLightEstimationMode            ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
struct UARSessionConfig_GetFrameSyncMode_Params
{
public:
	enum class EARFrameSyncMode                  ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
struct UARSessionConfig_GetFaceTrackingUpdate_Params
{
public:
	enum class EARFaceTrackingUpdate             ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
struct UARSessionConfig_GetFaceTrackingDirection_Params
{
public:
	enum class EARFaceTrackingDirection          ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
struct UARSessionConfig_GetEnvironmentCaptureProbeType_Params
{
public:
	enum class EAREnvironmentCaptureProbeType    ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
struct UARSessionConfig_GetEnabledSessionTrackingFeature_Params
{
public:
	enum class EARSessionTrackingFeature         ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
struct UARSessionConfig_GetDesiredVideoFormat_Params
{
public:
	struct FARVideoFormat                        ReturnValue;                                       // 0x0(0xC)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
struct UARSessionConfig_GetCandidateObjectList_Params
{
public:
	TArray<class UARCandidateObject*>            ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARSessionConfig.GetCandidateImageList
struct UARSessionConfig_GetCandidateImageList_Params
{
public:
	TArray<class UARCandidateImage*>             ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARSessionConfig.AddCandidateObject
struct UARSessionConfig_AddCandidateObject_Params
{
public:
	class UARCandidateObject*                    CandidateObject;                                   // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARSessionConfig.AddCandidateImage
struct UARSessionConfig_AddCandidateImage_Params
{
public:
	class UARCandidateImage*                     NewCandidateImage;                                 // 0x0(0x8)(BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
struct AARSharedWorldGameMode_SetPreviewImageData_Params
{
public:
	TArray<uint8>                                ImageData;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
struct AARSharedWorldGameMode_SetARSharedWorldData_Params
{
public:
	TArray<uint8>                                ARWorldData;                                       // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
struct AARSharedWorldGameMode_GetARSharedWorldGameState_Params
{
public:
	class AARSharedWorldGameState*               ReturnValue;                                       // 0x0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
struct AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Params
{
public:
	int32                                        Offset;                                            // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_2C69[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                Buffer;                                            // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
struct AARSharedWorldPlayerController_ClientUpdateARWorldData_Params
{
public:
	int32                                        Offset;                                            // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	uint8                                        Pad_2C6A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                Buffer;                                            // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
struct AARSharedWorldPlayerController_ClientInitSharedWorld_Params
{
public:
	int32                                        PreviewImageSize;                                  // 0x0(0x4)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ARWorldDataSize;                                   // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
struct AARSkyLight_SetEnvironmentCaptureProbe_Params
{
public:
	class UAREnvironmentCaptureProbe*            InCaptureProbe;                                    // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARTrackedGeometry.IsTracked
struct UARTrackedGeometry_IsTracked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function AugmentedReality.ARTrackedGeometry.HasSpatialMeshUsageFlag
struct UARTrackedGeometry_HasSpatialMeshUsageFlag_Params
{
public:
	enum class EARSpatialMeshUsageFlags          InFlag;                                            // 0x0(0x1)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
struct UARTrackedGeometry_GetUnderlyingMesh_Params
{
public:
	class UMRMeshComponent*                      ReturnValue;                                       // 0x0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARTrackedGeometry.GetTrackingState
struct UARTrackedGeometry_GetTrackingState_Params
{
public:
	enum class EARTrackingState                  ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
struct UARTrackedGeometry_GetObjectClassification_Params
{
public:
	enum class EARObjectClassification           ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARTrackedGeometry.GetName
struct UARTrackedGeometry_GetName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
struct UARTrackedGeometry_GetLocalToWorldTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
struct UARTrackedGeometry_GetLocalToTrackingTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
struct UARTrackedGeometry_GetLastUpdateTimestamp_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
struct UARTrackedGeometry_GetLastUpdateFrameNumber_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARTrackedGeometry.GetDebugName
struct UARTrackedGeometry_GetDebugName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
struct UARPlaneGeometry_GetSubsumedBy_Params
{
public:
	class UARPlaneGeometry*                      ReturnValue;                                       // 0x0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARPlaneGeometry.GetOrientation
struct UARPlaneGeometry_GetOrientation_Params
{
public:
	enum class EARPlaneOrientation               ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AugmentedReality.ARPlaneGeometry.GetExtent
struct UARPlaneGeometry_GetExtent_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AugmentedReality.ARPlaneGeometry.GetCenter
struct UARPlaneGeometry_GetCenter_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
struct UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Params
{
public:
	TArray<struct FVector>                       ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARTrackedImage.GetEstimateSize
struct UARTrackedImage_GetEstimateSize_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARTrackedImage.GetDetectedImage
struct UARTrackedImage_GetDetectedImage_Params
{
public:
	class UARCandidateImage*                     ReturnValue;                                       // 0x0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
struct UARFaceGeometry_GetWorldSpaceEyeTransform_Params
{
public:
	enum class EAREye                            Eye;                                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C88[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
struct UARFaceGeometry_GetLocalSpaceEyeTransform_Params
{
public:
	enum class EAREye                            Eye;                                               // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C8B[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
struct UARFaceGeometry_GetBlendShapeValue_Params
{
public:
	enum class EARFaceBlendShape                 BlendShape;                                        // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C8D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ReturnValue;                                       // 0x4(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function AugmentedReality.ARFaceGeometry.GetBlendShapes
struct UARFaceGeometry_GetBlendShapes_Params
{
public:
	TMap<enum class EARFaceBlendShape, float>    ReturnValue;                                       // 0x0(0x50)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
struct UAREnvironmentCaptureProbe_GetExtent_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
struct UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Params
{
public:
	class UAREnvironmentCaptureProbeTexture*     ReturnValue;                                       // 0x0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARTrackedObject.GetDetectedObject
struct UARTrackedObject_GetDetectedObject_Params
{
public:
	class UARCandidateObject*                    ReturnValue;                                       // 0x0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
struct UARTrackedPose_GetTrackedPoseData_Params
{
public:
	struct FARPose3D                             ReturnValue;                                       // 0x0(0x50)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation
struct UARMeshGeometry_GetObjectClassificationAtLocation_Params
{
public:
	struct FVector                               InWorldLocation;                                   // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARObjectClassification           OutClassification;                                 // 0x18(0x1)(Edit, BlueprintVisible, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C97[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OutClassificationLocation;                         // 0x20(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        MaxLocationDiff;                                   // 0x38(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2C98[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function AugmentedReality.ARGeoAnchor.GetLongitude
struct UARGeoAnchor_GetLongitude_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AugmentedReality.ARGeoAnchor.GetLatitude
struct UARGeoAnchor_GetLatitude_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARGeoAnchor.GetAltitudeSource
struct UARGeoAnchor_GetAltitudeSource_Params
{
public:
	enum class EARAltitudeSource                 ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters
struct UARGeoAnchor_GetAltitudeMeters_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
struct UARCandidateImage_GetPhysicalWidth_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
struct UARCandidateImage_GetPhysicalHeight_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function AugmentedReality.ARCandidateImage.GetOrientation
struct UARCandidateImage_GetOrientation_Params
{
public:
	enum class EARCandidateImageOrientation      ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARCandidateImage.GetFriendlyName
struct UARCandidateImage_GetFriendlyName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function AugmentedReality.ARCandidateImage.GetCandidateTexture
struct UARCandidateImage_GetCandidateTexture_Params
{
public:
	class UTexture2D*                            ReturnValue;                                       // 0x0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARCandidateObject.SetFriendlyName
struct UARCandidateObject_SetFriendlyName_Params
{
public:
	class FString                                NewName;                                           // 0x0(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
struct UARCandidateObject_SetCandidateObjectData_Params
{
public:
	TArray<uint8>                                InCandidateObject;                                 // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function AugmentedReality.ARCandidateObject.SetBoundingBox
struct UARCandidateObject_SetBoundingBox_Params
{
public:
	struct FBox                                  InBoundingBox;                                     // 0x0(0x38)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARCandidateObject.GetFriendlyName
struct UARCandidateObject_GetFriendlyName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
struct UARCandidateObject_GetCandidateObjectData_Params
{
public:
	TArray<uint8>                                ReturnValue;                                       // 0x0(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function AugmentedReality.ARCandidateObject.GetBoundingBox
struct UARCandidateObject_GetBoundingBox_Params
{
public:
	struct FBox                                  ReturnValue;                                       // 0x0(0x38)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


