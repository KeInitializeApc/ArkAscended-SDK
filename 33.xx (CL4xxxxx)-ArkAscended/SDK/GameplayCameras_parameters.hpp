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

// 0x40 (0x40 - 0x0)
// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource
struct UMatineeCameraShake_StartMatineeCameraShakeFromSource_Params
{
public:
	class APlayerCameraManager*                  PlayerCameraManager;                               // 0x0(0x8)(BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UClass*                                ShakeClass;                                        // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCameraShakeSourceComponent*           SourceComponent;                                   // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Scale;                                             // 0x18(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	enum class ECameraShakePlaySpace             PlaySpace;                                         // 0x1C(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_134E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              UserPlaySpaceRot;                                  // 0x20(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UMatineeCameraShake*                   ReturnValue;                                       // 0x38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake
struct UMatineeCameraShake_StartMatineeCameraShake_Params
{
public:
	class APlayerCameraManager*                  PlayerCameraManager;                               // 0x0(0x8)(BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UClass*                                ShakeClass;                                        // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Scale;                                             // 0x10(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	enum class ECameraShakePlaySpace             PlaySpace;                                         // 0x14(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1354[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              UserPlaySpaceRot;                                  // 0x18(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UMatineeCameraShake*                   ReturnValue;                                       // 0x30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GameplayCameras.MatineeCameraShake.ReceiveStopShake
struct UMatineeCameraShake_ReceiveStopShake_Params
{
public:
	bool                                         bImmediately;                                      // 0x0(0x1)(BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function GameplayCameras.MatineeCameraShake.ReceivePlayShake
struct UMatineeCameraShake_ReceivePlayShake_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
};

// 0x1 (0x1 - 0x0)
// Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished
struct UMatineeCameraShake_ReceiveIsFinished_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10F0 (0x10F0 - 0x0)
// Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake
struct UMatineeCameraShake_BlueprintUpdateCameraShake_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        Alpha;                                             // 0x4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1365[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMinimalViewInfo                      POV;                                               // 0x10(0x870)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst)
	struct FMinimalViewInfo                      ModifiedPOV;                                       // 0x880(0x870)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake
struct UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Params
{
public:
	class UCameraShakeBase*                      CameraShake;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UMatineeCameraShake*                   ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x6 (0x6 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation
struct UCameraAnimationCameraModifier_StopCameraAnimation_Params
{
public:
	struct FCameraAnimationHandle                Handle;                                            // 0x0(0x4)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         bImmediate;                                        // 0x4(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1388[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf
struct UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Params
{
public:
	class UCameraAnimationSequence*              Sequence;                                          // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bImmediate;                                        // 0x8(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_138F[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations
struct UCameraAnimationCameraModifier_StopAllCameraAnimations_Params
{
public:
	bool                                         bImmediate;                                        // 0x0(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation
struct UCameraAnimationCameraModifier_PlayCameraAnimation_Params
{
public:
	class UCameraAnimationSequence*              Sequence;                                          // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FCameraAnimationParams                Params;                                            // 0x8(0x40)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FCameraAnimationHandle                ReturnValue;                                       // 0x48(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1399[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x6 (0x6 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive
struct UCameraAnimationCameraModifier_IsCameraAnimationActive_Params
{
public:
	struct FCameraAnimationHandle                Handle;                                            // 0x0(0x4)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x4(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_139D[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController
struct UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UCameraAnimationCameraModifier*        ReturnValue;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID
struct UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        ControllerId;                                      // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_13A4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCameraAnimationCameraModifier*        ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier
struct UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        PlayerIndex;                                       // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_13A8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCameraAnimationCameraModifier*        ReturnValue;                                       // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function GameplayCameras.GameplayCamerasSubsystem.StopCameraAnimation
struct UGameplayCamerasSubsystem_StopCameraAnimation_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	struct FCameraAnimationHandle                Handle;                                            // 0x8(0x4)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         bImmediate;                                        // 0xC(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_13B5[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimationsOf
struct UGameplayCamerasSubsystem_StopAllCameraAnimationsOf_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UCameraAnimationSequence*              Sequence;                                          // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bImmediate;                                        // 0x10(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_13B8[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimations
struct UGameplayCamerasSubsystem_StopAllCameraAnimations_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         bImmediate;                                        // 0x8(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_13BC[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// Function GameplayCameras.GameplayCamerasSubsystem.PlayCameraAnimation
struct UGameplayCamerasSubsystem_PlayCameraAnimation_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UCameraAnimationSequence*              Sequence;                                          // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FCameraAnimationParams                Params;                                            // 0x10(0x40)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FCameraAnimationHandle                ReturnValue;                                       // 0x50(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_13C1[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GameplayCameras.GameplayCamerasSubsystem.IsCameraAnimationActive
struct UGameplayCamerasSubsystem_IsCameraAnimationActive_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	struct FCameraAnimationHandle                Handle;                                            // 0x8(0x4)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xC(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_13C6[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

}
}


