#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.HandKeypointConversion
class UHandKeypointConversion : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UHandKeypointConversion* GetDefaultObj();

	int32 Conv_HandKeypointToInt32(enum class EHandKeypoint Input);
};

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UHeadMountedDisplayFunctionLibrary* GetDefaultObj();

	void UpdateExternalTrackingHMDPosition(struct FTransform* ExternalTrackingTransform);
	void SetXRTimedInputActionDelegate(class FName ActionName, FDelegateProperty_ InDelegate);
	void SetXRDisconnectDelegate(FDelegateProperty_ InDisconnectedDelegate);
	void SetWorldToMetersScale(class UObject** WorldContext, float NewScale);
	void SetTrackingOrigin(enum class EHMDTrackingOrigin* Origin);
	void SetSpectatorScreenTexture(class UTexture** InTexture);
	void SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
	void SetSpectatorScreenMode(enum class ESpectatorScreenMode* Mode);
	void SetClippingPlanes(float Near, float Far);
	float ResetOrientationAndPosition(enum class EOrientPositionSelector Options);
	bool IsSpectatorScreenModeControllable();
	bool IsInLowPersistenceMode();
	bool IsHeadMountedDisplayEnabled();
	bool IsHeadMountedDisplayConnected();
	bool IsDeviceTracking(struct FXRDeviceId* XRDeviceId);
	bool HasValidTrackingPosition();
	int32 GetXRSystemFlags();
	float GetWorldToMetersScale(class UObject** WorldContext);
	void GetVRFocusState(bool bUseFocus, bool bHasFocus);
	class FString GetVersionString();
	struct FTransform GetTrackingToWorldTransform(class UObject** WorldContext);
	int32 GetTrackingSensorParameters(struct FVector* Origin, struct FRotator* Rotation, float LeftFOV, float RightFOV, float TopFOV, float BottomFOV, float NearPlane, float* FarPlane, bool* IsActive);
	bool GetTrackingOriginTransform(enum class EHMDTrackingOrigin* Origin, struct FTransform* OutTransform);
	enum class EHMDTrackingOrigin GetTrackingOrigin();
	float GetPositionalTrackingCameraParameters(const struct FVector& CameraOrigin, const struct FRotator& CameraRotation, float HFOV, float VFOV, float NearPlane, float* FarPlane);
	bool GetPlayAreaRect(struct FTransform* OutTransform, struct FVector2D* OutRect);
	struct FVector2D GetPlayAreaBounds(enum class EHMDTrackingOrigin* Origin);
	float GetPixelDensity();
	void GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);
	int32 GetNumOfTrackingSensors();
	enum class EControllerHand GetMotionControllerData(class UObject** WorldContext, struct FXRMotionControllerData* MotionControllerData);
	enum class EHMDWornState GetHMDWornState();
	class FName GetHMDDeviceName();
	void GetHMDData(class UObject** WorldContext, struct FXRHMDData* HMDData);
	struct FVector GetDeviceWorldPose(class UObject** WorldContext, struct FXRDeviceId* XRDeviceId, bool bIsTracked, bool* bHasPositionalTracking);
	struct FVector GetDevicePose(struct FXRDeviceId* XRDeviceId, bool bIsTracked, bool* bHasPositionalTracking);
	bool GetCurrentInteractionProfile(class FString* InteractionProfile);
	bool GetControllerTransformForTime(class UObject** WorldContext, class FName* MotionSource, bool* bTimeWasUsed, bool* bProvidedLinearVelocity, struct FVector* LinearVelocity, bool* bProvidedAngularVelocity, struct FVector* AngularVelocityRadPerSec, bool* bProvidedLinearAcceleration, struct FVector* LinearAcceleration);
	TArray<struct FXRDeviceId> EnumerateTrackedDevices(class FName* SystemId, enum class EXRTrackedDeviceType* DeviceType);
	void EnableLowPersistenceMode(bool* bEnable);
	bool EnableHMD(bool* bEnable);
	void DisconnectRemoteXRDevice();
	enum class EXRDeviceConnectionResult ConnectRemoteXRDevice(class FString* IpAddress, int32* BitRate);
	bool ConfigureGestures(struct FXRGestureConfig* GestureConfig);
	void ClearXRTimedInputActionDelegate(class FName* ActionPath);
	void CalibrateExternalTrackingToHMD(struct FTransform* ExternalTrackingTransform);
	class FString BreakKey(struct FKey* InKey, class FString* InteractionProfile, class FName* MotionSource, class FString* Indentifier);
};

// 0x140 (0x7D0 - 0x690)
// Class HeadMountedDisplay.MotionControllerComponent
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	int32                                        PlayerIndex;                                       // 0x690(0x4)(BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EControllerHand                   Hand;                                              // 0x694(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_2410[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  MotionSource;                                      // 0x698(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDisableLowLatencyUpdate : 1;                      // Mask: 0x1, PropSize: 0x10x6A0(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_141 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2411[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ETrackingStatus                   CurrentTrackingStatus;                             // 0x6A4(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2413[0xB];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bDisplayDeviceModel;                               // 0x6B0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2414[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  DisplayModelSource;                                // 0x6B4(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2415[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UStaticMesh*                           CustomDisplayMesh;                                 // 0x6C0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UMaterialInterface*>            DisplayMeshMaterialOverrides;                      // 0x6C8(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimitiveComponent*                   DisplayComponent;                                  // 0x6D8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2418[0xF0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMotionControllerComponent* GetDefaultObj();

	void SetTrackingSource(enum class EControllerHand NewSource);
	void SetTrackingMotionSource(class FName NewSource);
	void SetShowDeviceModel(bool bShowControllerModel);
	void SetDisplayModelSource(class FName NewDisplayModelSource);
	void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
	void SetAssociatedPlayerIndex(int32 NewPlayer);
	void OnMotionControllerUpdated();
	bool IsTracked();
	enum class EControllerHand GetTrackingSource();
	float GetParameterValue(class FName* InName, bool bValueFound);
	struct FVector GetHandJointPosition(int32 JointIndex, bool bValueFound);
};

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMotionTrackedDeviceFunctionLibrary* GetDefaultObj();

	void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
	bool IsMotionTrackingEnabledForSource(int32 PlayerIndex);
	bool IsMotionTrackingEnabledForDevice(int32 PlayerIndex);
	bool IsMotionTrackingEnabledForComponent(class UMotionControllerComponent** MotionControllerComponent);
	bool IsMotionTrackedDeviceCountManagementNecessary();
	bool IsMotionSourceTracking(int32 PlayerIndex);
	int32 GetMotionTrackingEnabledControllerCount();
	int32 GetMaximumMotionTrackedControllerCount();
	class FName GetActiveTrackingSystemName();
	TArray<class FName> EnumerateMotionSources();
	bool EnableMotionTrackingOfSource(int32 PlayerIndex);
	bool EnableMotionTrackingOfDevice(int32 PlayerIndex);
	bool EnableMotionTrackingForComponent(class UMotionControllerComponent** MotionControllerComponent);
	class FName DisableMotionTrackingOfSource(int32 PlayerIndex);
	enum class EControllerHand DisableMotionTrackingOfDevice(int32 PlayerIndex);
	void DisableMotionTrackingOfControllersForPlayer(int32 PlayerIndex);
	void DisableMotionTrackingOfAllControllers();
	void DisableMotionTrackingForComponent(class UMotionControllerComponent** MotionControllerComponent);
};

// 0xC0 (0x178 - 0xB8)
// Class HeadMountedDisplay.VRNotificationsComponent
class UVRNotificationsComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xB8(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDTrackingInitializedDelegate;                    // 0xC8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDRecenteredDelegate;                             // 0xD8(0x10)(Edit, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDLostDelegate;                                   // 0xE8(0x10)(ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDReconnectedDelegate;                            // 0xF8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDConnectCanceledDelegate;                        // 0x108(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDPutOnHeadDelegate;                              // 0x118(0x10)(Edit, ConstParm, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDRemovedFromHeadDelegate;                        // 0x128(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            VRControllerRecenteredDelegate;                    // 0x138(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            XRTrackingOriginChangedDelegate;                   // 0x148(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            XRPlayAreaChangedDelegate;                         // 0x158(0x10)(ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            XRInteractionProfileChangedDelegate;               // 0x168(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UVRNotificationsComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.XRAssetFunctionLibrary
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UXRAssetFunctionLibrary* GetDefaultObj();

	class UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(bool* bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId);
	class UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(struct FXRDeviceId* XRDeviceId, bool* bManualAttachment, const struct FTransform& RelativeTransform);
};

// 0x30 (0x60 - 0x30)
// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnModelLoaded;                                     // 0x30(0x10)(BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnLoadFailure;                                     // 0x40(0x10)(ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_24A5[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimitiveComponent*                   SpawnedComponent;                                  // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAsyncTask_LoadXRDeviceVisComponent* GetDefaultObj();

	class UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(bool* bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId);
	class UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(struct FXRDeviceId* XRDeviceId, bool* bManualAttachment, const struct FTransform& RelativeTransform);
};

// 0x50 (0x7B0 - 0x760)
// Class HeadMountedDisplay.XRDeviceVisualizationComponent
class UXRDeviceVisualizationComponent : public UStaticMeshComponent
{
public:
	bool                                         bIsVisualizationActive;                            // 0x760(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_24B2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  DisplayModelSource;                                // 0x764(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_24B3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UStaticMesh*                           CustomDisplayMesh;                                 // 0x770(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UMaterialInterface*>            DisplayMeshMaterialOverrides;                      // 0x778(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_24B5[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UXRDeviceVisualizationComponent* GetDefaultObj();

	void SetIsVisualizationActive(bool* bNewVisualizationState);
	void SetIsRenderingActive(bool* bRenderingIsActive);
	void SetDisplayModelSource(class FName NewDisplayModelSource);
	void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
};

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UXRLoadingScreenFunctionLibrary* GetDefaultObj();

	void ShowLoadingScreen();
	struct FVector SetLoadingScreen(bool* bShowLoadingMovie, bool* bShowOnSet);
	void HideLoadingScreen();
	void ClearLoadingScreenSplashes();
	struct FVector2D AddLoadingScreenSplash(struct FRotator* Rotation, const struct FRotator& DeltaRotation, bool* bClearBeforeAdd);
};

}


