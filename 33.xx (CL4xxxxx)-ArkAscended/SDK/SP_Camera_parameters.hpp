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
	class AActor*                                ViewTarget;                                        // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_216D[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            ViewToWorld;                                       // 0x10(0x60)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        ReturnValue;                                       // 0x70(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_216E[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function SP_Camera.SPCam_AttachedCamera.ChooseViewCameraComponent
struct USPCam_AttachedCamera_ChooseViewCameraComponent_Params
{
public:
	class AActor*                                ViewTarget;                                        // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class UCameraComponent*                      ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.StopAmbientCameraShake
struct ASPPlayerCameraManager_StopAmbientCameraShake_Params
{
public:
	bool                                         bImmediate;                                        // 0x0(0x1)(Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.SetViewPitchLimits
struct ASPPlayerCameraManager_SetViewPitchLimits_Params
{
public:
	float                                        MinPitch;                                          // 0x0(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxPitch;                                          // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.SetUsingAlternateCamera
struct ASPPlayerCameraManager_SetUsingAlternateCamera_Params
{
public:
	bool                                         bNewUsingAltCamera;                                // 0x0(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.SetDebugCameraStyle
struct ASPPlayerCameraManager_SetDebugCameraStyle_Params
{
public:
	enum class EDebugCameraStyle                 NewDebugCameraStyle;                               // 0x0(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.IsUsingAlternateCamera
struct ASPPlayerCameraManager_IsUsingAlternateCamera_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.GetCurrentCameraMode
struct ASPPlayerCameraManager_GetCurrentCameraMode_Params
{
public:
	class USPCameraMode*                         ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.GetCameraClassForCharacter
struct ASPPlayerCameraManager_GetCameraClassForCharacter_Params
{
public:
	class AActor*                                InViewTarget;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class UClass*                                ReturnValue;                                       // 0x8(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function SP_Camera.SPPlayerCameraManager.ConfigureAlternateCamera
struct ASPPlayerCameraManager_ConfigureAlternateCamera_Params
{
public:
	class UClass*                                NewAltCameraMode;                                  // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class AActor*                                NewAltViewTarget;                                  // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        NewAltCameraTransitionTime;                        // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_218C[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

}
}


