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
	uint8                                        Pad_29E0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ReturnValue;                                       // 0x4(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
struct UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Params
{
public:
	struct FTransform                            ExternalTrackingTransform;                         // 0x0(0x60)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate
struct UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	FDelegateProperty_                           InDelegate;                                        // 0x8(0x10)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate
struct UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate_Params
{
public:
	FDelegateProperty_                           InDisconnectedDelegate;                            // 0x0(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
struct UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst)
	float                                        NewScale;                                          // 0x8(0x4)(Edit, ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_29E5[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
struct UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Params
{
public:
	enum class EHMDTrackingOrigin                Origin;                                            // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
struct UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Params
{
public:
	class UTexture*                              InTexture;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
struct UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Params
{
public:
	struct FVector2D                             EyeRectMin;                                        // 0x0(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             EyeRectMax;                                        // 0x10(0x10)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             TextureRectMin;                                    // 0x20(0x10)(BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector2D                             TextureRectMax;                                    // 0x30(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDrawEyeFirst;                                     // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bClearBlack;                                       // 0x41(0x1)(Edit, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bUseAlpha;                                         // 0x42(0x1)(Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_29EC[0x5];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
struct UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Params
{
public:
	enum class ESpectatorScreenMode              Mode;                                              // 0x0(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
struct UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Params
{
public:
	float                                        Near;                                              // 0x0(0x4)(BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Far;                                               // 0x4(0x4)(Edit, Net, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
struct UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Params
{
public:
	float                                        Yaw;                                               // 0x0(0x4)(BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config)
	enum class EOrientPositionSelector           Options;                                           // 0x4(0x1)(ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_29EE[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
struct UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
struct UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
struct UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
struct UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
struct UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Params
{
public:
	struct FXRDeviceId                           XRDeviceId;                                        // 0x0(0xC)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_29F8[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
struct UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags
struct UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
struct UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst)
	float                                        ReturnValue;                                       // 0x8(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2A1F[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x2 (0x2 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
struct UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Params
{
public:
	bool                                         bUseFocus;                                         // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bHasFocus;                                         // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString
struct UHeadMountedDisplayFunctionLibrary_GetVersionString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
struct UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst)
	uint8                                        Pad_2A20[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ReturnValue;                                       // 0x10(0x60)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
struct UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Params
{
public:
	struct FVector                               Origin;                                            // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FRotator                              Rotation;                                          // 0x18(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	float                                        LeftFOV;                                           // 0x30(0x4)(BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        RightFOV;                                          // 0x34(0x4)(Edit, ConstParm, ExportObject, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        TopFOV;                                            // 0x38(0x4)(Edit, ConstParm, BlueprintVisible, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        BottomFOV;                                         // 0x3C(0x4)(Edit, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        Distance;                                          // 0x40(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        NearPlane;                                         // 0x44(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        FarPlane;                                          // 0x48(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         IsActive;                                          // 0x4C(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate)
	uint8                                        Pad_2A24[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Index;                                             // 0x50(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	uint8                                        Pad_2A25[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOriginTransform
struct UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Params
{
public:
	enum class EHMDTrackingOrigin                Origin;                                            // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2A28[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            OutTransform;                                      // 0x10(0x60)(Edit, ConstParm, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2A2A[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
struct UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Params
{
public:
	enum class EHMDTrackingOrigin                ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
struct UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Params
{
public:
	struct FVector                               CameraOrigin;                                      // 0x0(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FRotator                              CameraRotation;                                    // 0x18(0x18)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        HFOV;                                              // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        VFOV;                                              // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CameraDistance;                                    // 0x38(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        NearPlane;                                         // 0x3C(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        FarPlane;                                          // 0x40(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A2D[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaRect
struct UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Params
{
public:
	struct FTransform                            OutTransform;                                      // 0x0(0x60)(Edit, ConstParm, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             OutRect;                                           // 0x60(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2A32[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaBounds
struct UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds_Params
{
public:
	enum class EHMDTrackingOrigin                Origin;                                            // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2A34[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ReturnValue;                                       // 0x8(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
struct UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
struct UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Params
{
public:
	struct FRotator                              DeviceRotation;                                    // 0x0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               DevicePosition;                                    // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
struct UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x130 (0x130 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData
struct UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst)
	enum class EControllerHand                   Hand;                                              // 0x8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A3F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FXRMotionControllerData               MotionControllerData;                              // 0x10(0x120)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
struct UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Params
{
public:
	enum class EHMDWornState                     ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
struct UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData
struct UHeadMountedDisplayFunctionLibrary_GetHMDData_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst)
	uint8                                        Pad_2A45[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FXRHMDData                            HMDData;                                           // 0x10(0x60)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
struct UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst)
	struct FXRDeviceId                           XRDeviceId;                                        // 0x8(0xC)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         bIsTracked;                                        // 0x14(0x1)(ExportObject, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A4A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              Orientation;                                       // 0x18(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	bool                                         bHasPositionalTracking;                            // 0x30(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A4B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x38(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
};

// 0x48 (0x48 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
struct UHeadMountedDisplayFunctionLibrary_GetDevicePose_Params
{
public:
	struct FXRDeviceId                           XRDeviceId;                                        // 0x0(0xC)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         bIsTracked;                                        // 0xC(0x1)(ExportObject, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A4D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              Orientation;                                       // 0x10(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	bool                                         bHasPositionalTracking;                            // 0x28(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A4E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x30(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
};

// 0x20 (0x20 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetCurrentInteractionProfile
struct UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Params
{
public:
	enum class EControllerHand                   Hand;                                              // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A52[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                InteractionProfile;                                // 0x8(0x10)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2A54[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC0 (0xC0 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime
struct UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst)
	int32                                        ControllerIndex;                                   // 0x8(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  MotionSource;                                      // 0xC(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A59[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTimespan                             Time;                                              // 0x18(0x8)(Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         bTimeWasUsed;                                      // 0x20(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A5B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              Orientation;                                       // 0x28(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	struct FVector                               Position;                                          // 0x40(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	bool                                         bProvidedLinearVelocity;                           // 0x58(0x1)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A5D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LinearVelocity;                                    // 0x60(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bProvidedAngularVelocity;                          // 0x78(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A5E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               AngularVelocityRadPerSec;                          // 0x80(0x18)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bProvidedLinearAcceleration;                       // 0x98(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A61[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LinearAcceleration;                                // 0xA0(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xB8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2A63[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
struct UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Params
{
public:
	class FName                                  SystemId;                                          // 0x0(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EXRTrackedDeviceType              DeviceType;                                        // 0x8(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
	uint8                                        Pad_2A67[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FXRDeviceId>                   ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
struct UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
struct UHeadMountedDisplayFunctionLibrary_EnableHMD_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice
struct UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Params
{
public:
	class FString                                IpAddress;                                         // 0x0(0x10)(BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	int32                                        BitRate;                                           // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EXRDeviceConnectionResult         ReturnValue;                                       // 0x14(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2A6E[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x7 (0x7 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures
struct UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Params
{
public:
	struct FXRGestureConfig                      GestureConfig;                                     // 0x0(0x6)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x6(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate
struct UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Params
{
public:
	class FName                                  ActionPath;                                        // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
struct UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Params
{
public:
	struct FTransform                            ExternalTrackingTransform;                         // 0x0(0x60)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.BreakKey
struct UHeadMountedDisplayFunctionLibrary_BreakKey_Params
{
public:
	struct FKey                                  InKey;                                             // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                InteractionProfile;                                // 0x18(0x10)(Edit, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EControllerHand                   Hand;                                              // 0x28(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A77[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  MotionSource;                                      // 0x2C(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A78[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Indentifier;                                       // 0x38(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                Component;                                         // 0x48(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
struct UMotionControllerComponent_SetTrackingSource_Params
{
public:
	enum class EControllerHand                   NewSource;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
struct UMotionControllerComponent_SetTrackingMotionSource_Params
{
public:
	class FName                                  NewSource;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
struct UMotionControllerComponent_SetShowDeviceModel_Params
{
public:
	bool                                         bShowControllerModel;                              // 0x0(0x1)(Edit, ConstParm, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
struct UMotionControllerComponent_SetDisplayModelSource_Params
{
public:
	class FName                                  NewDisplayModelSource;                             // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
struct UMotionControllerComponent_SetCustomDisplayMesh_Params
{
public:
	class UStaticMesh*                           NewDisplayMesh;                                    // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
struct UMotionControllerComponent_SetAssociatedPlayerIndex_Params
{
public:
	int32                                        NewPlayer;                                         // 0x0(0x4)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.IsTracked
struct UMotionControllerComponent_IsTracked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
struct UMotionControllerComponent_GetTrackingSource_Params
{
public:
	enum class EControllerHand                   ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
struct UMotionControllerComponent_GetParameterValue_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bValueFound;                                       // 0x8(0x1)(ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A98[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ReturnValue;                                       // 0xC(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
struct UMotionControllerComponent_GetHandJointPosition_Params
{
public:
	int32                                        JointIndex;                                        // 0x0(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bValueFound;                                       // 0x4(0x1)(ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2A9B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ReturnValue;                                       // 0x8(0x18)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
struct UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
struct UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  SourceName;                                        // 0x4(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2B80[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
struct UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EControllerHand                   Hand;                                              // 0x4(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2B84[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
struct UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Params
{
public:
	class UMotionControllerComponent*            MotionControllerComponent;                         // 0x0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2B8B[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
struct UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
struct UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  SourceName;                                        // 0x4(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2B90[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
struct UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
struct UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
struct UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
struct UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
struct UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  SourceName;                                        // 0x4(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2BAF[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
struct UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EControllerHand                   Hand;                                              // 0x4(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2BB5[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
struct UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Params
{
public:
	class UMotionControllerComponent*            MotionControllerComponent;                         // 0x0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2BBB[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FName                                  SourceName;                                        // 0x4(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EControllerHand                   Hand;                                              // 0x4(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BC3[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Params
{
public:
	int32                                        PlayerIndex;                                       // 0x0(0x4)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Params
{
public:
	class UMotionControllerComponent*            MotionControllerComponent;                         // 0x0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig)
};

// 0xA0 (0xA0 - 0x0)
// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
struct UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	class FName                                  SystemName;                                        // 0x8(0x8)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	class FName                                  DeviceName;                                        // 0x10(0x8)(EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bManualAttachment;                                 // 0x18(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BDE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RelativeTransform;                                 // 0x20(0x60)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	struct FXRDeviceId                           XRDeviceId;                                        // 0x80(0xC)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_2BDF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x90(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2BE0[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x90 - 0x0)
// Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
struct UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	struct FXRDeviceId                           XRDeviceId;                                        // 0x8(0xC)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         bManualAttachment;                                 // 0x14(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BE2[0xB];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RelativeTransform;                                 // 0x20(0x60)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x80(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2BE4[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
struct UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	class FName                                  SystemName;                                        // 0x8(0x8)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	class FName                                  DeviceName;                                        // 0x10(0x8)(EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bManualAttachment;                                 // 0x18(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BEC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RelativeTransform;                                 // 0x20(0x60)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	struct FXRDeviceId                           XRDeviceId;                                        // 0x80(0xC)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	uint8                                        Pad_2BEE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimitiveComponent*                   NewComponent;                                      // 0x90(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UAsyncTask_LoadXRDeviceVisComponent*   ReturnValue;                                       // 0x98(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
struct UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
	struct FXRDeviceId                           XRDeviceId;                                        // 0x8(0xC)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         bManualAttachment;                                 // 0x14(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2BF3[0xB];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RelativeTransform;                                 // 0x20(0x60)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	class UPrimitiveComponent*                   NewComponent;                                      // 0x80(0x8)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UAsyncTask_LoadXRDeviceVisComponent*   ReturnValue;                                       // 0x88(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.XRDeviceVisualizationComponent.SetIsVisualizationActive
struct UXRDeviceVisualizationComponent_SetIsVisualizationActive_Params
{
public:
	bool                                         bNewVisualizationState;                            // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function HeadMountedDisplay.XRDeviceVisualizationComponent.SetIsRenderingActive
struct UXRDeviceVisualizationComponent_SetIsRenderingActive_Params
{
public:
	bool                                         bRenderingIsActive;                                // 0x0(0x1)(Edit, BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.XRDeviceVisualizationComponent.SetDisplayModelSource
struct UXRDeviceVisualizationComponent_SetDisplayModelSource_Params
{
public:
	class FName                                  NewDisplayModelSource;                             // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function HeadMountedDisplay.XRDeviceVisualizationComponent.SetCustomDisplayMesh
struct UXRDeviceVisualizationComponent_SetCustomDisplayMesh_Params
{
public:
	class UStaticMesh*                           NewDisplayMesh;                                    // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
struct UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Params
{
public:
	class UTexture*                              Texture;                                           // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	struct FVector2D                             Scale;                                             // 0x8(0x10)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	struct FVector                               Offset;                                            // 0x18(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	bool                                         bShowLoadingMovie;                                 // 0x30(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShowOnSet;                                        // 0x31(0x1)(BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C0A[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x68 (0x68 - 0x0)
// Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
struct UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Params
{
public:
	class UTexture*                              Texture;                                           // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	struct FVector                               Translation;                                       // 0x8(0x18)(ConstParm, Parm, ZeroConstructor, Transient, Config)
	struct FRotator                              Rotation;                                          // 0x20(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector2D                             Size;                                              // 0x38(0x10)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	struct FRotator                              DeltaRotation;                                     // 0x48(0x18)(BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bClearBeforeAdd;                                   // 0x60(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C12[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

}
}


