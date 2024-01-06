#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOrientPositionSelector : uint8
{
	Orientation                    = 0,
	Position                       = 1,
	OrientationAndPosition         = 2,
	EOrientPositionSelector_MAX    = 3,
};

enum class EHMDTrackingOrigin : uint8
{
	Floor                          = 0,
	Eye                            = 1,
	Stage                          = 2,
	EHMDTrackingOrigin_MAX         = 3,
};

enum class EHMDWornState : uint8
{
	Unknown                        = 0,
	Worn                           = 1,
	NotWorn                        = 2,
	EHMDWornState_MAX              = 3,
};

enum class EXRDeviceConnectionResult : uint8
{
	NoTrackingSystem               = 0,
	FeatureNotSupported            = 1,
	NoValidViewport                = 2,
	MiscFailure                    = 3,
	Success                        = 4,
	EXRDeviceConnectionResult_MAX  = 5,
};

enum class EXRSystemFlags : uint8
{
	NoFlags                        = 0,
	IsAR                           = 1,
	IsTablet                       = 2,
	IsHeadMounted                  = 4,
	SupportsHandTracking           = 8,
	EXRSystemFlags_MAX             = 9,
};

enum class ESpectatorScreenMode : uint8
{
	Disabled                       = 0,
	SingleEyeLetterboxed           = 1,
	Undistorted                    = 2,
	Distorted                      = 3,
	SingleEye                      = 4,
	SingleEyeCroppedToFill         = 5,
	Texture                        = 6,
	TexturePlusEye                 = 7,
	ESpectatorScreenMode_MAX       = 8,
};

enum class EXRTrackedDeviceType : uint8
{
	HeadMountedDisplay             = 0,
	Controller                     = 1,
	TrackingReference              = 2,
	Tracker                        = 3,
	Other                          = 4,
	Invalid                        = 254,
	Any                            = 255,
	EXRTrackedDeviceType_MAX       = 256,
};

enum class EHandKeypoint : uint8
{
	Palm                           = 0,
	Wrist                          = 1,
	ThumbMetacarpal                = 2,
	ThumbProximal                  = 3,
	ThumbDistal                    = 4,
	ThumbTip                       = 5,
	IndexMetacarpal                = 6,
	IndexProximal                  = 7,
	IndexIntermediate              = 8,
	IndexDistal                    = 9,
	IndexTip                       = 10,
	MiddleMetacarpal               = 11,
	MiddleProximal                 = 12,
	MiddleIntermediate             = 13,
	MiddleDistal                   = 14,
	MiddleTip                      = 15,
	RingMetacarpal                 = 16,
	RingProximal                   = 17,
	RingIntermediate               = 18,
	RingDistal                     = 19,
	RingTip                        = 20,
	LittleMetacarpal               = 21,
	LittleProximal                 = 22,
	LittleIntermediate             = 23,
	LittleDistal                   = 24,
	LittleTip                      = 25,
	EHandKeypoint_MAX              = 26,
};

enum class EXRVisualType : uint8
{
	Controller                     = 0,
	Hand                           = 1,
	EXRVisualType_MAX              = 2,
};

enum class ETrackingStatus : uint8
{
	NotTracked                     = 0,
	InertialOnly                   = 1,
	Tracked                        = 2,
	ETrackingStatus_MAX            = 3,
};

enum class ESpatialInputGestureAxis : uint8
{
	None                           = 0,
	Manipulation                   = 1,
	Navigation                     = 2,
	NavigationRails                = 3,
	ESpatialInputGestureAxis_MAX   = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x60 - 0x0)
// ScriptStruct HeadMountedDisplay.XRHMDData
struct FXRHMDData
{
public:
	bool                                         bValid;                                            // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_23BB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  DeviceName;                                        // 0x4(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FGuid                                 ApplicationInstanceID;                             // 0xC(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class ETrackingStatus                   TrackingStatus;                                    // 0x1C(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_23BE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x20(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	uint8                                        Pad_23BF[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 Rotation;                                          // 0x40(0x20)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
};

// 0x120 (0x120 - 0x0)
// ScriptStruct HeadMountedDisplay.XRMotionControllerData
struct FXRMotionControllerData
{
public:
	bool                                         bValid;                                            // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_23C0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  DeviceName;                                        // 0x4(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FGuid                                 ApplicationInstanceID;                             // 0xC(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EXRVisualType                     DeviceVisualType;                                  // 0x1C(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class EControllerHand                   HandIndex;                                         // 0x1D(0x1)(BlueprintVisible, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class ETrackingStatus                   TrackingStatus;                                    // 0x1E(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_23C3[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               GripPosition;                                      // 0x20(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_23C4[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 GripRotation;                                      // 0x40(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               AimPosition;                                       // 0x60(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_23C5[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 AimRotation;                                       // 0x80(0x20)(ExportObject, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               PalmPosition;                                      // 0xA0(0x18)(Edit, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_23C6[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FQuat                                 PalmRotation;                                      // 0xC0(0x20)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FVector>                       HandKeyPositions;                                  // 0xE0(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<struct FQuat>                         HandKeyRotations;                                  // 0xF0(0x10)(ExportObject, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<float>                                HandKeyRadii;                                      // 0x100(0x10)(Edit, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bIsGrasped;                                        // 0x110(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_23C9[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x6 (0x6 - 0x0)
// ScriptStruct HeadMountedDisplay.XRGestureConfig
struct FXRGestureConfig
{
public:
	bool                                         bTap;                                              // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bHold;                                             // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	enum class ESpatialInputGestureAxis          AxisGesture;                                       // 0x2(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bNavigationAxisX;                                  // 0x3(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bNavigationAxisY;                                  // 0x4(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bNavigationAxisZ;                                  // 0x5(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct HeadMountedDisplay.XRDeviceId
struct FXRDeviceId
{
public:
	class FName                                  SystemName;                                        // 0x0(0x8)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
	int32                                        DeviceID;                                          // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor)
};

}


