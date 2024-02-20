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

	void Conv_HandKeypointToInt32(enum class EHandKeypoint Input, int32 ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UHeadMountedDisplayFunctionLibrary* GetDefaultObj();

	struct FTransform UpdateExternalTrackingHMDPosition();
	void SetXRTimedInputActionDelegate(class FName ActionName, FDelegateProperty_ InDelegate);
	void SetXRDisconnectDelegate(FDelegateProperty_ InDisconnectedDelegate);
	float SetWorldToMetersScale();
	enum class EHMDTrackingOrigin SetTrackingOrigin();
	void SetSpectatorScreenTexture(class UTexture** InTexture);
	void SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
	void SetSpectatorScreenMode(enum class ESpectatorScreenMode Mode);
	void SetClippingPlanes(float Near, float Far);
	enum class EOrientPositionSelector ResetOrientationAndPosition();
	void IsSpectatorScreenModeControllable(bool ReturnValue);
	void IsInLowPersistenceMode(bool ReturnValue);
	void IsHeadMountedDisplayEnabled(bool ReturnValue);
	void IsHeadMountedDisplayConnected(bool ReturnValue);
	struct FXRDeviceId IsDeviceTracking(bool ReturnValue);
	void HasValidTrackingPosition(bool ReturnValue);
	void GetXRSystemFlags(int32 ReturnValue);
	class UObject* GetWorldToMetersScale(float ReturnValue);
	void GetVRFocusState(bool bUseFocus, bool bHasFocus);
	void GetVersionString(const class FString& ReturnValue);
	class UObject* GetTrackingToWorldTransform(const struct FTransform& ReturnValue);
	float GetTrackingSensorParameters(struct FRotator* Rotation, float LeftFOV, float RightFOV, float TopFOV, float BottomFOV, float NearPlane, float FarPlane, bool* IsActive, int32* Index);
	struct FTransform GetTrackingOriginTransform(bool ReturnValue);
	void GetTrackingOrigin(enum class EHMDTrackingOrigin ReturnValue);
	void GetPositionalTrackingCameraParameters(const struct FVector& CameraOrigin, const struct FRotator& CameraRotation, float HFOV, float VFOV, float* CameraDistance, float NearPlane, float FarPlane);
	struct FTransform GetPlayAreaRect(const struct FVector2D& OutRect, bool ReturnValue);
	enum class EHMDTrackingOrigin GetPlayAreaBounds(const struct FVector2D& ReturnValue);
	void GetPixelDensity(float ReturnValue);
	void GetOrientationAndPosition(const struct FRotator& DeviceRotation, const struct FVector& DevicePosition);
	void GetNumOfTrackingSensors(int32 ReturnValue);
	enum class EControllerHand GetMotionControllerData(const struct FXRMotionControllerData& MotionControllerData);
	void GetHMDWornState(enum class EHMDWornState ReturnValue);
	void GetHMDDeviceName(class FName ReturnValue);
	struct FXRHMDData GetHMDData();
	bool GetDeviceWorldPose(const struct FRotator& Orientation, struct FVector* Position);
	bool GetDevicePose(const struct FRotator& Orientation, struct FVector* Position);
	class FString GetCurrentInteractionProfile(bool ReturnValue);
	struct FVector GetControllerTransformForTime(int32 ControllerIndex, const struct FRotator& Orientation, struct FVector* Position, bool ReturnValue);
	class FName EnumerateTrackedDevices(enum class EXRTrackedDeviceType* DeviceType, const TArray<struct FXRDeviceId>& ReturnValue);
	bool EnableLowPersistenceMode();
	bool EnableHMD(bool ReturnValue);
	void DisconnectRemoteXRDevice();
	int32 ConnectRemoteXRDevice(class FString* IpAddress, enum class EXRDeviceConnectionResult ReturnValue);
	struct FXRGestureConfig ConfigureGestures(bool ReturnValue);
	class FName ClearXRTimedInputActionDelegate();
	struct FTransform CalibrateExternalTrackingToHMD();
	class FString BreakKey(struct FKey* InKey, const class FString& Component);
};

// 0x138 (0x7D0 - 0x698)
// Class HeadMountedDisplay.MotionControllerComponent
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	int32                                        PlayerIndex;                                       // 0x698(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EControllerHand                   Hand;                                              // 0x69C(0x1)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_AB2[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  MotionSource;                                      // 0x6A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bDisableLowLatencyUpdate : 1;                      // Mask: 0x1, PropSize: 0x10x6A8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_76 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_AB3[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	enum class ETrackingStatus                   CurrentTrackingStatus;                             // 0x6AC(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_AB4[0xB];                                      // Fixing Size After Last Property  > TateDumper <
	bool                                         bDisplayDeviceModel;                               // 0x6B8(0x1)(Edit, ConstParm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_AB5[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  DisplayModelSource;                                // 0x6BC(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_AB7[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UStaticMesh*                           CustomDisplayMesh;                                 // 0x6C8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class UMaterialInterface*>            DisplayMeshMaterialOverrides;                      // 0x6D0(0x10)(Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UPrimitiveComponent*                   DisplayComponent;                                  // 0x6E0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_AB8[0xE8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMotionControllerComponent* GetDefaultObj();

	void SetTrackingSource(enum class EControllerHand NewSource);
	void SetTrackingMotionSource(class FName NewSource);
	void SetShowDeviceModel(bool bShowControllerModel);
	void SetDisplayModelSource(class FName NewDisplayModelSource);
	void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
	int32 SetAssociatedPlayerIndex();
	void OnMotionControllerUpdated();
	void IsTracked(bool ReturnValue);
	void GetTrackingSource(enum class EControllerHand ReturnValue);
	class FName GetParameterValue(bool bValueFound, float ReturnValue);
	void GetHandJointPosition(int32 JointIndex, bool bValueFound, const struct FVector& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMotionTrackedDeviceFunctionLibrary* GetDefaultObj();

	void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
	void IsMotionTrackingEnabledForSource(int32* PlayerIndex, class FName* SourceName, bool ReturnValue);
	enum class EControllerHand IsMotionTrackingEnabledForDevice(int32* PlayerIndex, bool ReturnValue);
	class UMotionControllerComponent* IsMotionTrackingEnabledForComponent(bool ReturnValue);
	void IsMotionTrackedDeviceCountManagementNecessary(bool ReturnValue);
	void IsMotionSourceTracking(int32* PlayerIndex, class FName* SourceName, bool ReturnValue);
	void GetMotionTrackingEnabledControllerCount(int32 ReturnValue);
	void GetMaximumMotionTrackedControllerCount(int32 ReturnValue);
	void GetActiveTrackingSystemName(class FName ReturnValue);
	void EnumerateMotionSources(const TArray<class FName>& ReturnValue);
	void EnableMotionTrackingOfSource(int32* PlayerIndex, class FName* SourceName, bool ReturnValue);
	enum class EControllerHand EnableMotionTrackingOfDevice(int32* PlayerIndex, bool ReturnValue);
	class UMotionControllerComponent* EnableMotionTrackingForComponent(bool ReturnValue);
	void DisableMotionTrackingOfSource(int32* PlayerIndex, class FName* SourceName);
	enum class EControllerHand DisableMotionTrackingOfDevice(int32* PlayerIndex);
	void DisableMotionTrackingOfControllersForPlayer(int32* PlayerIndex);
	void DisableMotionTrackingOfAllControllers();
	class UMotionControllerComponent* DisableMotionTrackingForComponent();
};

// 0xC0 (0x178 - 0xB8)
// Class HeadMountedDisplay.VRNotificationsComponent
class UVRNotificationsComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xB8(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDTrackingInitializedDelegate;                    // 0xC8(0x10)(ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDRecenteredDelegate;                             // 0xD8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDLostDelegate;                                   // 0xE8(0x10)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDReconnectedDelegate;                            // 0xF8(0x10)(Edit, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDConnectCanceledDelegate;                        // 0x108(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDPutOnHeadDelegate;                              // 0x118(0x10)(ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            HMDRemovedFromHeadDelegate;                        // 0x128(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            VRControllerRecenteredDelegate;                    // 0x138(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            XRTrackingOriginChangedDelegate;                   // 0x148(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            XRPlayAreaChangedDelegate;                         // 0x158(0x10)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            XRInteractionProfileChangedDelegate;               // 0x168(0x10)(ConstParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

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

	struct FXRDeviceId AddNamedDeviceVisualizationComponentBlocking(class FName* SystemName, class UPrimitiveComponent* ReturnValue);
	struct FTransform AddDeviceVisualizationComponentBlocking(class UPrimitiveComponent* ReturnValue);
};

// 0x30 (0x60 - 0x30)
// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnModelLoaded;                                     // 0x30(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnLoadFailure;                                     // 0x40(0x10)(BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_B67[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UPrimitiveComponent*                   SpawnedComponent;                                  // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UAsyncTask_LoadXRDeviceVisComponent* GetDefaultObj();

	struct FXRDeviceId AddNamedDeviceVisualizationComponentAsync(class FName* SystemName, class UPrimitiveComponent** NewComponent, class UAsyncTask_LoadXRDeviceVisComponent* ReturnValue);
	struct FTransform AddDeviceVisualizationComponentAsync(class UPrimitiveComponent** NewComponent, class UAsyncTask_LoadXRDeviceVisComponent* ReturnValue);
};

// 0x48 (0x7B0 - 0x768)
// Class HeadMountedDisplay.XRDeviceVisualizationComponent
class UXRDeviceVisualizationComponent : public UStaticMeshComponent
{
public:
	bool                                         bIsVisualizationActive;                            // 0x768(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_B7E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  DisplayModelSource;                                // 0x76C(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_B7F[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UStaticMesh*                           CustomDisplayMesh;                                 // 0x778(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<class UMaterialInterface*>            DisplayMeshMaterialOverrides;                      // 0x780(0x10)(Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_B80[0x20];                                     // Fixing Size Of Struct > TateDumper <

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
	void SetLoadingScreen(class UTexture** Texture, struct FVector2D* Scale, const struct FVector& Offset, bool* bShowLoadingMovie, bool* bShowOnSet);
	void HideLoadingScreen();
	void ClearLoadingScreenSplashes();
	struct FVector2D AddLoadingScreenSplash(class UTexture** Texture, struct FVector* Translation, struct FRotator* Rotation, const struct FRotator& DeltaRotation, bool* bClearBeforeAdd);
};

}


