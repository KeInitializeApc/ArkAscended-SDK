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

// 0x80 (0x80 - 0x0)
// Function SP_Camera.SPCameraMode.GetCustomFocusDistance
struct USPCameraMode_GetCustomFocusDistance_Params
{
public:
	class AActor*                                ViewTarget;                                        // 0x0(0x8)(Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1DCC[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ViewToWorld;                                       // 0x10(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x70(0x4)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_1DCE[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function SP_Camera.SPCam_AttachedCamera.ChooseViewCameraComponent
struct USPCam_AttachedCamera_ChooseViewCameraComponent_Params
{
public:
	class AActor*                                ViewTarget;                                        // 0x0(0x8)(Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class UCameraComponent*                      ReturnValue;                                       // 0x8(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.StopAmbientCameraShake
struct ASPPlayerCameraManager_StopAmbientCameraShake_Params
{
public:
	bool                                         bImmediate;                                        // 0x0(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.SetViewPitchLimits
struct ASPPlayerCameraManager_SetViewPitchLimits_Params
{
public:
	float                                        MinPitch;                                          // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxPitch;                                          // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.SetUsingAlternateCamera
struct ASPPlayerCameraManager_SetUsingAlternateCamera_Params
{
public:
	bool                                         bNewUsingAltCamera;                                // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.SetDebugCameraStyle
struct ASPPlayerCameraManager_SetDebugCameraStyle_Params
{
public:
	enum class EDebugCameraStyle                 NewDebugCameraStyle;                               // 0x0(0x1)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.IsUsingAlternateCamera
struct ASPPlayerCameraManager_IsUsingAlternateCamera_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.GetCurrentCameraMode
struct ASPPlayerCameraManager_GetCurrentCameraMode_Params
{
public:
	class USPCameraMode*                         ReturnValue;                                       // 0x0(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.GetCameraClassForCharacter
struct ASPPlayerCameraManager_GetCameraClassForCharacter_Params
{
public:
	class AActor*                                InViewTarget;                                      // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                ReturnValue;                                       // 0x8(0x8)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.ConfigureAlternateCamera
struct ASPPlayerCameraManager_ConfigureAlternateCamera_Params
{
public:
	class UClass*                                NewAltCameraMode;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class AActor*                                NewAltViewTarget;                                  // 0x8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        NewAltCameraTransitionTime;                        // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E67[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

}
}


