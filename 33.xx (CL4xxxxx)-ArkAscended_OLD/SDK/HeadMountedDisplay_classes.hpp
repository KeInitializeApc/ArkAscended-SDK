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

	void Conv_HandKeypointToInt32(enum class EHandKeypoint Input, int32* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UHeadMountedDisplayFunctionLibrary* GetDefaultObj();

	struct FTransform UpdateExternalTrackingHMDPosition();
	FDelegateProperty_ SetXRTimedInputActionDelegate();
	FDelegateProperty_ SetXRDisconnectDelegate();
	float SetWorldToMetersScale(class UObject* WorldContext);
	enum class EHMDTrackingOrigin SetTrackingOrigin();
	class UTexture* SetSpectatorScreenTexture();
	bool SetSpectatorScreenModeTexturePlusEyeLayout();
	enum class ESpectatorScreenMode SetSpectatorScreenMode();
	float SetClippingPlanes();
	enum class EOrientPositionSelector ResetOrientationAndPosition();
	void IsSpectatorScreenModeControllable(bool* ReturnValue);
	void IsInLowPersistenceMode(bool* ReturnValue);
	void IsHeadMountedDisplayEnabled(bool* ReturnValue);
	void IsHeadMountedDisplayConnected(bool* ReturnValue);
	void IsDeviceTracking(const struct FXRDeviceId& XRDeviceId, bool* ReturnValue);
	void HasValidTrackingPosition(bool* ReturnValue);
	void GetXRSystemFlags(int32* ReturnValue);
	void GetWorldToMetersScale(class UObject* WorldContext, float* ReturnValue);
	bool GetVRFocusState();
	void GetVersionString(class FString* ReturnValue);
	void GetTrackingToWorldTransform(class UObject* WorldContext, struct FTransform* ReturnValue);
	int32 GetTrackingSensorParameters(struct FRotator* Rotation, float Distance, bool* IsActive);
	struct FTransform GetTrackingOriginTransform(bool* ReturnValue);
	void GetTrackingOrigin(enum class EHMDTrackingOrigin* ReturnValue);
	float GetPositionalTrackingCameraParameters();
	struct FVector2D GetPlayAreaRect(bool* ReturnValue);
	enum class EHMDTrackingOrigin GetPlayAreaBounds(struct FVector2D* ReturnValue);
	void GetPixelDensity(float* ReturnValue);
	struct FVector GetOrientationAndPosition();
	void GetNumOfTrackingSensors(int32* ReturnValue);
	struct FXRMotionControllerData GetMotionControllerData(class UObject* WorldContext, enum class EControllerHand Hand);
	void GetHMDWornState(enum class EHMDWornState* ReturnValue);
	void GetHMDDeviceName(class FName* ReturnValue);
	struct FXRHMDData GetHMDData(class UObject* WorldContext);
	bool GetDeviceWorldPose(class UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, bool bIsTracked, const struct FVector& Position);
	bool GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool bIsTracked, const struct FVector& Position);
	void GetCurrentInteractionProfile(enum class EControllerHand Hand, class FString* InteractionProfile, bool* ReturnValue);
	struct FVector GetControllerTransformForTime(class UObject* WorldContext, class FName* MotionSource, const struct FVector& Position, bool* ReturnValue);
	enum class EXRTrackedDeviceType EnumerateTrackedDevices(TArray<struct FXRDeviceId>* ReturnValue);
	bool EnableLowPersistenceMode();
	bool EnableHMD(bool* ReturnValue);
	void DisconnectRemoteXRDevice();
	int32 ConnectRemoteXRDevice(enum class EXRDeviceConnectionResult* ReturnValue);
	struct FXRGestureConfig ConfigureGestures(bool* ReturnValue);
	class FName ClearXRTimedInputActionDelegate();
	struct FTransform CalibrateExternalTrackingToHMD();
	struct FKey BreakKey(class FString* InteractionProfile, enum class EControllerHand Hand, class FName* MotionSource, class FString* Indentifier, class FString* Component);
};

// 0x138 (0x7D0 - 0x698)
// Class HeadMountedDisplay.MotionControllerComponent
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	int32                                        PlayerIndex;                                       // 0x698(0x4)(Edit, ConstParm, Net, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EControllerHand                   Hand;                                              // 0x69C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_229B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  MotionSource;                                      // 0x6A0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bDisableLowLatencyUpdate : 1;                      // Mask: 0x1, PropSize: 0x10x6A8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_167 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_229D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	enum class ETrackingStatus                   CurrentTrackingStatus;                             // 0x6AC(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_229E[0xB];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bDisplayDeviceModel;                               // 0x6B8(0x1)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_229F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  DisplayModelSource;                                // 0x6BC(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_22A0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UStaticMesh*                           CustomDisplayMesh;                                 // 0x6C8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UMaterialInterface*>            DisplayMeshMaterialOverrides;                      // 0x6D0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimitiveComponent*                   DisplayComponent;                                  // 0x6E0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_22A1[0xE8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMotionControllerComponent* GetDefaultObj();

	enum class EControllerHand SetTrackingSource();
	class FName SetTrackingMotionSource();
	bool SetShowDeviceModel();
	class FName SetDisplayModelSource();
	class UStaticMesh* SetCustomDisplayMesh();
	int32 SetAssociatedPlayerIndex();
	void OnMotionControllerUpdated();
	void IsTracked(bool* ReturnValue);
	void GetTrackingSource(enum class EControllerHand* ReturnValue);
	bool GetParameterValue(class FName InName, float* ReturnValue);
	bool GetHandJointPosition(struct FVector* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMotionTrackedDeviceFunctionLibrary* GetDefaultObj();

	bool SetIsControllerMotionTrackingEnabledByDefault();
	class FName IsMotionTrackingEnabledForSource(int32 PlayerIndex, bool* ReturnValue);
	void IsMotionTrackingEnabledForDevice(int32 PlayerIndex, enum class EControllerHand Hand, bool* ReturnValue);
	void IsMotionTrackingEnabledForComponent(class UMotionControllerComponent** MotionControllerComponent, bool* ReturnValue);
	void IsMotionTrackedDeviceCountManagementNecessary(bool* ReturnValue);
	class FName IsMotionSourceTracking(int32 PlayerIndex, bool* ReturnValue);
	void GetMotionTrackingEnabledControllerCount(int32* ReturnValue);
	void GetMaximumMotionTrackedControllerCount(int32* ReturnValue);
	void GetActiveTrackingSystemName(class FName* ReturnValue);
	void EnumerateMotionSources(TArray<class FName>* ReturnValue);
	class FName EnableMotionTrackingOfSource(int32 PlayerIndex, bool* ReturnValue);
	void EnableMotionTrackingOfDevice(int32 PlayerIndex, enum class EControllerHand Hand, bool* ReturnValue);
	void EnableMotionTrackingForComponent(class UMotionControllerComponent** MotionControllerComponent, bool* ReturnValue);
	class FName DisableMotionTrackingOfSource(int32 PlayerIndex);
	void DisableMotionTrackingOfDevice(int32 PlayerIndex, enum class EControllerHand Hand);
	void DisableMotionTrackingOfControllersForPlayer(int32 PlayerIndex);
	void DisableMotionTrackingOfAllControllers();
	void DisableMotionTrackingForComponent(class UMotionControllerComponent** MotionControllerComponent);
};

// 0xC0 (0x178 - 0xB8)
// Class HeadMountedDisplay.VRNotificationsComponent
class UVRNotificationsComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xB8(0x10)(ExportObject, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDTrackingInitializedDelegate;                    // 0xC8(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDRecenteredDelegate;                             // 0xD8(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDLostDelegate;                                   // 0xE8(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDReconnectedDelegate;                            // 0xF8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDConnectCanceledDelegate;                        // 0x108(0x10)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDPutOnHeadDelegate;                              // 0x118(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDRemovedFromHeadDelegate;                        // 0x128(0x10)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            VRControllerRecenteredDelegate;                    // 0x138(0x10)(Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            XRTrackingOriginChangedDelegate;                   // 0x148(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            XRPlayAreaChangedDelegate;                         // 0x158(0x10)(Edit, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            XRInteractionProfileChangedDelegate;               // 0x168(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

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

	class FName AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, class FName SystemName, bool bManualAttachment, struct FTransform* RelativeTransform, const struct FXRDeviceId& XRDeviceId, class UPrimitiveComponent** ReturnValue);
	void AddDeviceVisualizationComponentBlocking(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform* RelativeTransform, class UPrimitiveComponent** ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnModelLoaded;                                     // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnLoadFailure;                                     // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2304[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimitiveComponent*                   SpawnedComponent;                                  // 0x58(0x8)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAsyncTask_LoadXRDeviceVisComponent* GetDefaultObj();

	class FName AddNamedDeviceVisualizationComponentAsync(class AActor* Target, class FName SystemName, bool bManualAttachment, struct FTransform* RelativeTransform, const struct FXRDeviceId& XRDeviceId, class UPrimitiveComponent* NewComponent, class UAsyncTask_LoadXRDeviceVisComponent** ReturnValue);
	void AddDeviceVisualizationComponentAsync(class AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform* RelativeTransform, class UPrimitiveComponent* NewComponent, class UAsyncTask_LoadXRDeviceVisComponent** ReturnValue);
};

// 0x48 (0x7B0 - 0x768)
// Class HeadMountedDisplay.XRDeviceVisualizationComponent
class UXRDeviceVisualizationComponent : public UStaticMeshComponent
{
public:
	bool                                         bIsVisualizationActive;                            // 0x768(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2313[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  DisplayModelSource;                                // 0x76C(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2315[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UStaticMesh*                           CustomDisplayMesh;                                 // 0x778(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<class UMaterialInterface*>            DisplayMeshMaterialOverrides;                      // 0x780(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2316[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UXRDeviceVisualizationComponent* GetDefaultObj();

	bool SetIsVisualizationActive();
	bool SetIsRenderingActive();
	class FName SetDisplayModelSource();
	class UStaticMesh* SetCustomDisplayMesh();
};

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UXRLoadingScreenFunctionLibrary* GetDefaultObj();

	void ShowLoadingScreen();
	bool SetLoadingScreen(const struct FVector2D& Scale);
	void HideLoadingScreen();
	void ClearLoadingScreenSplashes();
	bool AddLoadingScreenSplash(const struct FVector& Translation, struct FRotator* Rotation, struct FRotator* DeltaRotation);
};

}


