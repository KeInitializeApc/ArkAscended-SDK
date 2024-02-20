#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECameraAutoFollowMode : uint8
{
	None                           = 0,
	LazyFollow                     = 1,
	FullFollow                     = 2,
	ECameraAutoFollowMode_MAX      = 3,
};

enum class EDebugCameraStyle : uint8
{
	None                           = 0,
	Fixed                          = 1,
	ThirdPerson                    = 2,
	FreeCam                        = 3,
	FreeCam_Default                = 4,
	FirstPerson                    = 5,
	EDebugCameraStyle_MAX          = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct SP_Camera.PenetrationAvoidanceRay
struct FPenetrationAvoidanceRay
{
public:
	struct FRotator                              AdjustmentRot;                                     // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        WorldWeight;                                       // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Radius;                                            // 0x1C(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	int32                                        TraceInterval;                                     // 0x20(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FramesUntilNextTrace;                              // 0x24(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnabled;                                          // 0x28(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         bPrimaryRay;                                       // 0x29(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1238[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8A0 (0x8A0 - 0x0)
// ScriptStruct SP_Camera.ActiveSPCamera
struct FActiveSPCamera
{
public:
	class USPCameraMode*                         Camera;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class AActor*                                ViewTarget;                                        // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_123C[0x890];                                   // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SP_Camera.SPCameraModeInstance
struct FSPCameraModeInstance
{
public:
	class UClass*                                CameraModeClass;                                   // 0x0(0x8)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class AActor*                                ViewTarget;                                        // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class USPCameraMode*                         CameraMode;                                        // 0x10(0x8)(BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UCineCameraComponent*                  CineCameraComponent;                               // 0x18(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
};

}


