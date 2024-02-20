#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x4C8 - 0x4C8)
// Class AugmentedReality.ARActor
class AARActor : public AActor
{
public:

	static class UClass* StaticClass();
	static class AARActor* GetDefaultObj();

	void AddARComponent(class UClass* InComponentClass, const struct FGuid& NativeID, class UARComponent* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARBlueprintLibrary
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UARBlueprintLibrary* GetDefaultObj();

	void UnpinComponent(class USceneComponent** ComponentToUnpin);
	bool ToggleARCapture(enum class EARCaptureType* CaptureType, bool ReturnValue);
	void StopARSession();
	void StartARSession(class UARSessionConfig* SessionConfig);
	bool SetEnabledXRCamera();
	void SetARWorldScale(float* InWorldScale);
	void SetARWorldOriginLocationAndRotation(const struct FVector& OriginLocation, const struct FRotator& OriginRotation, bool* bIsTransformInWorldSpace, bool* bMaintainUpDirection);
	void SetAlignmentTransform(struct FTransform* InAlignmentTransform);
	void SaveARPinToLocalStore(class FName* InSaveName, class UARPin** InPin, bool ReturnValue);
	struct FIntPoint ResizeXRCamera(const struct FIntPoint& ReturnValue);
	void RemovePin(class UARPin** PinToRemove);
	void RemoveARPinFromLocalStore(class FName* InSaveName);
	void RemoveAllARPinsFromLocalStore();
	void PinComponentToTraceResult(class USceneComponent** ComponentToPin, struct FARTraceResult* TraceResult, class FName* DebugName, class UARPin* ReturnValue);
	void PinComponentToARPin(class USceneComponent** ComponentToPin, class UARPin* Pin, bool ReturnValue);
	class UARTrackedGeometry* PinComponent(class USceneComponent** ComponentToPin, struct FTransform* PinToWorldTransform, class FName* DebugName, class UARPin* ReturnValue);
	void PauseARSession();
	void LoadARPinsFromLocalStore(TMap<class FName, class UARPin*> ReturnValue);
	struct FVector LineTraceTrackedObjects3D(bool* bTestFeaturePoints, bool* bTestGroundPlane, bool* bTestPlaneExtents, bool* bTestPlaneBoundaryPolygon, const TArray<struct FARTraceResult>& ReturnValue);
	void LineTraceTrackedObjects(struct FVector2D* ScreenCoord, bool* bTestFeaturePoints, bool* bTestGroundPlane, bool* bTestPlaneExtents, bool* bTestPlaneBoundaryPolygon, const TArray<struct FARTraceResult>& ReturnValue);
	enum class EARSessionType IsSessionTypeSupported(bool ReturnValue);
	enum class EARSessionType IsSessionTrackingFeatureSupported(enum class EARSessionTrackingFeature* SessionTrackingFeature, bool ReturnValue);
	enum class EARSessionType IsSceneReconstructionSupported(enum class EARSceneReconstruction* SceneReconstructionMethod, bool ReturnValue);
	void IsARSupported(bool ReturnValue);
	void IsARPinLocalStoreSupported(bool ReturnValue);
	void IsARPinLocalStoreReady(bool ReturnValue);
	void GetWorldMappingStatus(enum class EARWorldMappingState ReturnValue);
	void GetTrackingQualityReason(enum class EARTrackingQualityReason ReturnValue);
	void GetTrackingQuality(enum class EARTrackingQuality ReturnValue);
	enum class EARSessionType GetSupportedVideoFormats(const TArray<struct FARVideoFormat>& ReturnValue);
	void GetSessionConfig(class UARSessionConfig* ReturnValue);
	void GetPointCloud(const TArray<struct FVector>& ReturnValue);
	void GetPersonSegmentationImage(class UARTexture* ReturnValue);
	void GetPersonSegmentationDepthImage(class UARTexture* ReturnValue);
	void GetObjectClassificationAtLocation(struct FVector* InWorldLocation, enum class EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation, float* MaxLocationDiff, bool ReturnValue);
	void GetNumberOfTrackedFacesSupported(int32 ReturnValue);
	void GetCurrentLightEstimate(class UARLightEstimate* ReturnValue);
	void GetCameraIntrinsics(struct FARCameraIntrinsics* OutCameraIntrinsics, bool ReturnValue);
	void GetCameraImage(class UARTextureCameraImage* ReturnValue);
	void GetCameraDepth(class UARTextureCameraDepth* ReturnValue);
	void GetARWorldScale(float ReturnValue);
	void GetARTexture(enum class EARTextureType* TextureType, class UARTexture* ReturnValue);
	void GetARSessionStatus(const struct FARSessionStatus& ReturnValue);
	void GetAllTrackedPoses(const TArray<class UARTrackedPose*>& ReturnValue);
	void GetAllTrackedPoints(const TArray<class UARTrackedPoint*>& ReturnValue);
	void GetAllTrackedPlanes(const TArray<class UARPlaneGeometry*>& ReturnValue);
	void GetAllTrackedImages(const TArray<class UARTrackedImage*>& ReturnValue);
	void GetAllTrackedEnvironmentCaptureProbes(const TArray<class UAREnvironmentCaptureProbe*>& ReturnValue);
	void GetAllTracked2DPoses(const TArray<struct FARPose2D>& ReturnValue);
	void GetAllPins(const TArray<class UARPin*>& ReturnValue);
	void GetAllGeometriesByClass(class UClass** GeometryClass, const TArray<class UARTrackedGeometry*>& ReturnValue);
	void GetAllGeometries(const TArray<class UARTrackedGeometry*>& ReturnValue);
	void GetAlignmentTransform(const struct FTransform& ReturnValue);
	void FindTrackedPointsByName(const class FString& PointName, const TArray<class UARTrackedPoint*>& ReturnValue);
	class UObject* DebugDrawTrackedGeometry(struct FLinearColor* Color, float* OutlineThickness, float PersistForSeconds);
	class UObject* DebugDrawPin(struct FLinearColor* Color, float* Scale, float PersistForSeconds);
	void CalculateClosestIntersection(const TArray<struct FVector>& StartPoints, const TArray<struct FVector>& EndPoints, const struct FVector& ClosestIntersection);
	void CalculateAlignmentTransform(const struct FTransform& TransformInFirstCoordinateSystem, const struct FTransform& TransformInSecondCoordinateSystem, const struct FTransform& AlignmentTransform);
	struct FTransform AddTrackedPointWithName(const class FString& PointName, bool bDeletePointsWithSameName, bool ReturnValue);
	class FString AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, float PhysicalWidth, class UARCandidateImage* ReturnValue);
	struct FVector AddManualEnvironmentCaptureProbe(struct FVector* Location, bool ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARTraceResultLibrary
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UARTraceResultLibrary* GetDefaultObj();

	void GetTrackedGeometry(struct FARTraceResult* TraceResult, class UARTrackedGeometry* ReturnValue);
	void GetTraceChannel(struct FARTraceResult* TraceResult, enum class EARLineTraceChannels ReturnValue);
	void GetLocalTransform(struct FARTraceResult* TraceResult, const struct FTransform& ReturnValue);
	void GetLocalToWorldTransform(struct FARTraceResult* TraceResult, const struct FTransform& ReturnValue);
	void GetLocalToTrackingTransform(struct FARTraceResult* TraceResult, const struct FTransform& ReturnValue);
	void GetDistanceFromCamera(struct FARTraceResult* TraceResult, float ReturnValue);
};

// 0x20 (0x50 - 0x30)
// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{
public:
	uint8                                        Pad_1E6D[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARBaseAsyncTaskBlueprintProxy* GetDefaultObj();

};

// 0x30 (0x80 - 0x50)
// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x50(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x60(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1E74[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARSaveWorldAsyncTaskBlueprintProxy* GetDefaultObj();

	class UObject* ARSaveWorld(class UARSaveWorldAsyncTaskBlueprintProxy* ReturnValue);
};

// 0x60 (0xB0 - 0x50)
// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x50(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x60(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1E80[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARGetCandidateObjectAsyncTaskBlueprintProxy* GetDefaultObj();

	struct FVector ARGetCandidateObject(struct FVector* Location, class UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue);
};

// 0x80 (0x348 - 0x2C8)
// Class AugmentedReality.ARComponent
class UARComponent : public USceneComponent
{
public:
	struct FGuid                                 NativeID;                                          // 0x2C8(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1E8E[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bUseDefaultReplication;                            // 0x308(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E8F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    DefaultMeshMaterial;                               // 0x310(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInterface*                    DefaultWireframeMeshMaterial;                      // 0x318(0x8)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMRMeshComponent*                      MRMeshComponent;                                   // 0x320(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UARTrackedGeometry*                    MyTrackedGeometry;                                 // 0x328(0x8)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E95[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARComponent* GetDefaultObj();

	void UpdateVisualization();
	void SetNativeID(const struct FGuid& NativeID);
	void ReceiveRemove();
	void OnRep_Payload();
	void GetMRMesh(class UMRMeshComponent* ReturnValue);
};

// 0xD8 (0x420 - 0x348)
// Class AugmentedReality.ARPlaneComponent
class UARPlaneComponent : public UARComponent
{
public:
	uint8                                        Pad_1EB3[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARPlaneUpdatePayload                 ReplicatedPayload;                                 // 0x350(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARPlaneComponent* GetDefaultObj();

	void SetPlaneComponentDebugMode(enum class EPlaneComponentDebugMode NewDebugMode);
	void SetObjectClassificationDebugColors(TMap<enum class EARObjectClassification, struct FLinearColor> InColors);
	void ServerUpdatePayload(const struct FARPlaneUpdatePayload& NewPayload);
	void ReceiveUpdate(const struct FARPlaneUpdatePayload& Payload);
	void ReceiveAdd(const struct FARPlaneUpdatePayload& Payload);
	void GetObjectClassificationDebugColors(TMap<enum class EARObjectClassification, struct FLinearColor> ReturnValue);
};

// 0x8 (0x350 - 0x348)
// Class AugmentedReality.ARPointComponent
class UARPointComponent : public UARComponent
{
public:
	struct FARPointUpdatePayload                 ReplicatedPayload;                                 // 0x348(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EBC[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARPointComponent* GetDefaultObj();

	void ServerUpdatePayload(const struct FARPointUpdatePayload& NewPayload);
	void ReceiveUpdate(const struct FARPointUpdatePayload& Payload);
	void ReceiveAdd(const struct FARPointUpdatePayload& Payload);
};

// 0x88 (0x3D0 - 0x348)
// Class AugmentedReality.ARFaceComponent
class UARFaceComponent : public UARComponent
{
public:
	enum class EARFaceTransformMixing            TransformSetting;                                  // 0x348(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUpdateVertexNormal;                               // 0x349(0x1)(Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bFaceOutOfScreen;                                  // 0x34A(0x1)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EC4[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARFaceUpdatePayload                  ReplicatedPayload;                                 // 0x350(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EC5[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARFaceComponent* GetDefaultObj();

	void SetFaceComponentDebugMode(enum class EFaceComponentDebugMode NewDebugMode);
	void ServerUpdatePayload(const struct FARFaceUpdatePayload& NewPayload);
	void ReceiveUpdate(const struct FARFaceUpdatePayload& Payload);
	void ReceiveAdd(const struct FARFaceUpdatePayload& Payload);
};

// 0xA8 (0x3F0 - 0x348)
// Class AugmentedReality.ARImageComponent
class UARImageComponent : public UARComponent
{
public:
	uint8                                        Pad_1ED8[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARImageUpdatePayload                 ReplicatedPayload;                                 // 0x350(0xA0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARImageComponent* GetDefaultObj();

	void SetImageComponentDebugMode(enum class EImageComponentDebugMode NewDebugMode);
	void ServerUpdatePayload(const struct FARImageUpdatePayload& NewPayload);
	void ReceiveUpdate(const struct FARImageUpdatePayload& Payload);
	void ReceiveAdd(const struct FARImageUpdatePayload& Payload);
};

// 0xB8 (0x400 - 0x348)
// Class AugmentedReality.ARQRCodeComponent
class UARQRCodeComponent : public UARComponent
{
public:
	uint8                                        Pad_1EEA[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARQRCodeUpdatePayload                ReplicatedPayload;                                 // 0x350(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARQRCodeComponent* GetDefaultObj();

	void SetQRCodeComponentDebugMode(enum class EQRCodeComponentDebugMode NewDebugMode);
	void ServerUpdatePayload(const struct FARQRCodeUpdatePayload& NewPayload);
	void ReceiveUpdate(const struct FARQRCodeUpdatePayload& Payload);
	void ReceiveAdd(const struct FARQRCodeUpdatePayload& Payload);
};

// 0x78 (0x3C0 - 0x348)
// Class AugmentedReality.ARPoseComponent
class UARPoseComponent : public UARComponent
{
public:
	uint8                                        Pad_1F05[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARPoseUpdatePayload                  ReplicatedPayload;                                 // 0x350(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARPoseComponent* GetDefaultObj();

	void SetPoseComponentDebugMode(enum class EPoseComponentDebugMode NewDebugMode);
	void ServerUpdatePayload(const struct FARPoseUpdatePayload& NewPayload);
	void ReceiveUpdate(const struct FARPoseUpdatePayload& Payload);
	void ReceiveAdd(const struct FARPoseUpdatePayload& Payload);
};

// 0x68 (0x3B0 - 0x348)
// Class AugmentedReality.AREnvironmentProbeComponent
class UAREnvironmentProbeComponent : public UARComponent
{
public:
	uint8                                        Pad_1F0A[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAREnvironmentProbeUpdatePayload      ReplicatedPayload;                                 // 0x350(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAREnvironmentProbeComponent* GetDefaultObj();

	void ServerUpdatePayload(const struct FAREnvironmentProbeUpdatePayload& NewPayload);
	void ReceiveUpdate(const struct FAREnvironmentProbeUpdatePayload& Payload);
	void ReceiveAdd(const struct FAREnvironmentProbeUpdatePayload& Payload);
};

// 0x68 (0x3B0 - 0x348)
// Class AugmentedReality.ARObjectComponent
class UARObjectComponent : public UARComponent
{
public:
	uint8                                        Pad_1F14[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARObjectUpdatePayload                ReplicatedPayload;                                 // 0x350(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARObjectComponent* GetDefaultObj();

	void ServerUpdatePayload(const struct FARObjectUpdatePayload& NewPayload);
	void ReceiveUpdate(const struct FARObjectUpdatePayload& Payload);
	void ReceiveAdd(const struct FARObjectUpdatePayload& Payload);
};

// 0x98 (0x3E0 - 0x348)
// Class AugmentedReality.ARMeshComponent
class UARMeshComponent : public UARComponent
{
public:
	uint8                                        Pad_1F1E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARMeshUpdatePayload                  ReplicatedPayload;                                 // 0x350(0x90)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARMeshComponent* GetDefaultObj();

	void ServerUpdatePayload(const struct FARMeshUpdatePayload& NewPayload);
	void ReceiveUpdate(const struct FARMeshUpdatePayload& Payload);
	void ReceiveAdd(const struct FARMeshUpdatePayload& Payload);
};

// 0xA8 (0x3F0 - 0x348)
// Class AugmentedReality.ARGeoAnchorComponent
class UARGeoAnchorComponent : public UARComponent
{
public:
	uint8                                        Pad_1F2C[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARGeoAnchorUpdatePayload             ReplicatedPayload;                                 // 0x350(0xA0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARGeoAnchorComponent* GetDefaultObj();

	void SetGeoAnchorComponentDebugMode(enum class EGeoAnchorComponentDebugMode NewDebugMode);
	void ServerUpdatePayload(const struct FARGeoAnchorUpdatePayload& NewPayload);
	void ReceiveUpdate(const struct FARGeoAnchorUpdatePayload& Payload);
	void ReceiveAdd(const struct FARGeoAnchorUpdatePayload& Payload);
};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARDependencyHandler
class UARDependencyHandler : public UObject
{
public:

	static class UClass* StaticClass();
	static class UARDependencyHandler* GetDefaultObj();

	struct FLatentActionInfo StartARSessionLatent(class UARSessionConfig* SessionConfig);
	struct FLatentActionInfo RequestARSessionPermission(class UARSessionConfig* SessionConfig, enum class EARServicePermissionRequestResult OutPermissionResult);
	struct FLatentActionInfo InstallARService(enum class EARServiceInstallRequestResult OutInstallResult);
	void GetARDependencyHandler(class UARDependencyHandler* ReturnValue);
	struct FLatentActionInfo CheckARServiceAvailability(enum class EARServiceAvailability OutAvailability);
};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARGeoTrackingSupport
class UARGeoTrackingSupport : public UObject
{
public:

	static class UClass* StaticClass();
	static class UARGeoTrackingSupport* GetDefaultObj();

	void GetGeoTrackingSupport(class UARGeoTrackingSupport* ReturnValue);
	void GetGeoTrackingStateReason(enum class EARGeoTrackingStateReason ReturnValue);
	void GetGeoTrackingState(enum class EARGeoTrackingState ReturnValue);
	void GetGeoTrackingAccuracy(enum class EARGeoTrackingAccuracy ReturnValue);
	void AddGeoAnchorAtLocationWithAltitude(float Longitude, float* Latitude, float AltitudeMeters, const class FString& OptionalAnchorName, bool ReturnValue);
	void AddGeoAnchorAtLocation(float Longitude, float* Latitude, const class FString& OptionalAnchorName, bool ReturnValue);
};

// 0x50 (0xA0 - 0x50)
// Class AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x50(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x60(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1FA3[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* GetDefaultObj();

	class FString GeoTrackingAvailabilityDelegate__DelegateSignature(bool* bIsAvailable);
	class UObject* CheckGeoTrackingAvailabilityAtLocation(float Longitude, float* Latitude, class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue);
	class UObject* CheckGeoTrackingAvailability(class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue);
};

// 0x58 (0xA8 - 0x50)
// Class AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x50(0x10)(EditFixedSize, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x60(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1FAD[0x38];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGetGeoLocationAsyncTaskBlueprintProxy* GetDefaultObj();

	class FString GetGeoLocationDelegate__DelegateSignature(float Longitude, float* Latitude, float* Altitude);
	struct FVector GetGeoLocationAtWorldPosition(class UGetGeoLocationAsyncTaskBlueprintProxy* ReturnValue);
};

// 0x38 (0x300 - 0x2C8)
// Class AugmentedReality.ARLifeCycleComponent
class UARLifeCycleComponent : public USceneComponent
{
public:
	FMulticastInlineDelegateProperty_            OnARActorSpawnedDelegate;                          // 0x2C8(0x10)(ExportObject, OutParm, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnARActorToBeDestroyedDelegate;                    // 0x2D8(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1FC1[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARLifeCycleComponent* GetDefaultObj();

	void ServerSpawnARActor(class UClass* ComponentClass, const struct FGuid& NativeID);
	void ServerDestroyARActor(class AARActor** Actor);
	void InstanceARActorToBeDestroyedDelegate__DelegateSignature(class AARActor** Actor);
	void InstanceARActorSpawnedDelegate__DelegateSignature(class UClass* ComponentClass, const struct FGuid& NativeID, class AARActor* SpawnedActor);
};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARLightEstimate
class UARLightEstimate : public UObject
{
public:

	static class UClass* StaticClass();
	static class UARLightEstimate* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class AugmentedReality.ARBasicLightEstimate
class UARBasicLightEstimate : public UARLightEstimate
{
public:
	float                                        AmbientIntensityLumens;                            // 0x28(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        AmbientColorTemperatureKelvin;                     // 0x2C(0x4)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FLinearColor                          AmbientColor;                                      // 0x30(0x10)(BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARBasicLightEstimate* GetDefaultObj();

	void GetAmbientIntensityLumens(float ReturnValue);
	void GetAmbientColorTemperatureKelvin(float ReturnValue);
	void GetAmbientColor(const struct FLinearColor& ReturnValue);
};

// 0x0 (0x4C8 - 0x4C8)
// Class AugmentedReality.AROriginActor
class AAROriginActor : public AActor
{
public:

	static class UClass* StaticClass();
	static class AAROriginActor* GetDefaultObj();

};

// 0x128 (0x150 - 0x28)
// Class AugmentedReality.ARPin
class UARPin : public UObject
{
public:
	class UARTrackedGeometry*                    TrackedGeometry;                                   // 0x28(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	class USceneComponent*                       PinnedComponent;                                   // 0x30(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FD7[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            LocalToTrackingTransform;                          // 0x40(0x60)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FTransform                            LocalToAlignedTrackingTransform;                   // 0xA0(0x60)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EARTrackingState                  TrackingState;                                     // 0x100(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FD8[0x1F];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnARTrackingStateChanged;                          // 0x120(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnARTransformUpdated;                              // 0x130(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FD9[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARPin* GetDefaultObj();

	void GetTrackingState(enum class EARTrackingState ReturnValue);
	void GetTrackedGeometry(class UARTrackedGeometry* ReturnValue);
	void GetPinnedComponent(class USceneComponent* ReturnValue);
	void GetLocalToWorldTransform(const struct FTransform& ReturnValue);
	void GetLocalToTrackingTransform(const struct FTransform& ReturnValue);
	void GetDebugName(class FName ReturnValue);
	void DebugDraw(class UWorld* World, struct FLinearColor* Color, float* Scale, float PersistForSeconds);
};

// 0xE0 (0x110 - 0x30)
// Class AugmentedReality.ARSessionConfig
class UARSessionConfig : public UDataAsset
{
public:
	bool                                         bGenerateMeshDataFromTrackedGeometry;              // 0x30(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bGenerateCollisionForMeshData;                     // 0x31(0x1)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bGenerateNavMeshForMeshData;                       // 0x32(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseMeshDataForOcclusion;                          // 0x33(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bRenderMeshDataInWireframe;                        // 0x34(0x1)(OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bTrackSceneObjects;                                // 0x35(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUsePersonSegmentationForOcclusion;                // 0x36(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseSceneDepthForOcclusion;                        // 0x37(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseAutomaticImageScaleEstimation;                 // 0x38(0x1)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseStandardOnboardingUX;                          // 0x39(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EARWorldAlignment                 WorldAlignment;                                    // 0x3A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EARSessionType                    SessionType;                                       // 0x3B(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	enum class EARPlaneDetectionMode             PlaneDetectionMode;                                // 0x3C(0x1)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bHorizontalPlaneDetection;                         // 0x3D(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bVerticalPlaneDetection;                           // 0x3E(0x1)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableAutoFocus;                                  // 0x3F(0x1)(Edit, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EARLightEstimationMode            LightEstimationMode;                               // 0x40(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EARFrameSyncMode                  FrameSyncMode;                                     // 0x41(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableAutomaticCameraOverlay;                     // 0x42(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableAutomaticCameraTracking;                    // 0x43(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bResetCameraTracking;                              // 0x44(0x1)(Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bResetTrackedObjects;                              // 0x45(0x1)(ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_201A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UARCandidateImage*>             CandidateImages;                                   // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        MaxNumSimultaneousImagesTracked;                   // 0x58(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EAREnvironmentCaptureProbeType    EnvironmentCaptureProbeType;                       // 0x5C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_201C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                WorldMapData;                                      // 0x60(0x10)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class UARCandidateObject*>            CandidateObjects;                                  // 0x70(0x10)(ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FARVideoFormat                        DesiredVideoFormat;                                // 0x80(0xC)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseOptimalVideoFormat;                            // 0x8C(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EARFaceTrackingDirection          FaceTrackingDirection;                             // 0x8D(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EARFaceTrackingUpdate             FaceTrackingUpdate;                                // 0x8E(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_201D[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxNumberOfTrackedFaces;                           // 0x90(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_201E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                SerializedARCandidateImageDatabase;                // 0x98(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EARSessionTrackingFeature         EnabledSessionTrackingFeature;                     // 0xA8(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EARSceneReconstruction            SceneReconstructionMethod;                         // 0xA9(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_201F[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                PlaneComponentClass;                               // 0xB0(0x8)(Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                PointComponentClass;                               // 0xB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                FaceComponentClass;                                // 0xC0(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                ImageComponentClass;                               // 0xC8(0x8)(Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                QRCodeComponentClass;                              // 0xD0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                PoseComponentClass;                                // 0xD8(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                EnvironmentProbeComponentClass;                    // 0xE0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                ObjectComponentClass;                              // 0xE8(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                MeshComponentClass;                                // 0xF0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                GeoAnchorComponentClass;                           // 0xF8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    DefaultMeshMaterial;                               // 0x100(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInterface*                    DefaultWireframeMeshMaterial;                      // 0x108(0x8)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UARSessionConfig* GetDefaultObj();

	void ShouldResetTrackedObjects(bool ReturnValue);
	void ShouldResetCameraTracking(bool ReturnValue);
	void ShouldRenderCameraOverlay(bool ReturnValue);
	void ShouldEnableCameraTracking(bool ReturnValue);
	void ShouldEnableAutoFocus(bool ReturnValue);
	void SetWorldMapData(TArray<uint8>* WorldMapData);
	void SetSessionTrackingFeatureToEnable(enum class EARSessionTrackingFeature* InSessionTrackingFeature);
	void SetSceneReconstructionMethod(enum class EARSceneReconstruction* InSceneReconstructionMethod);
	void SetResetTrackedObjects(bool* bNewValue);
	void SetResetCameraTracking(bool* bNewValue);
	void SetFaceTrackingUpdate(enum class EARFaceTrackingUpdate* InUpdate);
	void SetFaceTrackingDirection(enum class EARFaceTrackingDirection InDirection);
	void SetEnableAutoFocus(bool* bNewValue);
	void SetDesiredVideoFormat(struct FARVideoFormat* NewFormat);
	void SetCandidateObjectList(TArray<class UARCandidateObject*>* InCandidateObjects);
	void GetWorldMapData(const TArray<uint8>& ReturnValue);
	void GetWorldAlignment(enum class EARWorldAlignment ReturnValue);
	void GetSessionType(enum class EARSessionType ReturnValue);
	void GetSceneReconstructionMethod(enum class EARSceneReconstruction ReturnValue);
	void GetPlaneDetectionMode(enum class EARPlaneDetectionMode ReturnValue);
	void GetMaxNumSimultaneousImagesTracked(int32 ReturnValue);
	void GetLightEstimationMode(enum class EARLightEstimationMode ReturnValue);
	void GetFrameSyncMode(enum class EARFrameSyncMode ReturnValue);
	void GetFaceTrackingUpdate(enum class EARFaceTrackingUpdate ReturnValue);
	void GetFaceTrackingDirection(enum class EARFaceTrackingDirection ReturnValue);
	void GetEnvironmentCaptureProbeType(enum class EAREnvironmentCaptureProbeType ReturnValue);
	void GetEnabledSessionTrackingFeature(enum class EARSessionTrackingFeature ReturnValue);
	void GetDesiredVideoFormat(const struct FARVideoFormat& ReturnValue);
	void GetCandidateObjectList(const TArray<class UARCandidateObject*>& ReturnValue);
	void GetCandidateImageList(const TArray<class UARCandidateImage*>& ReturnValue);
	void AddCandidateObject(class UARCandidateObject* CandidateObject);
	void AddCandidateImage(class UARCandidateImage* NewCandidateImage);
};

// 0x68 (0x618 - 0x5B0)
// Class AugmentedReality.ARSharedWorldGameMode
class AARSharedWorldGameMode : public AGameMode
{
public:
	int32                                        BufferSizePerChunk;                                // 0x5B0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2028[0x64];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AARSharedWorldGameMode* GetDefaultObj();

	TArray<uint8> SetPreviewImageData();
	void SetARWorldSharingIsReady();
	TArray<uint8> SetARSharedWorldData();
	void GetARSharedWorldGameState(class AARSharedWorldGameState* ReturnValue);
};

// 0x38 (0x5E8 - 0x5B0)
// Class AugmentedReality.ARSharedWorldGameState
class AARSharedWorldGameState : public AGameState
{
public:
	TArray<uint8>                                PreviewImageData;                                  // 0x5B0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<uint8>                                ARWorldData;                                       // 0x5C0(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        PreviewImageBytesTotal;                            // 0x5D0(0x4)(ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        ARWorldBytesTotal;                                 // 0x5D4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        PreviewImageBytesDelivered;                        // 0x5D8(0x4)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        ARWorldBytesDelivered;                             // 0x5DC(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_202D[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AARSharedWorldGameState* GetDefaultObj();

	void K2_OnARWorldMapIsReady();
};

// 0x8 (0xAC0 - 0xAB8)
// Class AugmentedReality.ARSharedWorldPlayerController
class AARSharedWorldPlayerController : public APlayerController
{
public:
	uint8                                        Pad_203A[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AARSharedWorldPlayerController* GetDefaultObj();

	void ServerMarkReadyForReceiving();
	TArray<uint8> ClientUpdatePreviewImageData(int32 Offset);
	TArray<uint8> ClientUpdateARWorldData(int32 Offset);
	int32 ClientInitSharedWorld();
};

// 0x10 (0x4E8 - 0x4D8)
// Class AugmentedReality.ARSkyLight
class AARSkyLight : public ASkyLight
{
public:
	class UAREnvironmentCaptureProbe*            CaptureProbe;                                      // 0x4D8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_203D[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AARSkyLight* GetDefaultObj();

	class UAREnvironmentCaptureProbe* SetEnvironmentCaptureProbe();
};

// 0x28 (0x200 - 0x1D8)
// Class AugmentedReality.ARTexture
class UARTexture : public UTexture
{
public:
	enum class EARTextureType                    TextureType;                                       // 0x1D8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_203F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Timestamp;                                         // 0x1DC(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FGuid                                 ExternalTextureGuid;                               // 0x1E0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             Size;                                              // 0x1F0(0x10)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config)

	static class UClass* StaticClass();
	static class UARTexture* GetDefaultObj();

};

// 0x0 (0x200 - 0x200)
// Class AugmentedReality.ARTextureCameraImage
class UARTextureCameraImage : public UARTexture
{
public:

	static class UClass* StaticClass();
	static class UARTextureCameraImage* GetDefaultObj();

};

// 0x10 (0x210 - 0x200)
// Class AugmentedReality.ARTextureCameraDepth
class UARTextureCameraDepth : public UARTexture
{
public:
	enum class EARDepthQuality                   DepthQuality;                                      // 0x200(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EARDepthAccuracy                  DepthAccuracy;                                     // 0x201(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bIsTemporallySmoothed;                             // 0x202(0x1)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2043[0xD];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARTextureCameraDepth* GetDefaultObj();

};

// 0x30 (0x2A0 - 0x270)
// Class AugmentedReality.AREnvironmentCaptureProbeTexture
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{
public:
	enum class EARTextureType                    TextureType;                                       // 0x270(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2046[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Timestamp;                                         // 0x274(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, SubobjectReference)
	struct FGuid                                 ExternalTextureGuid;                               // 0x278(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             Size;                                              // 0x288(0x10)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config)
	uint8                                        Pad_2049[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAREnvironmentCaptureProbeTexture* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARTraceResultDummy
class UARTraceResultDummy : public UObject
{
public:

	static class UClass* StaticClass();
	static class UARTraceResultDummy* GetDefaultObj();

};

// 0x130 (0x158 - 0x28)
// Class AugmentedReality.ARTrackedGeometry
class UARTrackedGeometry : public UObject
{
public:
	struct FGuid                                 UniqueID;                                          // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2067[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            LocalToTrackingTransform;                          // 0x40(0x60)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FTransform                            LocalToAlignedTrackingTransform;                   // 0xA0(0x60)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EARTrackingState                  TrackingState;                                     // 0x100(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2068[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	class UMRMeshComponent*                      UnderlyingMesh;                                    // 0x110(0x8)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EARObjectClassification           ObjectClassification;                              // 0x118(0x1)(ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EARSpatialMeshUsageFlags          SpatialMeshUsageFlags;                             // 0x119(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_206C[0x16];                                    // Fixing Size After Last Property  > TateDumper <
	int32                                        LastUpdateFrameNumber;                             // 0x130(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_206D[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  DebugName;                                         // 0x140(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_206E[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARTrackedGeometry* GetDefaultObj();

	void IsTracked(bool ReturnValue);
	enum class EARSpatialMeshUsageFlags HasSpatialMeshUsageFlag(bool ReturnValue);
	void GetUnderlyingMesh(class UMRMeshComponent* ReturnValue);
	void GetTrackingState(enum class EARTrackingState ReturnValue);
	void GetObjectClassification(enum class EARObjectClassification ReturnValue);
	void GetName(const class FString& ReturnValue);
	void GetLocalToWorldTransform(const struct FTransform& ReturnValue);
	void GetLocalToTrackingTransform(const struct FTransform& ReturnValue);
	void GetLastUpdateTimestamp(float ReturnValue);
	void GetLastUpdateFrameNumber(int32 ReturnValue);
	void GetDebugName(class FName ReturnValue);
};

// 0x58 (0x1B0 - 0x158)
// Class AugmentedReality.ARPlaneGeometry
class UARPlaneGeometry : public UARTrackedGeometry
{
public:
	enum class EARPlaneOrientation               Orientation;                                       // 0x158(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, SubobjectReference)
	uint8                                        Pad_2078[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Center;                                            // 0x160(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVector                               Extent;                                            // 0x178(0x18)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<struct FVector>                       BoundaryPolygon;                                   // 0x190(0x10)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UARPlaneGeometry*                      SubsumedBy;                                        // 0x1A0(0x8)(ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_207A[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARPlaneGeometry* GetDefaultObj();

	void GetSubsumedBy(class UARPlaneGeometry* ReturnValue);
	void GetOrientation(enum class EARPlaneOrientation ReturnValue);
	void GetExtent(const struct FVector& ReturnValue);
	void GetCenter(const struct FVector& ReturnValue);
	void GetBoundaryPolygonInLocalSpace(const TArray<struct FVector>& ReturnValue);
};

// 0x8 (0x160 - 0x158)
// Class AugmentedReality.ARTrackedPoint
class UARTrackedPoint : public UARTrackedGeometry
{
public:
	uint8                                        Pad_207D[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARTrackedPoint* GetDefaultObj();

};

// 0x18 (0x170 - 0x158)
// Class AugmentedReality.ARTrackedImage
class UARTrackedImage : public UARTrackedGeometry
{
public:
	class UARCandidateImage*                     DetectedImage;                                     // 0x158(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             EstimatedSize;                                     // 0x160(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UARTrackedImage* GetDefaultObj();

	void GetEstimateSize(const struct FVector2D& ReturnValue);
	void GetDetectedImage(class UARCandidateImage* ReturnValue);
};

// 0x20 (0x190 - 0x170)
// Class AugmentedReality.ARTrackedQRCode
class UARTrackedQRCode : public UARTrackedImage
{
public:
	class FString                                QRCode;                                            // 0x170(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Version;                                           // 0x180(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance)
	uint8                                        Pad_2089[0xC];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARTrackedQRCode* GetDefaultObj();

};

// 0x168 (0x2C0 - 0x158)
// Class AugmentedReality.ARFaceGeometry
class UARFaceGeometry : public UARTrackedGeometry
{
public:
	struct FVector                               LookAtTarget;                                      // 0x158(0x18)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsTracked;                                        // 0x170(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_209D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<enum class EARFaceBlendShape, float>    BlendShapes;                                       // 0x178(0x50)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_209E[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            LeftEyeTransform;                                  // 0x200(0x60)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FTransform                            RightEyeTransform;                                 // 0x260(0x60)(Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARFaceGeometry* GetDefaultObj();

	enum class EAREye GetWorldSpaceEyeTransform(const struct FTransform& ReturnValue);
	enum class EAREye GetLocalSpaceEyeTransform(const struct FTransform& ReturnValue);
	enum class EARFaceBlendShape GetBlendShapeValue(float ReturnValue);
	void GetBlendShapes(TMap<enum class EARFaceBlendShape, float> ReturnValue);
};

// 0x28 (0x180 - 0x158)
// Class AugmentedReality.AREnvironmentCaptureProbe
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{
public:
	struct FVector                               Extent;                                            // 0x158(0x18)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class UAREnvironmentCaptureProbeTexture*     EnvironmentCaptureTexture;                         // 0x170(0x8)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_20A5[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAREnvironmentCaptureProbe* GetDefaultObj();

	void GetExtent(const struct FVector& ReturnValue);
	void GetEnvironmentCaptureTexture(class UAREnvironmentCaptureProbeTexture* ReturnValue);
};

// 0x8 (0x160 - 0x158)
// Class AugmentedReality.ARTrackedObject
class UARTrackedObject : public UARTrackedGeometry
{
public:
	class UARCandidateObject*                    DetectedObject;                                    // 0x158(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARTrackedObject* GetDefaultObj();

	void GetDetectedObject(class UARCandidateObject* ReturnValue);
};

// 0x58 (0x1B0 - 0x158)
// Class AugmentedReality.ARTrackedPose
class UARTrackedPose : public UARTrackedGeometry
{
public:
	struct FARPose3D                             TrackedPose;                                       // 0x158(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_20D7[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARTrackedPose* GetDefaultObj();

	void GetTrackedPoseData(const struct FARPose3D& ReturnValue);
};

// 0x8 (0x160 - 0x158)
// Class AugmentedReality.ARMeshGeometry
class UARMeshGeometry : public UARTrackedGeometry
{
public:
	uint8                                        Pad_20DF[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARMeshGeometry* GetDefaultObj();

	void GetObjectClassificationAtLocation(struct FVector* InWorldLocation, enum class EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation, float* MaxLocationDiff, bool ReturnValue);
};

// 0x18 (0x170 - 0x158)
// Class AugmentedReality.ARGeoAnchor
class UARGeoAnchor : public UARTrackedGeometry
{
public:
	uint8                                        Pad_20EC[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARGeoAnchor* GetDefaultObj();

	void GetLongitude(float ReturnValue);
	void GetLatitude(float ReturnValue);
	void GetAltitudeSource(enum class EARAltitudeSource ReturnValue);
	void GetAltitudeMeters(float ReturnValue);
};

// 0x150 (0x208 - 0xB8)
// Class AugmentedReality.ARTrackableNotifyComponent
class UARTrackableNotifyComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnAddTrackedGeometry;                              // 0xB8(0x10)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedGeometry;                           // 0xC8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedGeometry;                           // 0xD8(0x10)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnAddTrackedPlane;                                 // 0xE8(0x10)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedPlane;                              // 0xF8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedPlane;                              // 0x108(0x10)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnAddTrackedPoint;                                 // 0x118(0x10)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedPoint;                              // 0x128(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedPoint;                              // 0x138(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnAddTrackedImage;                                 // 0x148(0x10)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedImage;                              // 0x158(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedImage;                              // 0x168(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnAddTrackedFace;                                  // 0x178(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedFace;                               // 0x188(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedFace;                               // 0x198(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnAddTrackedEnvProbe;                              // 0x1A8(0x10)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedEnvProbe;                           // 0x1B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedEnvProbe;                           // 0x1C8(0x10)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnAddTrackedObject;                                // 0x1D8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedObject;                             // 0x1E8(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedObject;                             // 0x1F8(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARTrackableNotifyComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARTypesDummyClass
class UARTypesDummyClass : public UObject
{
public:

	static class UClass* StaticClass();
	static class UARTypesDummyClass* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class AugmentedReality.ARCandidateImage
class UARCandidateImage : public UDataAsset
{
public:
	class UTexture2D*                            CandidateTexture;                                  // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FString                                FriendlyName;                                      // 0x38(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	float                                        Width;                                             // 0x48(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	float                                        Height;                                            // 0x4C(0x4)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)
	enum class EARCandidateImageOrientation      Orientation;                                       // 0x50(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, SubobjectReference)
	uint8                                        Pad_210C[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARCandidateImage* GetDefaultObj();

	void GetPhysicalWidth(float ReturnValue);
	void GetPhysicalHeight(float ReturnValue);
	void GetOrientation(enum class EARCandidateImageOrientation ReturnValue);
	void GetFriendlyName(const class FString& ReturnValue);
	void GetCandidateTexture(class UTexture2D* ReturnValue);
};

// 0x58 (0x88 - 0x30)
// Class AugmentedReality.ARCandidateObject
class UARCandidateObject : public UDataAsset
{
public:
	TArray<uint8>                                CandidateObjectData;                               // 0x30(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FString                                FriendlyName;                                      // 0x40(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
	struct FBox                                  BoundingBox;                                       // 0x50(0x38)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UARCandidateObject* GetDefaultObj();

	void SetFriendlyName(class FString* NewName);
	TArray<uint8> SetCandidateObjectData();
	struct FBox SetBoundingBox();
	void GetFriendlyName(const class FString& ReturnValue);
	void GetCandidateObjectData(const TArray<uint8>& ReturnValue);
	void GetBoundingBox(const struct FBox& ReturnValue);
};

}


