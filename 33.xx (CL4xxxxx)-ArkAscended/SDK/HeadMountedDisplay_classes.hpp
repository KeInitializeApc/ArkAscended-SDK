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

	struct FTransform UpdateExternalTrackingHMDPosition();
	void SetXRTimedInputActionDelegate(class FName* ActionName, FDelegateProperty_ InDelegate);
	void SetXRDisconnectDelegate(FDelegateProperty_ InDisconnectedDelegate);
	void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
	void SetTrackingOrigin(enum class EHMDTrackingOrigin* Origin);
	void SetSpectatorScreenTexture(class UTexture** InTexture);
	void SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
	void SetSpectatorScreenMode(enum class ESpectatorScreenMode* Mode);
	void SetClippingPlanes(float Near, float Far);
	enum class EOrientPositionSelector ResetOrientationAndPosition();
	bool IsSpectatorScreenModeControllable();
	bool IsInLowPersistenceMode();
	bool IsHeadMountedDisplayEnabled();
	bool IsHeadMountedDisplayConnected();
	bool IsDeviceTracking(const struct FXRDeviceId& XRDeviceId);
	bool HasValidTrackingPosition();
	int32 GetXRSystemFlags();
	float GetWorldToMetersScale(class UObject* WorldContext);
	void GetVRFocusState(bool bUseFocus, bool bHasFocus);
	class FString GetVersionString();
	struct FTransform GetTrackingToWorldTransform(class UObject* WorldContext);
	int32 GetTrackingSensorParameters(struct FVector* Origin, struct FRotator* Rotation, float LeftFOV, float RightFOV, float TopFOV, float BottomFOV, bool* IsActive);
	bool GetTrackingOriginTransform(enum class EHMDTrackingOrigin* Origin, struct FTransform* OutTransform);
	enum class EHMDTrackingOrigin GetTrackingOrigin();
	float GetPositionalTrackingCameraParameters(const struct FRotator& CameraRotation, float* CameraDistance);
	bool GetPlayAreaRect(struct FTransform* OutTransform);
	struct FVector2D GetPlayAreaBounds(enum class EHMDTrackingOrigin* Origin);
	float GetPixelDensity();
	struct FVector GetOrientationAndPosition();
	int32 GetNumOfTrackingSensors();
	struct FXRMotionControllerData GetMotionControllerData(class UObject* WorldContext);
	enum class EHMDWornState GetHMDWornState();
	class FName GetHMDDeviceName();
	struct FXRHMDData GetHMDData(class UObject* WorldContext);
	bool GetDeviceWorldPose(class UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, const struct FRotator& Orientation, const struct FVector& Position);
	bool GetDevicePose(const struct FXRDeviceId& XRDeviceId, const struct FRotator& Orientation, const struct FVector& Position);
	bool GetCurrentInteractionProfile();
	bool GetControllerTransformForTime(class UObject* WorldContext, const struct FTimespan& Time, const struct FRotator& Orientation, const struct FVector& Position, struct FVector* LinearVelocity);
	TArray<struct FXRDeviceId> EnumerateTrackedDevices();
	void EnableLowPersistenceMode(bool* bEnable);
	bool EnableHMD(bool* bEnable);
	void DisconnectRemoteXRDevice();
	enum class EXRDeviceConnectionResult ConnectRemoteXRDevice(class FString* IpAddress);
	bool ConfigureGestures();
	class FName ClearXRTimedInputActionDelegate();
	struct FTransform CalibrateExternalTrackingToHMD();
	class FString BreakKey(struct FKey* InKey);
};

// 0x138 (0x7D0 - 0x698)
// Class HeadMountedDisplay.MotionControllerComponent
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	int32                                        PlayerIndex;                                       // 0x698(0x4)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EControllerHand                   Hand;                                              // 0x69C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B70[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  MotionSource;                                      // 0x6A0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDisableLowLatencyUpdate : 1;                      // Mask: 0x1, PropSize: 0x10x6A8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_228 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2B71[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ETrackingStatus                   CurrentTrackingStatus;                             // 0x6AC(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B74[0xB];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bDisplayDeviceModel;                               // 0x6B8(0x1)(ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B77[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  DisplayModelSource;                                // 0x6BC(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B78[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UStaticMesh*                           CustomDisplayMesh;                                 // 0x6C8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UMaterialInterface*>            DisplayMeshMaterialOverrides;                      // 0x6D0(0x10)(Edit, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimitiveComponent*                   DisplayComponent;                                  // 0x6E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2B79[0xE8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMotionControllerComponent* GetDefaultObj();

	void SetTrackingSource(enum class EControllerHand NewSource);
	void SetTrackingMotionSource(class FName NewSource);
	void SetShowDeviceModel(bool bShowControllerModel);
	void SetDisplayModelSource(class FName NewDisplayModelSource);
	void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
	void SetAssociatedPlayerIndex(int32* NewPlayer);
	void OnMotionControllerUpdated();
	bool IsTracked();
	enum class EControllerHand GetTrackingSource();
	float GetParameterValue(bool bValueFound);
	struct FVector GetHandJointPosition(int32 JointIndex, bool bValueFound);
};

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMotionTrackedDeviceFunctionLibrary* GetDefaultObj();

	bool SetIsControllerMotionTrackingEnabledByDefault();
	bool IsMotionTrackingEnabledForSource();
	bool IsMotionTrackingEnabledForDevice();
	bool IsMotionTrackingEnabledForComponent(class UMotionControllerComponent** MotionControllerComponent);
	bool IsMotionTrackedDeviceCountManagementNecessary();
	bool IsMotionSourceTracking();
	int32 GetMotionTrackingEnabledControllerCount();
	int32 GetMaximumMotionTrackedControllerCount();
	class FName GetActiveTrackingSystemName();
	TArray<class FName> EnumerateMotionSources();
	bool EnableMotionTrackingOfSource();
	bool EnableMotionTrackingOfDevice();
	bool EnableMotionTrackingForComponent(class UMotionControllerComponent** MotionControllerComponent);
	class FName DisableMotionTrackingOfSource();
	enum class EControllerHand DisableMotionTrackingOfDevice();
	int32 DisableMotionTrackingOfControllersForPlayer();
	void DisableMotionTrackingOfAllControllers();
	void DisableMotionTrackingForComponent(class UMotionControllerComponent** MotionControllerComponent);
};

// 0xC0 (0x178 - 0xB8)
// Class HeadMountedDisplay.VRNotificationsComponent
class UVRNotificationsComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xB8(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDTrackingInitializedDelegate;                    // 0xC8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDRecenteredDelegate;                             // 0xD8(0x10)(Edit, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDLostDelegate;                                   // 0xE8(0x10)(ExportObject, EditFixedSize, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDReconnectedDelegate;                            // 0xF8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDConnectCanceledDelegate;                        // 0x108(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDPutOnHeadDelegate;                              // 0x118(0x10)(Edit, ConstParm, Net, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDRemovedFromHeadDelegate;                        // 0x128(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            VRControllerRecenteredDelegate;                    // 0x138(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            XRTrackingOriginChangedDelegate;                   // 0x148(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            XRPlayAreaChangedDelegate;                         // 0x158(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            XRInteractionProfileChangedDelegate;               // 0x168(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

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

	class UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, class FName SystemName, class FName DeviceName, const struct FXRDeviceId& XRDeviceId);
	class UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(class AActor* Target, const struct FXRDeviceId& XRDeviceId);
};

// 0x30 (0x60 - 0x30)
// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnModelLoaded;                                     // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnLoadFailure;                                     // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BF4[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimitiveComponent*                   SpawnedComponent;                                  // 0x58(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAsyncTask_LoadXRDeviceVisComponent* GetDefaultObj();

	class UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(class AActor* Target, class FName SystemName, class FName DeviceName, const struct FXRDeviceId& XRDeviceId);
	class UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(class AActor* Target, const struct FXRDeviceId& XRDeviceId);
};

// 0x48 (0x7B0 - 0x768)
// Class HeadMountedDisplay.XRDeviceVisualizationComponent
class UXRDeviceVisualizationComponent : public UStaticMeshComponent
{
public:
	bool                                         bIsVisualizationActive;                            // 0x768(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BFD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  DisplayModelSource;                                // 0x76C(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BFE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UStaticMesh*                           CustomDisplayMesh;                                 // 0x778(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UMaterialInterface*>            DisplayMeshMaterialOverrides;                      // 0x780(0x10)(Edit, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C01[0x20];                                    // Fixing Size Of Struct > TateDumper <

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
	struct FVector SetLoadingScreen(const struct FVector2D& Scale, bool* bShowLoadingMovie, bool* bShowOnSet);
	void HideLoadingScreen();
	void ClearLoadingScreenSplashes();
	struct FVector2D AddLoadingScreenSplash(const struct FVector& Translation, struct FRotator* Rotation, const struct FRotator& DeltaRotation, bool* bClearBeforeAdd);
};

}


