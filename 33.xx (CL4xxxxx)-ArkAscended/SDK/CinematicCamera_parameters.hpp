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
// Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
struct ACameraRig_Rail_GetRailSplineComponent_Params
{
public:
	class USplineComponent*                      ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function CinematicCamera.CineCameraActor.GetCineCameraComponent
struct ACineCameraActor_GetCineCameraComponent_Params
{
public:
	class UCineCameraComponent*                  ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function CinematicCamera.CineCameraComponent.SetLensSettings
struct UCineCameraComponent_SetLensSettings_Params
{
public:
	struct FCameraLensSettings                   NewLensSettings;                                   // 0x0(0x1C)(Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraComponent.SetLensPresetByName
struct UCineCameraComponent_SetLensPresetByName_Params
{
public:
	class FString                                InPresetName;                                      // 0x0(0x10)(Edit, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function CinematicCamera.CineCameraComponent.SetFocusSettings
struct UCineCameraComponent_SetFocusSettings_Params
{
public:
	struct FCameraFocusSettings                  NewFocusSettings;                                  // 0x0(0x68)(ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
struct UCineCameraComponent_SetFilmbackPresetByName_Params
{
public:
	class FString                                InPresetName;                                      // 0x0(0x10)(Edit, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function CinematicCamera.CineCameraComponent.SetFilmback
struct UCineCameraComponent_SetFilmback_Params
{
public:
	struct FCameraFilmbackSettings               NewFilmback;                                       // 0x0(0xC)(Edit, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function CinematicCamera.CineCameraComponent.SetCustomNearClippingPlane
struct UCineCameraComponent_SetCustomNearClippingPlane_Params
{
public:
	float                                        NewCustomNearClippingPlane;                        // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
struct UCineCameraComponent_SetCurrentFocalLength_Params
{
public:
	float                                        InFocalLength;                                     // 0x0(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function CinematicCamera.CineCameraComponent.SetCurrentAperture
struct UCineCameraComponent_SetCurrentAperture_Params
{
public:
	float                                        NewCurrentAperture;                                // 0x0(0x4)(Edit, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function CinematicCamera.CineCameraComponent.SetCropSettings
struct UCineCameraComponent_SetCropSettings_Params
{
public:
	struct FPlateCropSettings                    NewCropSettings;                                   // 0x0(0x4)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraComponent.SetCropPresetByName
struct UCineCameraComponent_SetCropPresetByName_Params
{
public:
	class FString                                InPresetName;                                      // 0x0(0x10)(Edit, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
struct UCineCameraComponent_GetVerticalFieldOfView_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
struct UCineCameraComponent_GetLensPresetsCopy_Params
{
public:
	TArray<struct FNamedLensPreset>              ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraComponent.GetLensPresetName
struct UCineCameraComponent_GetLensPresetName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
struct UCineCameraComponent_GetHorizontalFieldOfView_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
struct UCineCameraComponent_GetFilmbackPresetsCopy_Params
{
public:
	TArray<struct FNamedFilmbackPreset>          ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
struct UCineCameraComponent_GetFilmbackPresetName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
struct UCineCameraComponent_GetDefaultFilmbackPresetName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraComponent.GetCropPresetName
struct UCineCameraComponent_GetCropPresetName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraSettings.SetLensPresets
struct UCineCameraSettings_SetLensPresets_Params
{
public:
	TArray<struct FNamedLensPreset>              InLensPresets;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraSettings.SetFilmbackPresets
struct UCineCameraSettings_SetFilmbackPresets_Params
{
public:
	TArray<struct FNamedFilmbackPreset>          InFilmbackPresets;                                 // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraSettings.SetDefaultLensPresetName
struct UCineCameraSettings_SetDefaultLensPresetName_Params
{
public:
	class FString                                InDefaultLensPresetName;                           // 0x0(0x10)(Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function CinematicCamera.CineCameraSettings.SetDefaultLensFStop
struct UCineCameraSettings_SetDefaultLensFStop_Params
{
public:
	float                                        InDefaultLensFStop;                                // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function CinematicCamera.CineCameraSettings.SetDefaultLensFocalLength
struct UCineCameraSettings_SetDefaultLensFocalLength_Params
{
public:
	float                                        InDefaultLensFocalLength;                          // 0x0(0x4)(Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraSettings.SetDefaultFilmbackPreset
struct UCineCameraSettings_SetDefaultFilmbackPreset_Params
{
public:
	class FString                                InDefaultFilmbackPreset;                           // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraSettings.SetDefaultCropPresetName
struct UCineCameraSettings_SetDefaultCropPresetName_Params
{
public:
	class FString                                InDefaultCropPresetName;                           // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraSettings.SetCropPresets
struct UCineCameraSettings_SetCropPresets_Params
{
public:
	TArray<struct FNamedPlateCropPreset>         InCropPresets;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraSettings.GetLensPresetNames
struct UCineCameraSettings_GetLensPresetNames_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function CinematicCamera.CineCameraSettings.GetLensPresetByName
struct UCineCameraSettings_GetLensPresetByName_Params
{
public:
	class FString                                PresetName;                                        // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FCameraLensSettings                   LensSettings;                                      // 0x10(0x1C)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst)
	bool                                         ReturnValue;                                       // 0x2C(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_189[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraSettings.GetFilmbackPresetNames
struct UCineCameraSettings_GetFilmbackPresetNames_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function CinematicCamera.CineCameraSettings.GetFilmbackPresetByName
struct UCineCameraSettings_GetFilmbackPresetByName_Params
{
public:
	class FString                                PresetName;                                        // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FCameraFilmbackSettings               FilmbackSettings;                                  // 0x10(0xC)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_18C[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraSettings.GetCropPresetNames
struct UCineCameraSettings_GetCropPresetNames_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function CinematicCamera.CineCameraSettings.GetCropPresetByName
struct UCineCameraSettings_GetCropPresetByName_Params
{
public:
	class FString                                PresetName;                                        // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FPlateCropSettings                    CropSettings;                                      // 0x10(0x4)(ConstParm, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x14(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_18F[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function CinematicCamera.CineCameraSettings.GetCineCameraSettings
struct UCineCameraSettings_GetCineCameraSettings_Params
{
public:
	class UCineCameraSettings*                   ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


