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

	class UARComponent* AddARComponent(class UClass* InComponentClass);
};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARBlueprintLibrary
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UARBlueprintLibrary* GetDefaultObj();

	void UnpinComponent(class USceneComponent** ComponentToUnpin);
	bool ToggleARCapture(enum class EARCaptureType* CaptureType);
	void StopARSession();
	void StartARSession(class UARSessionConfig* SessionConfig);
	bool SetEnabledXRCamera();
	void SetARWorldScale(float* InWorldScale);
	void SetARWorldOriginLocationAndRotation(const struct FVector& OriginLocation, const struct FRotator& OriginRotation, bool* bIsTransformInWorldSpace, bool* bMaintainUpDirection);
	void SetAlignmentTransform(struct FTransform* InAlignmentTransform);
	bool SaveARPinToLocalStore(class FName* InSaveName, class UARPin** InPin);
	struct FIntPoint ResizeXRCamera(const struct FIntPoint& InSize);
	void RemovePin(class UARPin** PinToRemove);
	void RemoveARPinFromLocalStore(class FName* InSaveName);
	void RemoveAllARPinsFromLocalStore();
	class UARPin* PinComponentToTraceResult(class USceneComponent** ComponentToPin, struct FARTraceResult* TraceResult);
	bool PinComponentToARPin(class USceneComponent** ComponentToPin, class UARPin** Pin);
	class UARPin* PinComponent(class USceneComponent** ComponentToPin, struct FTransform* PinToWorldTransform);
	void PauseARSession();
	TMap<class FName, class UARPin*> LoadARPinsFromLocalStore();
	TArray<struct FARTraceResult> LineTraceTrackedObjects3D(struct FVector* Start, const struct FVector& End, bool* bTestFeaturePoints, bool* bTestGroundPlane, bool* bTestPlaneExtents, bool* bTestPlaneBoundaryPolygon);
	TArray<struct FARTraceResult> LineTraceTrackedObjects(struct FVector2D* ScreenCoord, bool* bTestFeaturePoints, bool* bTestGroundPlane, bool* bTestPlaneExtents, bool* bTestPlaneBoundaryPolygon);
	bool IsSessionTypeSupported(enum class EARSessionType SessionType);
	bool IsSessionTrackingFeatureSupported(enum class EARSessionType SessionType, enum class EARSessionTrackingFeature* SessionTrackingFeature);
	bool IsSceneReconstructionSupported(enum class EARSessionType SessionType, enum class EARSceneReconstruction* SceneReconstructionMethod);
	bool IsARSupported();
	bool IsARPinLocalStoreSupported();
	bool IsARPinLocalStoreReady();
	enum class EARWorldMappingState GetWorldMappingStatus();
	enum class EARTrackingQualityReason GetTrackingQualityReason();
	enum class EARTrackingQuality GetTrackingQuality();
	TArray<struct FARVideoFormat> GetSupportedVideoFormats(enum class EARSessionType SessionType);
	class UARSessionConfig* GetSessionConfig();
	TArray<struct FVector> GetPointCloud();
	class UARTexture* GetPersonSegmentationImage();
	class UARTexture* GetPersonSegmentationDepthImage();
	bool GetObjectClassificationAtLocation(struct FVector* InWorldLocation, enum class EARObjectClassification* OutClassification, const struct FVector& OutClassificationLocation, float MaxLocationDiff);
	int32 GetNumberOfTrackedFacesSupported();
	class UARLightEstimate* GetCurrentLightEstimate();
	bool GetCameraIntrinsics(const struct FARCameraIntrinsics& OutCameraIntrinsics);
	class UARTextureCameraImage* GetCameraImage();
	class UARTextureCameraDepth* GetCameraDepth();
	float GetARWorldScale();
	class UARTexture* GetARTexture(enum class EARTextureType TextureType);
	struct FARSessionStatus GetARSessionStatus();
	TArray<class UARTrackedPose*> GetAllTrackedPoses();
	TArray<class UARTrackedPoint*> GetAllTrackedPoints();
	TArray<class UARPlaneGeometry*> GetAllTrackedPlanes();
	TArray<class UARTrackedImage*> GetAllTrackedImages();
	TArray<class UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes();
	TArray<struct FARPose2D> GetAllTracked2DPoses();
	TArray<class UARPin*> GetAllPins();
	TArray<class UARTrackedGeometry*> GetAllGeometriesByClass(class UClass* GeometryClass);
	TArray<class UARTrackedGeometry*> GetAllGeometries();
	struct FTransform GetAlignmentTransform();
	TArray<class UARTrackedPoint*> FindTrackedPointsByName(const class FString& PointName);
	class UObject* DebugDrawTrackedGeometry(struct FLinearColor* Color, float OutlineThickness, float PersistForSeconds);
	class UObject* DebugDrawPin(class UARPin* ARPin, struct FLinearColor* Color, float Scale, float PersistForSeconds);
	void CalculateClosestIntersection(const TArray<struct FVector>& StartPoints, const TArray<struct FVector>& EndPoints, const struct FVector& ClosestIntersection);
	void CalculateAlignmentTransform(const struct FTransform& TransformInFirstCoordinateSystem, const struct FTransform& TransformInSecondCoordinateSystem, const struct FTransform& AlignmentTransform);
	bool AddTrackedPointWithName(const class FString& PointName, bool bDeletePointsWithSameName);
	class UARCandidateImage* AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, class FString* FriendlyName, float PhysicalWidth);
	bool AddManualEnvironmentCaptureProbe(struct FVector* Location);
};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARTraceResultLibrary
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UARTraceResultLibrary* GetDefaultObj();

	class UARTrackedGeometry* GetTrackedGeometry(struct FARTraceResult* TraceResult);
	enum class EARLineTraceChannels GetTraceChannel(struct FARTraceResult* TraceResult);
	struct FTransform GetLocalTransform(struct FARTraceResult* TraceResult);
	struct FTransform GetLocalToWorldTransform(struct FARTraceResult* TraceResult);
	struct FTransform GetLocalToTrackingTransform(struct FARTraceResult* TraceResult);
	float GetDistanceFromCamera(struct FARTraceResult* TraceResult);
};

// 0x20 (0x50 - 0x30)
// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{
public:
	uint8                                        Pad_2A4C[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARBaseAsyncTaskBlueprintProxy* GetDefaultObj();

};

// 0x30 (0x80 - 0x50)
// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x50(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x60(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2A50[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARSaveWorldAsyncTaskBlueprintProxy* GetDefaultObj();

	class UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld();
};

// 0x60 (0xB0 - 0x50)
// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x50(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x60(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2A56[0x40];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARGetCandidateObjectAsyncTaskBlueprintProxy* GetDefaultObj();

	class UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(struct FVector* Location);
};

// 0x80 (0x348 - 0x2C8)
// Class AugmentedReality.ARComponent
class UARComponent : public USceneComponent
{
public:
	struct FGuid                                 NativeID;                                          // 0x2C8(0x10)(Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2A62[0x30];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bUseDefaultReplication;                            // 0x308(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A64[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    DefaultMeshMaterial;                               // 0x310(0x8)(Edit, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    DefaultWireframeMeshMaterial;                      // 0x318(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UMRMeshComponent*                      MRMeshComponent;                                   // 0x320(0x8)(EditFixedSize, ReturnParm, Transient, Config, GlobalConfig)
	class UARTrackedGeometry*                    MyTrackedGeometry;                                 // 0x328(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A66[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARComponent* GetDefaultObj();

	void UpdateVisualization();
	struct FGuid SetNativeID();
	void ReceiveRemove();
	void OnRep_Payload();
	class UMRMeshComponent* GetMRMesh();
};

// 0xD8 (0x420 - 0x348)
// Class AugmentedReality.ARPlaneComponent
class UARPlaneComponent : public UARComponent
{
public:
	uint8                                        Pad_2A70[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARPlaneUpdatePayload                 ReplicatedPayload;                                 // 0x350(0xD0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARPlaneComponent* GetDefaultObj();

	void SetPlaneComponentDebugMode(enum class EPlaneComponentDebugMode* NewDebugMode);
	void SetObjectClassificationDebugColors(TMap<enum class EARObjectClassification, struct FLinearColor>* InColors);
	void ServerUpdatePayload(struct FARPlaneUpdatePayload* NewPayload);
	struct FARPlaneUpdatePayload ReceiveUpdate();
	struct FARPlaneUpdatePayload ReceiveAdd();
	TMap<enum class EARObjectClassification, struct FLinearColor> GetObjectClassificationDebugColors();
};

// 0x8 (0x350 - 0x348)
// Class AugmentedReality.ARPointComponent
class UARPointComponent : public UARComponent
{
public:
	struct FARPointUpdatePayload                 ReplicatedPayload;                                 // 0x348(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A75[0x7];                                     // Fixing Size Of Struct > TateDumper <

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
	enum class EARFaceTransformMixing            TransformSetting;                                  // 0x348(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUpdateVertexNormal;                               // 0x349(0x1)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bFaceOutOfScreen;                                  // 0x34A(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A7D[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARFaceUpdatePayload                  ReplicatedPayload;                                 // 0x350(0x60)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A7E[0x20];                                    // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_2A85[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARImageUpdatePayload                 ReplicatedPayload;                                 // 0x350(0xA0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

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
	uint8                                        Pad_2A91[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARQRCodeUpdatePayload                ReplicatedPayload;                                 // 0x350(0xB0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

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
	uint8                                        Pad_2A99[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARPoseUpdatePayload                  ReplicatedPayload;                                 // 0x350(0x70)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

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
	uint8                                        Pad_2AA1[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAREnvironmentProbeUpdatePayload      ReplicatedPayload;                                 // 0x350(0x60)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

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
	uint8                                        Pad_2AAA[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARObjectUpdatePayload                ReplicatedPayload;                                 // 0x350(0x60)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

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
	uint8                                        Pad_2AAD[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARMeshUpdatePayload                  ReplicatedPayload;                                 // 0x350(0x90)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

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
	uint8                                        Pad_2AAF[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FARGeoAnchorUpdatePayload             ReplicatedPayload;                                 // 0x350(0xA0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

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

	struct FLatentActionInfo StartARSessionLatent(class UARSessionConfig* SessionConfig);
	struct FLatentActionInfo RequestARSessionPermission(class UARSessionConfig* SessionConfig, enum class EARServicePermissionRequestResult OutPermissionResult);
	struct FLatentActionInfo InstallARService(enum class EARServiceInstallRequestResult OutInstallResult);
	class UARDependencyHandler* GetARDependencyHandler();
	struct FLatentActionInfo CheckARServiceAvailability(enum class EARServiceAvailability OutAvailability);
};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARGeoTrackingSupport
class UARGeoTrackingSupport : public UObject
{
public:

	static class UClass* StaticClass();
	static class UARGeoTrackingSupport* GetDefaultObj();

	class UARGeoTrackingSupport* GetGeoTrackingSupport();
	enum class EARGeoTrackingStateReason GetGeoTrackingStateReason();
	enum class EARGeoTrackingState GetGeoTrackingState();
	enum class EARGeoTrackingAccuracy GetGeoTrackingAccuracy();
	bool AddGeoAnchorAtLocationWithAltitude(const class FString& OptionalAnchorName);
	bool AddGeoAnchorAtLocation(const class FString& OptionalAnchorName);
};

// 0x50 (0xA0 - 0x50)
// Class AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x50(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x60(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2ACF[0x30];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* GetDefaultObj();

	class FString GeoTrackingAvailabilityDelegate__DelegateSignature();
	class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation();
	class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability();
};

// 0x58 (0xA8 - 0x50)
// Class AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x50(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x60(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2AD5[0x38];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGetGeoLocationAsyncTaskBlueprintProxy* GetDefaultObj();

	class FString GetGeoLocationDelegate__DelegateSignature();
	class UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition();
};

// 0x38 (0x300 - 0x2C8)
// Class AugmentedReality.ARLifeCycleComponent
class UARLifeCycleComponent : public USceneComponent
{
public:
	FMulticastInlineDelegateProperty_            OnARActorSpawnedDelegate;                          // 0x2C8(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnARActorToBeDestroyedDelegate;                    // 0x2D8(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2ADF[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARLifeCycleComponent* GetDefaultObj();

	struct FGuid ServerSpawnARActor();
	void ServerDestroyARActor(class AARActor** Actor);
	void InstanceARActorToBeDestroyedDelegate__DelegateSignature(class AARActor** Actor);
	class AARActor* InstanceARActorSpawnedDelegate__DelegateSignature();
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
	float                                        AmbientIntensityLumens;                            // 0x28(0x4)(Net, EditFixedSize, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        AmbientColorTemperatureKelvin;                     // 0x2C(0x4)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FLinearColor                          AmbientColor;                                      // 0x30(0x10)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARBasicLightEstimate* GetDefaultObj();

	float GetAmbientIntensityLumens();
	float GetAmbientColorTemperatureKelvin();
	struct FLinearColor GetAmbientColor();
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
	class UARTrackedGeometry*                    TrackedGeometry;                                   // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	class USceneComponent*                       PinnedComponent;                                   // 0x30(0x8)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2AEC[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            LocalToTrackingTransform;                          // 0x40(0x60)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTransform                            LocalToAlignedTrackingTransform;                   // 0xA0(0x60)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARTrackingState                  TrackingState;                                     // 0x100(0x1)(BlueprintVisible, Parm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2AEF[0x1F];                                    // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnARTrackingStateChanged;                          // 0x120(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnARTransformUpdated;                              // 0x130(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2AF0[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARPin* GetDefaultObj();

	enum class EARTrackingState GetTrackingState();
	class UARTrackedGeometry* GetTrackedGeometry();
	class USceneComponent* GetPinnedComponent();
	struct FTransform GetLocalToWorldTransform();
	struct FTransform GetLocalToTrackingTransform();
	class FName GetDebugName();
	class UWorld* DebugDraw(struct FLinearColor* Color, float Scale, float PersistForSeconds);
};

// 0xE0 (0x110 - 0x30)
// Class AugmentedReality.ARSessionConfig
class UARSessionConfig : public UDataAsset
{
public:
	bool                                         bGenerateMeshDataFromTrackedGeometry;              // 0x30(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bGenerateCollisionForMeshData;                     // 0x31(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bGenerateNavMeshForMeshData;                       // 0x32(0x1)(Net, EditFixedSize, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseMeshDataForOcclusion;                          // 0x33(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bRenderMeshDataInWireframe;                        // 0x34(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bTrackSceneObjects;                                // 0x35(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUsePersonSegmentationForOcclusion;                // 0x36(0x1)(Edit, ExportObject, Net, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseSceneDepthForOcclusion;                        // 0x37(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseAutomaticImageScaleEstimation;                 // 0x38(0x1)(Edit, ExportObject, Parm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseStandardOnboardingUX;                          // 0x39(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARWorldAlignment                 WorldAlignment;                                    // 0x3A(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARSessionType                    SessionType;                                       // 0x3B(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	enum class EARPlaneDetectionMode             PlaneDetectionMode;                                // 0x3C(0x1)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bHorizontalPlaneDetection;                         // 0x3D(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bVerticalPlaneDetection;                           // 0x3E(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableAutoFocus;                                  // 0x3F(0x1)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARLightEstimationMode            LightEstimationMode;                               // 0x40(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARFrameSyncMode                  FrameSyncMode;                                     // 0x41(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableAutomaticCameraOverlay;                     // 0x42(0x1)(Edit, ConstParm, Net, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bEnableAutomaticCameraTracking;                    // 0x43(0x1)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bResetCameraTracking;                              // 0x44(0x1)(ExportObject, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bResetTrackedObjects;                              // 0x45(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B1C[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UARCandidateImage*>             CandidateImages;                                   // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        MaxNumSimultaneousImagesTracked;                   // 0x58(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EAREnvironmentCaptureProbeType    EnvironmentCaptureProbeType;                       // 0x5C(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B21[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                WorldMapData;                                      // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UARCandidateObject*>            CandidateObjects;                                  // 0x70(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FARVideoFormat                        DesiredVideoFormat;                                // 0x80(0xC)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseOptimalVideoFormat;                            // 0x8C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARFaceTrackingDirection          FaceTrackingDirection;                             // 0x8D(0x1)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARFaceTrackingUpdate             FaceTrackingUpdate;                                // 0x8E(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B25[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxNumberOfTrackedFaces;                           // 0x90(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B26[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                SerializedARCandidateImageDatabase;                // 0x98(0x10)(Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARSessionTrackingFeature         EnabledSessionTrackingFeature;                     // 0xA8(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARSceneReconstruction            SceneReconstructionMethod;                         // 0xA9(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B27[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                PlaneComponentClass;                               // 0xB0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                PointComponentClass;                               // 0xB8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                FaceComponentClass;                                // 0xC0(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                ImageComponentClass;                               // 0xC8(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                QRCodeComponentClass;                              // 0xD0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                PoseComponentClass;                                // 0xD8(0x8)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                EnvironmentProbeComponentClass;                    // 0xE0(0x8)(Net, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                ObjectComponentClass;                              // 0xE8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                MeshComponentClass;                                // 0xF0(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UClass*                                GeoAnchorComponentClass;                           // 0xF8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    DefaultMeshMaterial;                               // 0x100(0x8)(Edit, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    DefaultWireframeMeshMaterial;                      // 0x108(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARSessionConfig* GetDefaultObj();

	bool ShouldResetTrackedObjects();
	bool ShouldResetCameraTracking();
	bool ShouldRenderCameraOverlay();
	bool ShouldEnableCameraTracking();
	bool ShouldEnableAutoFocus();
	void SetWorldMapData(const TArray<uint8>& WorldMapData);
	void SetSessionTrackingFeatureToEnable(enum class EARSessionTrackingFeature InSessionTrackingFeature);
	void SetSceneReconstructionMethod(enum class EARSceneReconstruction InSceneReconstructionMethod);
	void SetResetTrackedObjects(bool bNewValue);
	void SetResetCameraTracking(bool bNewValue);
	void SetFaceTrackingUpdate(enum class EARFaceTrackingUpdate InUpdate);
	enum class EARFaceTrackingDirection SetFaceTrackingDirection();
	void SetEnableAutoFocus(bool bNewValue);
	void SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat);
	void SetCandidateObjectList(const TArray<class UARCandidateObject*>& InCandidateObjects);
	TArray<uint8> GetWorldMapData();
	enum class EARWorldAlignment GetWorldAlignment();
	enum class EARSessionType GetSessionType();
	enum class EARSceneReconstruction GetSceneReconstructionMethod();
	enum class EARPlaneDetectionMode GetPlaneDetectionMode();
	int32 GetMaxNumSimultaneousImagesTracked();
	enum class EARLightEstimationMode GetLightEstimationMode();
	enum class EARFrameSyncMode GetFrameSyncMode();
	enum class EARFaceTrackingUpdate GetFaceTrackingUpdate();
	enum class EARFaceTrackingDirection GetFaceTrackingDirection();
	enum class EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();
	enum class EARSessionTrackingFeature GetEnabledSessionTrackingFeature();
	struct FARVideoFormat GetDesiredVideoFormat();
	TArray<class UARCandidateObject*> GetCandidateObjectList();
	TArray<class UARCandidateImage*> GetCandidateImageList();
	void AddCandidateObject(class UARCandidateObject* CandidateObject);
	void AddCandidateImage(class UARCandidateImage* NewCandidateImage);
};

// 0x68 (0x618 - 0x5B0)
// Class AugmentedReality.ARSharedWorldGameMode
class AARSharedWorldGameMode : public AGameMode
{
public:
	int32                                        BufferSizePerChunk;                                // 0x5B0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B31[0x64];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AARSharedWorldGameMode* GetDefaultObj();

	TArray<uint8> SetPreviewImageData();
	void SetARWorldSharingIsReady();
	TArray<uint8> SetARSharedWorldData();
	class AARSharedWorldGameState* GetARSharedWorldGameState();
};

// 0x38 (0x5E8 - 0x5B0)
// Class AugmentedReality.ARSharedWorldGameState
class AARSharedWorldGameState : public AGameState
{
public:
	TArray<uint8>                                PreviewImageData;                                  // 0x5B0(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<uint8>                                ARWorldData;                                       // 0x5C0(0x10)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        PreviewImageBytesTotal;                            // 0x5D0(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ARWorldBytesTotal;                                 // 0x5D4(0x4)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        PreviewImageBytesDelivered;                        // 0x5D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        ARWorldBytesDelivered;                             // 0x5DC(0x4)(Edit, ExportObject, Net, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B36[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AARSharedWorldGameState* GetDefaultObj();

	void K2_OnARWorldMapIsReady();
};

// 0x8 (0xAB8 - 0xAB0)
// Class AugmentedReality.ARSharedWorldPlayerController
class AARSharedWorldPlayerController : public APlayerController
{
public:
	uint8                                        Pad_2B3F[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AARSharedWorldPlayerController* GetDefaultObj();

	void ServerMarkReadyForReceiving();
	TArray<uint8> ClientUpdatePreviewImageData();
	TArray<uint8> ClientUpdateARWorldData();
	int32 ClientInitSharedWorld();
};

// 0x10 (0x4E8 - 0x4D8)
// Class AugmentedReality.ARSkyLight
class AARSkyLight : public ASkyLight
{
public:
	class UAREnvironmentCaptureProbe*            CaptureProbe;                                      // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B42[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AARSkyLight* GetDefaultObj();

	class UAREnvironmentCaptureProbe* SetEnvironmentCaptureProbe();
};

// 0x28 (0x200 - 0x1D8)
// Class AugmentedReality.ARTexture
class UARTexture : public UTexture
{
public:
	enum class EARTextureType                    TextureType;                                       // 0x1D8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B44[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Timestamp;                                         // 0x1DC(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FGuid                                 ExternalTextureGuid;                               // 0x1E0(0x10)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
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
	enum class EARDepthQuality                   DepthQuality;                                      // 0x200(0x1)(ConstParm, Net, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARDepthAccuracy                  DepthAccuracy;                                     // 0x201(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bIsTemporallySmoothed;                             // 0x202(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B48[0xD];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARTextureCameraDepth* GetDefaultObj();

};

// 0x30 (0x2A0 - 0x270)
// Class AugmentedReality.AREnvironmentCaptureProbeTexture
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{
public:
	enum class EARTextureType                    TextureType;                                       // 0x270(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B4B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Timestamp;                                         // 0x274(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FGuid                                 ExternalTextureGuid;                               // 0x278(0x10)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             Size;                                              // 0x288(0x10)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	uint8                                        Pad_2B4C[0x8];                                     // Fixing Size Of Struct > TateDumper <

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
	struct FGuid                                 UniqueID;                                          // 0x28(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2B6E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            LocalToTrackingTransform;                          // 0x40(0x60)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTransform                            LocalToAlignedTrackingTransform;                   // 0xA0(0x60)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARTrackingState                  TrackingState;                                     // 0x100(0x1)(BlueprintVisible, Parm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B6F[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	class UMRMeshComponent*                      UnderlyingMesh;                                    // 0x110(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EARObjectClassification           ObjectClassification;                              // 0x118(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class EARSpatialMeshUsageFlags          SpatialMeshUsageFlags;                             // 0x119(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B72[0x16];                                    // Fixing Size After Last Property  > TateDumper <
	int32                                        LastUpdateFrameNumber;                             // 0x130(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B73[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  DebugName;                                         // 0x140(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B75[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARTrackedGeometry* GetDefaultObj();

	bool IsTracked();
	bool HasSpatialMeshUsageFlag();
	class UMRMeshComponent* GetUnderlyingMesh();
	enum class EARTrackingState GetTrackingState();
	enum class EARObjectClassification GetObjectClassification();
	class FString GetName();
	struct FTransform GetLocalToWorldTransform();
	struct FTransform GetLocalToTrackingTransform();
	float GetLastUpdateTimestamp();
	int32 GetLastUpdateFrameNumber();
	class FName GetDebugName();
};

// 0x58 (0x1B0 - 0x158)
// Class AugmentedReality.ARPlaneGeometry
class UARPlaneGeometry : public UARTrackedGeometry
{
public:
	enum class EARPlaneOrientation               Orientation;                                       // 0x158(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	uint8                                        Pad_2B81[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Center;                                            // 0x160(0x18)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst)
	struct FVector                               Extent;                                            // 0x178(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<struct FVector>                       BoundaryPolygon;                                   // 0x190(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UARPlaneGeometry*                      SubsumedBy;                                        // 0x1A0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B83[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARPlaneGeometry* GetDefaultObj();

	class UARPlaneGeometry* GetSubsumedBy();
	enum class EARPlaneOrientation GetOrientation();
	struct FVector GetExtent();
	struct FVector GetCenter();
	TArray<struct FVector> GetBoundaryPolygonInLocalSpace();
};

// 0x8 (0x160 - 0x158)
// Class AugmentedReality.ARTrackedPoint
class UARTrackedPoint : public UARTrackedGeometry
{
public:
	uint8                                        Pad_2B85[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARTrackedPoint* GetDefaultObj();

};

// 0x18 (0x170 - 0x158)
// Class AugmentedReality.ARTrackedImage
class UARTrackedImage : public UARTrackedGeometry
{
public:
	class UARCandidateImage*                     DetectedImage;                                     // 0x158(0x8)(BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             EstimatedSize;                                     // 0x160(0x10)(ExportObject, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARTrackedImage* GetDefaultObj();

	struct FVector2D GetEstimateSize();
	class UARCandidateImage* GetDetectedImage();
};

// 0x20 (0x190 - 0x170)
// Class AugmentedReality.ARTrackedQRCode
class UARTrackedQRCode : public UARTrackedImage
{
public:
	class FString                                QRCode;                                            // 0x170(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	int32                                        Version;                                           // 0x180(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnInstance)
	uint8                                        Pad_2B8F[0xC];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARTrackedQRCode* GetDefaultObj();

};

// 0x168 (0x2C0 - 0x158)
// Class AugmentedReality.ARFaceGeometry
class UARFaceGeometry : public UARTrackedGeometry
{
public:
	struct FVector                               LookAtTarget;                                      // 0x158(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bIsTracked;                                        // 0x170(0x1)(ExportObject, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B98[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TMap<enum class EARFaceBlendShape, float>    BlendShapes;                                       // 0x178(0x50)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B9B[0x38];                                    // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            LeftEyeTransform;                                  // 0x200(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTransform                            RightEyeTransform;                                 // 0x260(0x60)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARFaceGeometry* GetDefaultObj();

	struct FTransform GetWorldSpaceEyeTransform();
	struct FTransform GetLocalSpaceEyeTransform();
	float GetBlendShapeValue();
	TMap<enum class EARFaceBlendShape, float> GetBlendShapes();
};

// 0x28 (0x180 - 0x158)
// Class AugmentedReality.AREnvironmentCaptureProbe
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{
public:
	struct FVector                               Extent;                                            // 0x158(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UAREnvironmentCaptureProbeTexture*     EnvironmentCaptureTexture;                         // 0x170(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BA2[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAREnvironmentCaptureProbe* GetDefaultObj();

	struct FVector GetExtent();
	class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
};

// 0x8 (0x160 - 0x158)
// Class AugmentedReality.ARTrackedObject
class UARTrackedObject : public UARTrackedGeometry
{
public:
	class UARCandidateObject*                    DetectedObject;                                    // 0x158(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARTrackedObject* GetDefaultObj();

	class UARCandidateObject* GetDetectedObject();
};

// 0x58 (0x1B0 - 0x158)
// Class AugmentedReality.ARTrackedPose
class UARTrackedPose : public UARTrackedGeometry
{
public:
	struct FARPose3D                             TrackedPose;                                       // 0x158(0x50)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BAC[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARTrackedPose* GetDefaultObj();

	struct FARPose3D GetTrackedPoseData();
};

// 0x8 (0x160 - 0x158)
// Class AugmentedReality.ARMeshGeometry
class UARMeshGeometry : public UARTrackedGeometry
{
public:
	uint8                                        Pad_2BB9[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARMeshGeometry* GetDefaultObj();

	bool GetObjectClassificationAtLocation(struct FVector* InWorldLocation, enum class EARObjectClassification* OutClassification, const struct FVector& OutClassificationLocation, float MaxLocationDiff);
};

// 0x18 (0x170 - 0x158)
// Class AugmentedReality.ARGeoAnchor
class UARGeoAnchor : public UARTrackedGeometry
{
public:
	uint8                                        Pad_2BCA[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARGeoAnchor* GetDefaultObj();

	float GetLongitude();
	float GetLatitude();
	enum class EARAltitudeSource GetAltitudeSource();
	float GetAltitudeMeters();
};

// 0x150 (0x208 - 0xB8)
// Class AugmentedReality.ARTrackableNotifyComponent
class UARTrackableNotifyComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnAddTrackedGeometry;                              // 0xB8(0x10)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedGeometry;                           // 0xC8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedGeometry;                           // 0xD8(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnAddTrackedPlane;                                 // 0xE8(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedPlane;                              // 0xF8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedPlane;                              // 0x108(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnAddTrackedPoint;                                 // 0x118(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedPoint;                              // 0x128(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedPoint;                              // 0x138(0x10)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnAddTrackedImage;                                 // 0x148(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedImage;                              // 0x158(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedImage;                              // 0x168(0x10)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnAddTrackedFace;                                  // 0x178(0x10)(ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedFace;                               // 0x188(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedFace;                               // 0x198(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnAddTrackedEnvProbe;                              // 0x1A8(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedEnvProbe;                           // 0x1B8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedEnvProbe;                           // 0x1C8(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnAddTrackedObject;                                // 0x1D8(0x10)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedObject;                             // 0x1E8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedObject;                             // 0x1F8(0x10)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

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
	class UTexture2D*                            CandidateTexture;                                  // 0x30(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                FriendlyName;                                      // 0x38(0x10)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	float                                        Width;                                             // 0x48(0x4)(ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
	float                                        Height;                                            // 0x4C(0x4)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
	enum class EARCandidateImageOrientation      Orientation;                                       // 0x50(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	uint8                                        Pad_2BE8[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UARCandidateImage* GetDefaultObj();

	float GetPhysicalWidth();
	float GetPhysicalHeight();
	enum class EARCandidateImageOrientation GetOrientation();
	class FString GetFriendlyName();
	class UTexture2D* GetCandidateTexture();
};

// 0x58 (0x88 - 0x30)
// Class AugmentedReality.ARCandidateObject
class UARCandidateObject : public UDataAsset
{
public:
	TArray<uint8>                                CandidateObjectData;                               // 0x30(0x10)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                FriendlyName;                                      // 0x40(0x10)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FBox                                  BoundingBox;                                       // 0x50(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UARCandidateObject* GetDefaultObj();

	class FString SetFriendlyName();
	TArray<uint8> SetCandidateObjectData();
	struct FBox SetBoundingBox();
	class FString GetFriendlyName();
	TArray<uint8> GetCandidateObjectData();
	struct FBox GetBoundingBox();
};

}


