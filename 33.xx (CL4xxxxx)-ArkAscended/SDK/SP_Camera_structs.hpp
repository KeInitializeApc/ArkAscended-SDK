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
	struct FRotator                              AdjustmentRot;                                     // 0x0(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        WorldWeight;                                       // 0x18(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        Radius;                                            // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        TraceInterval;                                     // 0x20(0x4)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	int32                                        FramesUntilNextTrace;                              // 0x24(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bEnabled;                                          // 0x28(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	bool                                         bPrimaryRay;                                       // 0x29(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E70[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x890 (0x890 - 0x0)
// ScriptStruct SP_Camera.ActiveSPCamera
struct FActiveSPCamera
{
public:
	class USPCameraMode*                         Camera;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
	class AActor*                                ViewTarget;                                        // 0x8(0x8)(Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E73[0x880];                                   // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SP_Camera.SPCameraModeInstance
struct FSPCameraModeInstance
{
public:
	class UClass*                                CameraModeClass;                                   // 0x0(0x8)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class AActor*                                ViewTarget;                                        // 0x8(0x8)(Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class USPCameraMode*                         CameraMode;                                        // 0x10(0x8)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class UCineCameraComponent*                  CineCameraComponent;                               // 0x18(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
};

}


