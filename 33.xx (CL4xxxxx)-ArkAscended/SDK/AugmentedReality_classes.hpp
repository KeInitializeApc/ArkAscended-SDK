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

	class UClass* AddARComponent(const struct FGuid& NativeID, class UARComponent* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARBlueprintLibrary
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UARBlueprintLibrary* GetDefaultObj();

	void UnpinComponent(class USceneComponent** ComponentToUnpin);
	void ToggleARCapture(bool bOnOff, enum class EARCaptureType* CaptureType, bool ReturnValue);
	void StopARSession();
	class UARSessionConfig* StartARSession();
	void SetEnabledXRCamera(bool bOnOff);
	void SetARWorldScale(float* InWorldScale);
	void SetARWorldOriginLocationAndRotation(const struct FVector& OriginLocation, const struct FRotator& OriginRotation, bool* bIsTransformInWorldSpace, bool* bMaintainUpDirection);
	void SetAlignmentTransform(struct FTransform* InAlignmentTransform);
	void SaveARPinToLocalStore(class FName InSaveName, class UARPin** InPin, bool ReturnValue);
	struct FIntPoint ResizeXRCamera(const struct FIntPoint& ReturnValue);
	void RemovePin(class UARPin** PinToRemove);
	void RemoveARPinFromLocalStore(class FName InSaveName);
	void RemoveAllARPinsFromLocalStore();
	void PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, class FName* DebugName, class UARPin* ReturnValue);
	class UARPin* PinComponentToARPin(class USceneComponent* ComponentToPin, bool ReturnValue);
	void PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry** TrackedGeometry, class FName* DebugName, class UARPin* ReturnValue);
	void PauseARSession();
	void LoadARPinsFromLocalStore(TMap<class FName, class UARPin*> ReturnValue);
	void LineTraceTrackedObjects3D(struct FVector* Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon, const TArray<struct FARTraceResult>& ReturnValue);
	void LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon, const TArray<struct FARTraceResult>& ReturnValue);
	enum class EARSessionType IsSessionTypeSupported(bool ReturnValue);
	enum class EARSessionType IsSessionTrackingFeatureSupported(enum class EARSessionTrackingFeature SessionTrackingFeature, bool ReturnValue);
	enum class EARSessionType IsSceneReconstructionSupported(enum class EARSceneReconstruction SceneReconstructionMethod, bool ReturnValue);
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
	void GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, enum class EARObjectClassification OutClassification, const struct FVector& OutClassificationLocation, float MaxLocationDiff, bool ReturnValue);
	void GetNumberOfTrackedFacesSupported(int32 ReturnValue);
	void GetCurrentLightEstimate(class UARLightEstimate* ReturnValue);
	void GetCameraIntrinsics(const struct FARCameraIntrinsics& OutCameraIntrinsics, bool ReturnValue);
	void GetCameraImage(class UARTextureCameraImage* ReturnValue);
	void GetCameraDepth(class UARTextureCameraDepth* ReturnValue);
	void GetARWorldScale(float ReturnValue);
	void GetARTexture(enum class EARTextureType TextureType, class UARTexture* ReturnValue);
	void GetARSessionStatus(const struct FARSessionStatus& ReturnValue);
	void GetAllTrackedPoses(const TArray<class UARTrackedPose*>& ReturnValue);
	void GetAllTrackedPoints(const TArray<class UARTrackedPoint*>& ReturnValue);
	void GetAllTrackedPlanes(const TArray<class UARPlaneGeometry*>& ReturnValue);
	void GetAllTrackedImages(const TArray<class UARTrackedImage*>& ReturnValue);
	void GetAllTrackedEnvironmentCaptureProbes(const TArray<class UAREnvironmentCaptureProbe*>& ReturnValue);
	void GetAllTracked2DPoses(const TArray<struct FARPose2D>& ReturnValue);
	void GetAllPins(const TArray<class UARPin*>& ReturnValue);
	void GetAllGeometriesByClass(class UClass* GeometryClass, const TArray<class UARTrackedGeometry*>& ReturnValue);
	void GetAllGeometries(const TArray<class UARTrackedGeometry*>& ReturnValue);
	void GetAlignmentTransform(const struct FTransform& ReturnValue);
	class FString FindTrackedPointsByName(const TArray<class UARTrackedPoint*>& ReturnValue);
	void DebugDrawTrackedGeometry(class UARTrackedGeometry** TrackedGeometry, class UObject* WorldContextObject, struct FLinearColor* Color, float OutlineThickness, float PersistForSeconds);
	class UARPin* DebugDrawPin(class UObject* WorldContextObject, struct FLinearColor* Color, float Scale, float PersistForSeconds);
	void CalculateClosestIntersection(const TArray<struct FVector>& StartPoints, const TArray<struct FVector>& EndPoints, const struct FVector& ClosestIntersection);
	struct FTransform CalculateAlignmentTransform(const struct FTransform& TransformInFirstCoordinateSystem, const struct FTransform& TransformInSecondCoordinateSystem);
	bool AddTrackedPointWithName(struct FTransform* WorldTransform, bool ReturnValue);
	float AddRuntimeCandidateImage(class FString* FriendlyName, class UARCandidateImage* ReturnValue);
	void AddManualEnvironmentCaptureProbe(struct FVector* Location, const struct FVector& Extent, bool ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARTraceResultLibrary
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UARTraceResultLibrary* GetDefaultObj();

	void GetTrackedGeometry(const struct FARTraceResult& TraceResult, class UARTrackedGeometry* ReturnValue);
	void GetTraceChannel(const struct FARTraceResult& TraceResult, enum class EARLineTraceChannels ReturnValue);
	void GetLocalTransform(const struct FARTraceResult& TraceResult, const struct FTransform& ReturnValue);
	void GetLocalToWorldTransform(const struct FARTraceResult& TraceResult, const struct FTransform& ReturnValue);
	void GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult, const struct FTransform& ReturnValue);
	void GetDistanceFromCamera(const struct FARTraceResult& TraceResult, float ReturnValue);
};

// 0x20 (0x50 - 0x30)
// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{
public:
	uint8                                        Pad_2B98[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARBaseAsyncTaskBlueprintProxy* GetDefaultObj();

};

// 0x30 (0x80 - 0x50)
// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x50(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B9A[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARSaveWorldAsyncTaskBlueprintProxy* GetDefaultObj();

	void ARSaveWorld(class UObject* WorldContextObject, class UARSaveWorldAsyncTaskBlueprintProxy* ReturnValue);
};

// 0x60 (0xB0 - 0x50)
// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x50(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BA7[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARGetCandidateObjectAsyncTaskBlueprintProxy* GetDefaultObj();

	void ARGetCandidateObject(class UObject* WorldContextObject, struct FVector* Location, const struct FVector& Extent, class UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue);
};

// 0x80 (0x348 - 0x2C8)
// Class AugmentedReality.ARComponent
class UARComponent : public USceneComponent
{
public:
	struct FGuid                                 NativeID;                                          // 0x2C8(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2BB1[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bUseDefaultReplication;                            // 0x308(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BB3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    DefaultMeshMaterial;                               // 0x310(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    DefaultWireframeMeshMaterial;                      // 0x318(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UMRMeshComponent*                      MRMeshComponent;                                   // 0x320(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UARTrackedGeometry*                    MyTrackedGeometry;                                 // 0x328(0x8)(Edit, ExportObject, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BB6[0x18];                                    // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_2BBF[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARPlaneUpdatePayload                 ReplicatedPayload;                                 // 0x350(0xD0)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARPlaneComponent* GetDefaultObj();

	void SetPlaneComponentDebugMode(enum class EPlaneComponentDebugMode* NewDebugMode);
	void SetObjectClassificationDebugColors(TMap<enum class EARObjectClassification, struct FLinearColor>* InColors);
	void ServerUpdatePayload(struct FARPlaneUpdatePayload* NewPayload);
	struct FARPlaneUpdatePayload ReceiveUpdate();
	struct FARPlaneUpdatePayload ReceiveAdd();
	void GetObjectClassificationDebugColors(TMap<enum class EARObjectClassification, struct FLinearColor> ReturnValue);
};

// 0x8 (0x350 - 0x348)
// Class AugmentedReality.ARPointComponent
class UARPointComponent : public UARComponent
{
public:
	struct FARPointUpdatePayload                 ReplicatedPayload;                                 // 0x348(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BC3[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARPointComponent* GetDefaultObj();

	void ServerUpdatePayload(struct FARPointUpdatePayload* NewPayload);
	struct FARPointUpdatePayload ReceiveUpdate();
	struct FARPointUpdatePayload ReceiveAdd();
};

// 0x88 (0x3D0 - 0x348)
// Class AugmentedReality.ARFaceComponent
class UARFaceComponent : public UARComponent
{
public:
	enum class EARFaceTransformMixing            TransformSetting;                                  // 0x348(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUpdateVertexNormal;                               // 0x349(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bFaceOutOfScreen;                                  // 0x34A(0x1)(ConstParm, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BCA[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARFaceUpdatePayload                  ReplicatedPayload;                                 // 0x350(0x60)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BCB[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARFaceComponent* GetDefaultObj();

	void SetFaceComponentDebugMode(enum class EFaceComponentDebugMode* NewDebugMode);
	void ServerUpdatePayload(struct FARFaceUpdatePayload* NewPayload);
	struct FARFaceUpdatePayload ReceiveUpdate();
	struct FARFaceUpdatePayload ReceiveAdd();
};

// 0xA8 (0x3F0 - 0x348)
// Class AugmentedReality.ARImageComponent
class UARImageComponent : public UARComponent
{
public:
	uint8                                        Pad_2BD0[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARImageUpdatePayload                 ReplicatedPayload;                                 // 0x350(0xA0)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARImageComponent* GetDefaultObj();

	void SetImageComponentDebugMode(enum class EImageComponentDebugMode* NewDebugMode);
	void ServerUpdatePayload(struct FARImageUpdatePayload* NewPayload);
	struct FARImageUpdatePayload ReceiveUpdate();
	struct FARImageUpdatePayload ReceiveAdd();
};

// 0xB8 (0x400 - 0x348)
// Class AugmentedReality.ARQRCodeComponent
class UARQRCodeComponent : public UARComponent
{
public:
	uint8                                        Pad_2BD7[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARQRCodeUpdatePayload                ReplicatedPayload;                                 // 0x350(0xB0)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARQRCodeComponent* GetDefaultObj();

	void SetQRCodeComponentDebugMode(enum class EQRCodeComponentDebugMode* NewDebugMode);
	void ServerUpdatePayload(struct FARQRCodeUpdatePayload* NewPayload);
	struct FARQRCodeUpdatePayload ReceiveUpdate();
	struct FARQRCodeUpdatePayload ReceiveAdd();
};

// 0x78 (0x3C0 - 0x348)
// Class AugmentedReality.ARPoseComponent
class UARPoseComponent : public UARComponent
{
public:
	uint8                                        Pad_2BDF[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARPoseUpdatePayload                  ReplicatedPayload;                                 // 0x350(0x70)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARPoseComponent* GetDefaultObj();

	void SetPoseComponentDebugMode(enum class EPoseComponentDebugMode* NewDebugMode);
	void ServerUpdatePayload(struct FARPoseUpdatePayload* NewPayload);
	struct FARPoseUpdatePayload ReceiveUpdate();
	struct FARPoseUpdatePayload ReceiveAdd();
};

// 0x68 (0x3B0 - 0x348)
// Class AugmentedReality.AREnvironmentProbeComponent
class UAREnvironmentProbeComponent : public UARComponent
{
public:
	uint8                                        Pad_2BE5[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAREnvironmentProbeUpdatePayload      ReplicatedPayload;                                 // 0x350(0x60)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAREnvironmentProbeComponent* GetDefaultObj();

	void ServerUpdatePayload(struct FAREnvironmentProbeUpdatePayload* NewPayload);
	struct FAREnvironmentProbeUpdatePayload ReceiveUpdate();
	struct FAREnvironmentProbeUpdatePayload ReceiveAdd();
};

// 0x68 (0x3B0 - 0x348)
// Class AugmentedReality.ARObjectComponent
class UARObjectComponent : public UARComponent
{
public:
	uint8                                        Pad_2BEA[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARObjectUpdatePayload                ReplicatedPayload;                                 // 0x350(0x60)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARObjectComponent* GetDefaultObj();

	void ServerUpdatePayload(struct FARObjectUpdatePayload* NewPayload);
	struct FARObjectUpdatePayload ReceiveUpdate();
	struct FARObjectUpdatePayload ReceiveAdd();
};

// 0x98 (0x3E0 - 0x348)
// Class AugmentedReality.ARMeshComponent
class UARMeshComponent : public UARComponent
{
public:
	uint8                                        Pad_2BF2[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARMeshUpdatePayload                  ReplicatedPayload;                                 // 0x350(0x90)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARMeshComponent* GetDefaultObj();

	void ServerUpdatePayload(struct FARMeshUpdatePayload* NewPayload);
	struct FARMeshUpdatePayload ReceiveUpdate();
	struct FARMeshUpdatePayload ReceiveAdd();
};

// 0xA8 (0x3F0 - 0x348)
// Class AugmentedReality.ARGeoAnchorComponent
class UARGeoAnchorComponent : public UARComponent
{
public:
	uint8                                        Pad_2BF6[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARGeoAnchorUpdatePayload             ReplicatedPayload;                                 // 0x350(0xA0)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARGeoAnchorComponent* GetDefaultObj();

	void SetGeoAnchorComponentDebugMode(enum class EGeoAnchorComponentDebugMode* NewDebugMode);
	void ServerUpdatePayload(struct FARGeoAnchorUpdatePayload* NewPayload);
	struct FARGeoAnchorUpdatePayload ReceiveUpdate();
	struct FARGeoAnchorUpdatePayload ReceiveAdd();
};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARDependencyHandler
class UARDependencyHandler : public UObject
{
public:

	static class UClass* StaticClass();
	static class UARDependencyHandler* GetDefaultObj();

	class UARSessionConfig* StartARSessionLatent(class UObject* WorldContextObject, struct FLatentActionInfo* LatentInfo);
	class UARSessionConfig* RequestARSessionPermission(class UObject* WorldContextObject, struct FLatentActionInfo* LatentInfo, enum class EARServicePermissionRequestResult* OutPermissionResult);
	void InstallARService(class UObject* WorldContextObject, struct FLatentActionInfo* LatentInfo, enum class EARServiceInstallRequestResult* OutInstallResult);
	void GetARDependencyHandler(class UARDependencyHandler* ReturnValue);
	void CheckARServiceAvailability(class UObject* WorldContextObject, struct FLatentActionInfo* LatentInfo, enum class EARServiceAvailability* OutAvailability);
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
	void AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float* AltitudeMeters, class FString* OptionalAnchorName, bool ReturnValue);
	void AddGeoAnchorAtLocation(float Longitude, float Latitude, class FString* OptionalAnchorName, bool ReturnValue);
};

// 0x50 (0xA0 - 0x50)
// Class AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x50(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C1F[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* GetDefaultObj();

	class FString GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable);
	void CheckGeoTrackingAvailabilityAtLocation(class UObject* WorldContextObject, float Longitude, float Latitude, class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue);
	void CheckGeoTrackingAvailability(class UObject* WorldContextObject, class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue);
};

// 0x58 (0xA8 - 0x50)
// Class AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x50(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C24[0x38];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGetGeoLocationAsyncTaskBlueprintProxy* GetDefaultObj();

	class FString GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude);
	struct FVector GetGeoLocationAtWorldPosition(class UObject* WorldContextObject, class UGetGeoLocationAsyncTaskBlueprintProxy* ReturnValue);
};

// 0x38 (0x300 - 0x2C8)
// Class AugmentedReality.ARLifeCycleComponent
class UARLifeCycleComponent : public USceneComponent
{
public:
	FMulticastInlineDelegateProperty_            OnARActorSpawnedDelegate;                          // 0x2C8(0x10)(Edit, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnARActorToBeDestroyedDelegate;                    // 0x2D8(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C28[0x18];                                    // Fixing Size Of Struct > TateDumper <

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
	float                                        AmbientIntensityLumens;                            // 0x28(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        AmbientColorTemperatureKelvin;                     // 0x2C(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FLinearColor                          AmbientColor;                                      // 0x30(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

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
	class UARTrackedGeometry*                    TrackedGeometry;                                   // 0x28(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class USceneComponent*                       PinnedComponent;                                   // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C3D[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            LocalToTrackingTransform;                          // 0x40(0x60)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTransform                            LocalToAlignedTrackingTransform;                   // 0xA0(0x60)(Edit, ExportObject, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARTrackingState                  TrackingState;                                     // 0x100(0x1)(Edit, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C3F[0x1F];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnARTrackingStateChanged;                          // 0x120(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnARTransformUpdated;                              // 0x130(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C40[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARPin* GetDefaultObj();

	void GetTrackingState(enum class EARTrackingState ReturnValue);
	void GetTrackedGeometry(class UARTrackedGeometry* ReturnValue);
	void GetPinnedComponent(class USceneComponent* ReturnValue);
	void GetLocalToWorldTransform(const struct FTransform& ReturnValue);
	void GetLocalToTrackingTransform(const struct FTransform& ReturnValue);
	void GetDebugName(class FName ReturnValue);
	class UWorld* DebugDraw(struct FLinearColor* Color, float Scale, float PersistForSeconds);
};

// 0xE0 (0x110 - 0x30)
// Class AugmentedReality.ARSessionConfig
class UARSessionConfig : public UDataAsset
{
public:
	bool                                         bGenerateMeshDataFromTrackedGeometry;              // 0x30(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bGenerateCollisionForMeshData;                     // 0x31(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bGenerateNavMeshForMeshData;                       // 0x32(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseMeshDataForOcclusion;                          // 0x33(0x1)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bRenderMeshDataInWireframe;                        // 0x34(0x1)(ConstParm, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bTrackSceneObjects;                                // 0x35(0x1)(ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUsePersonSegmentationForOcclusion;                // 0x36(0x1)(ConstParm, BlueprintVisible, Net, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseSceneDepthForOcclusion;                        // 0x37(0x1)(ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseAutomaticImageScaleEstimation;                 // 0x38(0x1)(ConstParm, BlueprintVisible, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseStandardOnboardingUX;                          // 0x39(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARWorldAlignment                 WorldAlignment;                                    // 0x3A(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARSessionType                    SessionType;                                       // 0x3B(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	enum class EARPlaneDetectionMode             PlaneDetectionMode;                                // 0x3C(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bHorizontalPlaneDetection;                         // 0x3D(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bVerticalPlaneDetection;                           // 0x3E(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableAutoFocus;                                  // 0x3F(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARLightEstimationMode            LightEstimationMode;                               // 0x40(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARFrameSyncMode                  FrameSyncMode;                                     // 0x41(0x1)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableAutomaticCameraOverlay;                     // 0x42(0x1)(Net, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableAutomaticCameraTracking;                    // 0x43(0x1)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bResetCameraTracking;                              // 0x44(0x1)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bResetTrackedObjects;                              // 0x45(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C58[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UARCandidateImage*>             CandidateImages;                                   // 0x48(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        MaxNumSimultaneousImagesTracked;                   // 0x58(0x4)(Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EAREnvironmentCaptureProbeType    EnvironmentCaptureProbeType;                       // 0x5C(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C59[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                WorldMapData;                                      // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UARCandidateObject*>            CandidateObjects;                                  // 0x70(0x10)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FARVideoFormat                        DesiredVideoFormat;                                // 0x80(0xC)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseOptimalVideoFormat;                            // 0x8C(0x1)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARFaceTrackingDirection          FaceTrackingDirection;                             // 0x8D(0x1)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARFaceTrackingUpdate             FaceTrackingUpdate;                                // 0x8E(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C5A[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxNumberOfTrackedFaces;                           // 0x90(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C5B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                SerializedARCandidateImageDatabase;                // 0x98(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARSessionTrackingFeature         EnabledSessionTrackingFeature;                     // 0xA8(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARSceneReconstruction            SceneReconstructionMethod;                         // 0xA9(0x1)(ExportObject, BlueprintReadOnly, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C5D[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                PlaneComponentClass;                               // 0xB0(0x8)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                PointComponentClass;                               // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                FaceComponentClass;                                // 0xC0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                ImageComponentClass;                               // 0xC8(0x8)(ConstParm, EditFixedSize, Parm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                QRCodeComponentClass;                              // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                PoseComponentClass;                                // 0xD8(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                EnvironmentProbeComponentClass;                    // 0xE0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                ObjectComponentClass;                              // 0xE8(0x8)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                MeshComponentClass;                                // 0xF0(0x8)(ExportObject, Parm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                GeoAnchorComponentClass;                           // 0xF8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    DefaultMeshMaterial;                               // 0x100(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    DefaultWireframeMeshMaterial;                      // 0x108(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARSessionConfig* GetDefaultObj();

	void ShouldResetTrackedObjects(bool ReturnValue);
	void ShouldResetCameraTracking(bool ReturnValue);
	void ShouldRenderCameraOverlay(bool ReturnValue);
	void ShouldEnableCameraTracking(bool ReturnValue);
	void ShouldEnableAutoFocus(bool ReturnValue);
	void SetWorldMapData(const TArray<uint8>& WorldMapData);
	void SetSessionTrackingFeatureToEnable(enum class EARSessionTrackingFeature InSessionTrackingFeature);
	void SetSceneReconstructionMethod(enum class EARSceneReconstruction InSceneReconstructionMethod);
	bool SetResetTrackedObjects();
	bool SetResetCameraTracking();
	void SetFaceTrackingUpdate(enum class EARFaceTrackingUpdate InUpdate);
	void SetFaceTrackingDirection(enum class EARFaceTrackingDirection InDirection);
	bool SetEnableAutoFocus();
	void SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat);
	void SetCandidateObjectList(const TArray<class UARCandidateObject*>& InCandidateObjects);
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
	int32                                        BufferSizePerChunk;                                // 0x5B0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C64[0x64];                                    // Fixing Size Of Struct > TateDumper <

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
	TArray<uint8>                                PreviewImageData;                                  // 0x5B0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<uint8>                                ARWorldData;                                       // 0x5C0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        PreviewImageBytesTotal;                            // 0x5D0(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ARWorldBytesTotal;                                 // 0x5D4(0x4)(EditFixedSize, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        PreviewImageBytesDelivered;                        // 0x5D8(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ARWorldBytesDelivered;                             // 0x5DC(0x4)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C68[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AARSharedWorldGameState* GetDefaultObj();

	void K2_OnARWorldMapIsReady();
};

// 0x8 (0xAB8 - 0xAB0)
// Class AugmentedReality.ARSharedWorldPlayerController
class AARSharedWorldPlayerController : public APlayerController
{
public:
	uint8                                        Pad_2C6C[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AARSharedWorldPlayerController* GetDefaultObj();

	void ServerMarkReadyForReceiving();
	int32 ClientUpdatePreviewImageData(const TArray<uint8>& Buffer);
	int32 ClientUpdateARWorldData(const TArray<uint8>& Buffer);
	int32 ClientInitSharedWorld();
};

// 0x10 (0x4E8 - 0x4D8)
// Class AugmentedReality.ARSkyLight
class AARSkyLight : public ASkyLight
{
public:
	class UAREnvironmentCaptureProbe*            CaptureProbe;                                      // 0x4D8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C70[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AARSkyLight* GetDefaultObj();

	class UAREnvironmentCaptureProbe* SetEnvironmentCaptureProbe();
};

// 0x28 (0x200 - 0x1D8)
// Class AugmentedReality.ARTexture
class UARTexture : public UTexture
{
public:
	enum class EARTextureType                    TextureType;                                       // 0x1D8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C73[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Timestamp;                                         // 0x1DC(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FGuid                                 ExternalTextureGuid;                               // 0x1E0(0x10)(OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             Size;                                              // 0x1F0(0x10)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)

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
	enum class EARDepthQuality                   DepthQuality;                                      // 0x200(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARDepthAccuracy                  DepthAccuracy;                                     // 0x201(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIsTemporallySmoothed;                             // 0x202(0x1)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C75[0xD];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARTextureCameraDepth* GetDefaultObj();

};

// 0x30 (0x2A0 - 0x270)
// Class AugmentedReality.AREnvironmentCaptureProbeTexture
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{
public:
	enum class EARTextureType                    TextureType;                                       // 0x270(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C76[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Timestamp;                                         // 0x274(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FGuid                                 ExternalTextureGuid;                               // 0x278(0x10)(OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             Size;                                              // 0x288(0x10)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	uint8                                        Pad_2C77[0x8];                                     // Fixing Size Of Struct > TateDumper <

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
	struct FGuid                                 UniqueID;                                          // 0x28(0x10)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2C7D[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            LocalToTrackingTransform;                          // 0x40(0x60)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTransform                            LocalToAlignedTrackingTransform;                   // 0xA0(0x60)(Edit, ExportObject, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARTrackingState                  TrackingState;                                     // 0x100(0x1)(Edit, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C7E[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	class UMRMeshComponent*                      UnderlyingMesh;                                    // 0x110(0x8)(ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARObjectClassification           ObjectClassification;                              // 0x118(0x1)(BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EARSpatialMeshUsageFlags          SpatialMeshUsageFlags;                             // 0x119(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C7F[0x16];                                    // Fixing Size After Last Property  > TateDumper <
	int32                                        LastUpdateFrameNumber;                             // 0x130(0x4)(ConstParm, ExportObject, Net, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C80[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  DebugName;                                         // 0x140(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C81[0x10];                                    // Fixing Size Of Struct > TateDumper <

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
	enum class EARPlaneOrientation               Orientation;                                       // 0x158(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_2C83[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Center;                                            // 0x160(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	struct FVector                               Extent;                                            // 0x178(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<struct FVector>                       BoundaryPolygon;                                   // 0x190(0x10)(BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UARPlaneGeometry*                      SubsumedBy;                                        // 0x1A0(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C84[0x8];                                     // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_2C85[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARTrackedPoint* GetDefaultObj();

};

// 0x18 (0x170 - 0x158)
// Class AugmentedReality.ARTrackedImage
class UARTrackedImage : public UARTrackedGeometry
{
public:
	class UARCandidateImage*                     DetectedImage;                                     // 0x158(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             EstimatedSize;                                     // 0x160(0x10)(Edit, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

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
	class FString                                QRCode;                                            // 0x170(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        Version;                                           // 0x180(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnInstance)
	uint8                                        Pad_2C87[0xC];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARTrackedQRCode* GetDefaultObj();

};

// 0x168 (0x2C0 - 0x158)
// Class AugmentedReality.ARFaceGeometry
class UARFaceGeometry : public UARTrackedGeometry
{
public:
	struct FVector                               LookAtTarget;                                      // 0x158(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bIsTracked;                                        // 0x170(0x1)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C8E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<enum class EARFaceBlendShape, float>    BlendShapes;                                       // 0x178(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C8F[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            LeftEyeTransform;                                  // 0x200(0x60)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTransform                            RightEyeTransform;                                 // 0x260(0x60)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

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
	struct FVector                               Extent;                                            // 0x158(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UAREnvironmentCaptureProbeTexture*     EnvironmentCaptureTexture;                         // 0x170(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C92[0x8];                                     // Fixing Size Of Struct > TateDumper <

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
	class UARCandidateObject*                    DetectedObject;                                    // 0x158(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARTrackedObject* GetDefaultObj();

	void GetDetectedObject(class UARCandidateObject* ReturnValue);
};

// 0x58 (0x1B0 - 0x158)
// Class AugmentedReality.ARTrackedPose
class UARTrackedPose : public UARTrackedGeometry
{
public:
	struct FARPose3D                             TrackedPose;                                       // 0x158(0x50)(Edit, Net, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C94[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARTrackedPose* GetDefaultObj();

	void GetTrackedPoseData(const struct FARPose3D& ReturnValue);
};

// 0x8 (0x160 - 0x158)
// Class AugmentedReality.ARMeshGeometry
class UARMeshGeometry : public UARTrackedGeometry
{
public:
	uint8                                        Pad_2C99[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARMeshGeometry* GetDefaultObj();

	void GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, enum class EARObjectClassification OutClassification, const struct FVector& OutClassificationLocation, float MaxLocationDiff, bool ReturnValue);
};

// 0x18 (0x170 - 0x158)
// Class AugmentedReality.ARGeoAnchor
class UARGeoAnchor : public UARTrackedGeometry
{
public:
	uint8                                        Pad_2C9D[0x18];                                    // Fixing Size Of Struct > TateDumper <

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
	FMulticastInlineDelegateProperty_            OnAddTrackedGeometry;                              // 0xB8(0x10)(ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedGeometry;                           // 0xC8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedGeometry;                           // 0xD8(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnAddTrackedPlane;                                 // 0xE8(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedPlane;                              // 0xF8(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedPlane;                              // 0x108(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnAddTrackedPoint;                                 // 0x118(0x10)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedPoint;                              // 0x128(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedPoint;                              // 0x138(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnAddTrackedImage;                                 // 0x148(0x10)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedImage;                              // 0x158(0x10)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedImage;                              // 0x168(0x10)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnAddTrackedFace;                                  // 0x178(0x10)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedFace;                               // 0x188(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedFace;                               // 0x198(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnAddTrackedEnvProbe;                              // 0x1A8(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedEnvProbe;                           // 0x1B8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedEnvProbe;                           // 0x1C8(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnAddTrackedObject;                                // 0x1D8(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedObject;                             // 0x1E8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedObject;                             // 0x1F8(0x10)(ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

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
	class UTexture2D*                            CandidateTexture;                                  // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                FriendlyName;                                      // 0x38(0x10)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	float                                        Width;                                             // 0x48(0x4)(ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
	float                                        Height;                                            // 0x4C(0x4)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
	enum class EARCandidateImageOrientation      Orientation;                                       // 0x50(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_2CB2[0x7];                                     // Fixing Size Of Struct > TateDumper <

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
	TArray<uint8>                                CandidateObjectData;                               // 0x30(0x10)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                FriendlyName;                                      // 0x40(0x10)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FBox                                  BoundingBox;                                       // 0x50(0x38)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARCandidateObject* GetDefaultObj();

	void SetFriendlyName(const class FString& NewName);
	TArray<uint8> SetCandidateObjectData();
	struct FBox SetBoundingBox();
	void GetFriendlyName(const class FString& ReturnValue);
	void GetCandidateObjectData(const TArray<uint8>& ReturnValue);
	void GetBoundingBox(const struct FBox& ReturnValue);
};

}


