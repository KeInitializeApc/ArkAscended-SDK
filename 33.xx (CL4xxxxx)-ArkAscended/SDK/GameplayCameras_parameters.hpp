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
	class APlayerCameraManager*                  PlayerCameraManager;                               // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, SubobjectReference)
	class UClass*                                ShakeClass;                                        // 0x8(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UCameraShakeSourceComponent*           SourceComponent;                                   // 0x10(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Scale;                                             // 0x18(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	enum class ECameraShakePlaySpace             PlaySpace;                                         // 0x1C(0x1)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EC9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              UserPlaySpaceRot;                                  // 0x20(0x18)(EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UMatineeCameraShake*                   ReturnValue;                                       // 0x38(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake
struct UMatineeCameraShake_StartMatineeCameraShake_Params
{
public:
	class APlayerCameraManager*                  PlayerCameraManager;                               // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, SubobjectReference)
	class UClass*                                ShakeClass;                                        // 0x8(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        Scale;                                             // 0x10(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	enum class ECameraShakePlaySpace             PlaySpace;                                         // 0x14(0x1)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EDD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              UserPlaySpaceRot;                                  // 0x18(0x18)(EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UMatineeCameraShake*                   ReturnValue;                                       // 0x30(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function GameplayCameras.MatineeCameraShake.ReceiveStopShake
struct UMatineeCameraShake_ReceiveStopShake_Params
{
public:
	bool                                         bImmediately;                                      // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function GameplayCameras.MatineeCameraShake.ReceivePlayShake
struct UMatineeCameraShake_ReceivePlayShake_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
};

// 0x1 (0x1 - 0x0)
// Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished
struct UMatineeCameraShake_ReceiveIsFinished_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10D0 (0x10D0 - 0x0)
// Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake
struct UMatineeCameraShake_BlueprintUpdateCameraShake_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	float                                        Alpha;                                             // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1EEC[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMinimalViewInfo                      POV;                                               // 0x10(0x860)(ConstParm, ExportObject, Net, ReturnParm, EditConst)
	struct FMinimalViewInfo                      ModifiedPOV;                                       // 0x870(0x860)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake
struct UMatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake_Params
{
public:
	class UCameraShakeBase*                      CameraShake;                                       // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, Config, EditConst, SubobjectReference)
	class UMatineeCameraShake*                   ReturnValue;                                       // 0x8(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x6 (0x6 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation
struct UCameraAnimationCameraModifier_StopCameraAnimation_Params
{
public:
	struct FCameraAnimationHandle                Handle;                                            // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bImmediate;                                        // 0x4(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F2C[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf
struct UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Params
{
public:
	class UCameraAnimationSequence*              Sequence;                                          // 0x0(0x8)(BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         bImmediate;                                        // 0x8(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F38[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations
struct UCameraAnimationCameraModifier_StopAllCameraAnimations_Params
{
public:
	bool                                         bImmediate;                                        // 0x0(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation
struct UCameraAnimationCameraModifier_PlayCameraAnimation_Params
{
public:
	class UCameraAnimationSequence*              Sequence;                                          // 0x0(0x8)(BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	struct FCameraAnimationParams                Params;                                            // 0x8(0x40)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	struct FCameraAnimationHandle                ReturnValue;                                       // 0x48(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1F3F[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x6 (0x6 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive
struct UCameraAnimationCameraModifier_IsCameraAnimationActive_Params
{
public:
	struct FCameraAnimationHandle                Handle;                                            // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1F45[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController
struct UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class UCameraAnimationCameraModifier*        ReturnValue;                                       // 0x8(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID
struct UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        ControllerId;                                      // 0x8(0x4)(Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1F4D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCameraAnimationCameraModifier*        ReturnValue;                                       // 0x10(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier
struct UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        PlayerIndex;                                       // 0x8(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F51[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCameraAnimationCameraModifier*        ReturnValue;                                       // 0x10(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function GameplayCameras.GameplayCamerasSubsystem.StopCameraAnimation
struct UGameplayCamerasSubsystem_StopCameraAnimation_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FCameraAnimationHandle                Handle;                                            // 0x8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bImmediate;                                        // 0xC(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F60[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimationsOf
struct UGameplayCamerasSubsystem_StopAllCameraAnimationsOf_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class UCameraAnimationSequence*              Sequence;                                          // 0x8(0x8)(BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         bImmediate;                                        // 0x10(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F63[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimations
struct UGameplayCamerasSubsystem_StopAllCameraAnimations_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         bImmediate;                                        // 0x8(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F69[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// Function GameplayCameras.GameplayCamerasSubsystem.PlayCameraAnimation
struct UGameplayCamerasSubsystem_PlayCameraAnimation_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class UCameraAnimationSequence*              Sequence;                                          // 0x8(0x8)(BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	struct FCameraAnimationParams                Params;                                            // 0x10(0x40)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	struct FCameraAnimationHandle                ReturnValue;                                       // 0x50(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1F6E[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function GameplayCameras.GameplayCamerasSubsystem.IsCameraAnimationActive
struct UGameplayCamerasSubsystem_IsCameraAnimationActive_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FCameraAnimationHandle                Handle;                                            // 0x8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1F72[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

}
}


