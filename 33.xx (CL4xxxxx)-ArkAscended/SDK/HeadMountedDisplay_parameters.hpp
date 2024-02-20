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

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32
struct UHandKeypointConversion_Conv_HandKeypointToInt32_Params
{
public:
	enum class EHandKeypoint                     Input;                                             // 0x0(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
	uint8                                        Pad_960[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        ReturnValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
struct UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Params
{
public:
	struct FTransform                            ExternalTrackingTransform;                         // 0x0(0x60)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate
struct UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	FDelegateProperty_                           InDelegate;                                        // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate
struct UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate_Params
{
public:
	FDelegateProperty_                           InDisconnectedDelegate;                            // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
struct UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
	float                                        NewScale;                                          // 0x8(0x4)(ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_96C[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
struct UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Params
{
public:
	enum class EHMDTrackingOrigin                Origin;                                            // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
struct UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Params
{
public:
	class UTexture*                              InTexture;                                         // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
struct UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Params
{
public:
	struct FVector2D                             EyeRectMin;                                        // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             EyeRectMax;                                        // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             TextureRectMin;                                    // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             TextureRectMax;                                    // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDrawEyeFirst;                                     // 0x40(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bClearBlack;                                       // 0x41(0x1)(ExportObject, Net, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseAlpha;                                         // 0x42(0x1)(ConstParm, Net, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_97B[0x5];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
struct UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Params
{
public:
	enum class ESpectatorScreenMode              Mode;                                              // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
struct UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Params
{
public:
	float                                        Near;                                              // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        Far;                                               // 0x4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
struct UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Params
{
public:
	float                                        Yaw;                                               // 0x0(0x4)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, Config)
	enum class EOrientPositionSelector           Options;                                           // 0x4(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
	uint8                                        Pad_986[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
struct UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
struct UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
struct UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
struct UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
struct UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Params
{
public:
	struct FXRDeviceId                           XRDeviceId;                                        // 0x0(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         ReturnValue;                                       // 0xC(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_98F[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
struct UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags
struct UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
struct UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
	float                                        ReturnValue;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_998[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x2 (0x2 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
struct UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Params
{
public:
	bool                                         bUseFocus;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bHasFocus;                                         // 0x1(0x1)(BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString
struct UHeadMountedDisplayFunctionLibrary_GetVersionString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
struct UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_99F[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
struct UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Params
{
public:
	struct FVector                               Origin;                                            // 0x0(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              Rotation;                                          // 0x18(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        LeftFOV;                                           // 0x30(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        RightFOV;                                          // 0x34(0x4)(ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        TopFOV;                                            // 0x38(0x4)(ConstParm, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        BottomFOV;                                         // 0x3C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        Distance;                                          // 0x40(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	float                                        NearPlane;                                         // 0x44(0x4)(Edit, ExportObject, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        FarPlane;                                          // 0x48(0x4)(BlueprintVisible, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsActive;                                          // 0x4C(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate)
	uint8                                        Pad_9B1[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        Index;                                             // 0x50(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_9B2[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOriginTransform
struct UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Params
{
public:
	enum class EHMDTrackingOrigin                Origin;                                            // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_9B8[0xF];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            OutTransform;                                      // 0x10(0x60)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x70(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_9BA[0xF];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
struct UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Params
{
public:
	enum class EHMDTrackingOrigin                ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
struct UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Params
{
public:
	struct FVector                               CameraOrigin;                                      // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FRotator                              CameraRotation;                                    // 0x18(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        HFOV;                                              // 0x30(0x4)(ConstParm, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        VFOV;                                              // 0x34(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        CameraDistance;                                    // 0x38(0x4)(Edit, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        NearPlane;                                         // 0x3C(0x4)(Edit, ExportObject, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        FarPlane;                                          // 0x40(0x4)(BlueprintVisible, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_9C4[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaRect
struct UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Params
{
public:
	struct FTransform                            OutTransform;                                      // 0x0(0x60)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             OutRect;                                           // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x70(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_9C7[0xF];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaBounds
struct UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds_Params
{
public:
	enum class EHMDTrackingOrigin                Origin;                                            // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_9D2[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ReturnValue;                                       // 0x8(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
struct UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
struct UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Params
{
public:
	struct FRotator                              DeviceRotation;                                    // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               DevicePosition;                                    // 0x18(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
struct UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x130 (0x130 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData
struct UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
	enum class EControllerHand                   Hand;                                              // 0x8(0x1)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_9E6[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FXRMotionControllerData               MotionControllerData;                              // 0x10(0x120)(BlueprintVisible, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
struct UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Params
{
public:
	enum class EHMDWornState                     ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
struct UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData
struct UHeadMountedDisplayFunctionLibrary_GetHMDData_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_9EF[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	struct FXRHMDData                            HMDData;                                           // 0x10(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
struct UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
	struct FXRDeviceId                           XRDeviceId;                                        // 0x8(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         bIsTracked;                                        // 0x14(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_9F4[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              Orientation;                                       // 0x18(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, SubobjectReference)
	bool                                         bHasPositionalTracking;                            // 0x30(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_9F7[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x38(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
};

// 0x48 (0x48 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
struct UHeadMountedDisplayFunctionLibrary_GetDevicePose_Params
{
public:
	struct FXRDeviceId                           XRDeviceId;                                        // 0x0(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         bIsTracked;                                        // 0xC(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_9FD[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              Orientation;                                       // 0x10(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, SubobjectReference)
	bool                                         bHasPositionalTracking;                            // 0x28(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_9FF[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
};

// 0x20 (0x20 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetCurrentInteractionProfile
struct UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Params
{
public:
	enum class EControllerHand                   Hand;                                              // 0x0(0x1)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A0B[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                InteractionProfile;                                // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_A0D[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC0 (0xC0 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime
struct UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst)
	int32                                        ControllerIndex;                                   // 0x8(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class FName                                  MotionSource;                                      // 0xC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_A1A[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTimespan                             Time;                                              // 0x18(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bTimeWasUsed;                                      // 0x20(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_A1B[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              Orientation;                                       // 0x28(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, SubobjectReference)
	struct FVector                               Position;                                          // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	bool                                         bProvidedLinearVelocity;                           // 0x58(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_A1C[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LinearVelocity;                                    // 0x60(0x18)(Edit, ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         bProvidedAngularVelocity;                          // 0x78(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_A1D[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               AngularVelocityRadPerSec;                          // 0x80(0x18)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bProvidedLinearAcceleration;                       // 0x98(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_A20[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LinearAcceleration;                                // 0xA0(0x18)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xB8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_A23[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
struct UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Params
{
public:
	class FName                                  SystemId;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EXRTrackedDeviceType              DeviceType;                                        // 0x8(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, EditConst)
	uint8                                        Pad_A2D[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FXRDeviceId>                   ReturnValue;                                       // 0x10(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
struct UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
struct UHeadMountedDisplayFunctionLibrary_EnableHMD_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice
struct UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Params
{
public:
	class FString                                IpAddress;                                         // 0x0(0x10)(BlueprintVisible, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	int32                                        BitRate;                                           // 0x10(0x4)(ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EXRDeviceConnectionResult         ReturnValue;                                       // 0x14(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_A3F[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x7 (0x7 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures
struct UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Params
{
public:
	struct FXRGestureConfig                      GestureConfig;                                     // 0x0(0x6)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x6(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate
struct UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Params
{
public:
	class FName                                  ActionPath;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
struct UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Params
{
public:
	struct FTransform                            ExternalTrackingTransform;                         // 0x0(0x60)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.BreakKey
struct UHeadMountedDisplayFunctionLibrary_BreakKey_Params
{
public:
	struct FKey                                  InKey;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                InteractionProfile;                                // 0x18(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EControllerHand                   Hand;                                              // 0x28(0x1)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_A59[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  MotionSource;                                      // 0x2C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_A5B[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class FString                                Indentifier;                                       // 0x38(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FString                                Component;                                         // 0x48(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
struct UMotionControllerComponent_SetTrackingSource_Params
{
public:
	enum class EControllerHand                   NewSource;                                         // 0x0(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
struct UMotionControllerComponent_SetTrackingMotionSource_Params
{
public:
	class FName                                  NewSource;                                         // 0x0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
struct UMotionControllerComponent_SetShowDeviceModel_Params
{
public:
	bool                                         bShowControllerModel;                              // 0x0(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
struct UMotionControllerComponent_SetDisplayModelSource_Params
{
public:
	class FName                                  NewDisplayModelSource;                             // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
struct UMotionControllerComponent_SetCustomDisplayMesh_Params
{
public:
	class UStaticMesh*                           NewDisplayMesh;                                    // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
struct UMotionControllerComponent_SetAssociatedPlayerIndex_Params
{
public:
	int32                                        NewPlayer;                                         // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.IsTracked
struct UMotionControllerComponent_IsTracked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
struct UMotionControllerComponent_GetTrackingSource_Params
{
public:
	enum class EControllerHand                   ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
struct UMotionControllerComponent_GetParameterValue_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bValueFound;                                       // 0x8(0x1)(Edit, BlueprintVisible, Net, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_A9D[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        ReturnValue;                                       // 0xC(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
struct UMotionControllerComponent_GetHandJointPosition_Params
{
public:
	int32                                        JointIndex;                                        // 0x0(0x4)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bValueFound;                                       // 0x4(0x1)(Edit, BlueprintVisible, Net, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_A9F[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x8(0x18)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
struct UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
struct UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  SourceName;                                        // 0x4(0x8)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         ReturnValue;                                       // 0xC(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_ACD[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
struct UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EControllerHand                   Hand;                                              // 0x4(0x1)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x5(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_AD8[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
struct UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Params
{
public:
	class UMotionControllerComponent*            MotionControllerComponent;                         // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_AE0[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
struct UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
struct UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  SourceName;                                        // 0x4(0x8)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         ReturnValue;                                       // 0xC(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_AE9[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
struct UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
struct UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
struct UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
struct UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
struct UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  SourceName;                                        // 0x4(0x8)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         ReturnValue;                                       // 0xC(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_AFA[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
struct UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EControllerHand                   Hand;                                              // 0x4(0x1)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x5(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_AFF[0x2];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
struct UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Params
{
public:
	class UMotionControllerComponent*            MotionControllerComponent;                         // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         ReturnValue;                                       // 0x8(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_B09[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FName                                  SourceName;                                        // 0x4(0x8)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class EControllerHand                   Hand;                                              // 0x4(0x1)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_B12[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Params
{
public:
	class UMotionControllerComponent*            MotionControllerComponent;                         // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
};

// 0xA0 (0xA0 - 0x0)
// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
struct UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Edit, ConstParm, ReturnParm, Transient, Config)
	class FName                                  SystemName;                                        // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
	class FName                                  DeviceName;                                        // 0x10(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bManualAttachment;                                 // 0x18(0x1)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B32[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RelativeTransform;                                 // 0x20(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FXRDeviceId                           XRDeviceId;                                        // 0x80(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_B33[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x90(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_B34[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x90 - 0x0)
// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
struct UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Edit, ConstParm, ReturnParm, Transient, Config)
	struct FXRDeviceId                           XRDeviceId;                                        // 0x8(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         bManualAttachment;                                 // 0x14(0x1)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B3F[0xB];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RelativeTransform;                                 // 0x20(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_B42[0x8];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
struct UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Edit, ConstParm, ReturnParm, Transient, Config)
	class FName                                  SystemName;                                        // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
	class FName                                  DeviceName;                                        // 0x10(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bManualAttachment;                                 // 0x18(0x1)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B51[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RelativeTransform;                                 // 0x20(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FXRDeviceId                           XRDeviceId;                                        // 0x80(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_B55[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	class UPrimitiveComponent*                   NewComponent;                                      // 0x90(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UAsyncTask_LoadXRDeviceVisComponent*   ReturnValue;                                       // 0x98(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
struct UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Edit, ConstParm, ReturnParm, Transient, Config)
	struct FXRDeviceId                           XRDeviceId;                                        // 0x8(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         bManualAttachment;                                 // 0x14(0x1)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_B60[0xB];                                      // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RelativeTransform;                                 // 0x20(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimitiveComponent*                   NewComponent;                                      // 0x80(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UAsyncTask_LoadXRDeviceVisComponent*   ReturnValue;                                       // 0x88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.XRDeviceVisualizationComponent.SetIsVisualizationActive
struct UXRDeviceVisualizationComponent_SetIsVisualizationActive_Params
{
public:
	bool                                         bNewVisualizationState;                            // 0x0(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.XRDeviceVisualizationComponent.SetIsRenderingActive
struct UXRDeviceVisualizationComponent_SetIsRenderingActive_Params
{
public:
	bool                                         bRenderingIsActive;                                // 0x0(0x1)(EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.XRDeviceVisualizationComponent.SetDisplayModelSource
struct UXRDeviceVisualizationComponent_SetDisplayModelSource_Params
{
public:
	class FName                                  NewDisplayModelSource;                             // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.XRDeviceVisualizationComponent.SetCustomDisplayMesh
struct UXRDeviceVisualizationComponent_SetCustomDisplayMesh_Params
{
public:
	class UStaticMesh*                           NewDisplayMesh;                                    // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
struct UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Params
{
public:
	class UTexture*                              Texture;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
	struct FVector2D                             Scale;                                             // 0x8(0x10)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FVector                               Offset;                                            // 0x18(0x18)(Edit, ExportObject, Parm, Transient, Config, DisableEditOnInstance, EditConst)
	bool                                         bShowLoadingMovie;                                 // 0x30(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShowOnSet;                                        // 0x31(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_B8E[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x68 (0x68 - 0x0)
// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
struct UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Params
{
public:
	class UTexture*                              Texture;                                           // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
	struct FVector                               Translation;                                       // 0x8(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FRotator                              Rotation;                                          // 0x20(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector2D                             Size;                                              // 0x38(0x10)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config)
	struct FRotator                              DeltaRotation;                                     // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	bool                                         bClearBeforeAdd;                                   // 0x60(0x1)(ConstParm, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_B9B[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

}
}


