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
	class USplineComponent*                      ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function CinematicCamera.CineCameraActor.GetCineCameraComponent
struct ACineCameraActor_GetCineCameraComponent_Params
{
public:
	class UCineCameraComponent*                  ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// Function CinematicCamera.CineCameraComponent.SetLensSettings
struct UCineCameraComponent_SetLensSettings_Params
{
public:
	struct FCameraLensSettings                   NewLensSettings;                                   // 0x0(0x1C)(EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraComponent.SetLensPresetByName
struct UCineCameraComponent_SetLensPresetByName_Params
{
public:
	class FString                                InPresetName;                                      // 0x0(0x10)(Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function CinematicCamera.CineCameraComponent.SetFocusSettings
struct UCineCameraComponent_SetFocusSettings_Params
{
public:
	struct FCameraFocusSettings                  NewFocusSettings;                                  // 0x0(0x68)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
struct UCineCameraComponent_SetFilmbackPresetByName_Params
{
public:
	class FString                                InPresetName;                                      // 0x0(0x10)(Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xC (0xC - 0x0)
// Function CinematicCamera.CineCameraComponent.SetFilmback
struct UCineCameraComponent_SetFilmback_Params
{
public:
	struct FCameraFilmbackSettings               NewFilmback;                                       // 0x0(0xC)(BlueprintReadOnly, Net, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function CinematicCamera.CineCameraComponent.SetCustomNearClippingPlane
struct UCineCameraComponent_SetCustomNearClippingPlane_Params
{
public:
	float                                        NewCustomNearClippingPlane;                        // 0x0(0x4)(ConstParm, Net, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
struct UCineCameraComponent_SetCurrentFocalLength_Params
{
public:
	float                                        InFocalLength;                                     // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function CinematicCamera.CineCameraComponent.SetCurrentAperture
struct UCineCameraComponent_SetCurrentAperture_Params
{
public:
	float                                        NewCurrentAperture;                                // 0x0(0x4)(BlueprintReadOnly, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function CinematicCamera.CineCameraComponent.SetCropSettings
struct UCineCameraComponent_SetCropSettings_Params
{
public:
	struct FPlateCropSettings                    NewCropSettings;                                   // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraComponent.SetCropPresetByName
struct UCineCameraComponent_SetCropPresetByName_Params
{
public:
	class FString                                InPresetName;                                      // 0x0(0x10)(Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
struct UCineCameraComponent_GetVerticalFieldOfView_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
struct UCineCameraComponent_GetLensPresetsCopy_Params
{
public:
	TArray<struct FNamedLensPreset>              ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraComponent.GetLensPresetName
struct UCineCameraComponent_GetLensPresetName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
struct UCineCameraComponent_GetHorizontalFieldOfView_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
struct UCineCameraComponent_GetFilmbackPresetsCopy_Params
{
public:
	TArray<struct FNamedFilmbackPreset>          ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
struct UCineCameraComponent_GetFilmbackPresetName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
struct UCineCameraComponent_GetDefaultFilmbackPresetName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraComponent.GetCropPresetName
struct UCineCameraComponent_GetCropPresetName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraSettings.SetLensPresets
struct UCineCameraSettings_SetLensPresets_Params
{
public:
	TArray<struct FNamedLensPreset>              InLensPresets;                                     // 0x0(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraSettings.SetFilmbackPresets
struct UCineCameraSettings_SetFilmbackPresets_Params
{
public:
	TArray<struct FNamedFilmbackPreset>          InFilmbackPresets;                                 // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraSettings.SetDefaultLensPresetName
struct UCineCameraSettings_SetDefaultLensPresetName_Params
{
public:
	class FString                                InDefaultLensPresetName;                           // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function CinematicCamera.CineCameraSettings.SetDefaultLensFStop
struct UCineCameraSettings_SetDefaultLensFStop_Params
{
public:
	float                                        InDefaultLensFStop;                                // 0x0(0x4)(Edit, BlueprintVisible, Net, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function CinematicCamera.CineCameraSettings.SetDefaultLensFocalLength
struct UCineCameraSettings_SetDefaultLensFocalLength_Params
{
public:
	float                                        InDefaultLensFocalLength;                          // 0x0(0x4)(ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraSettings.SetDefaultFilmbackPreset
struct UCineCameraSettings_SetDefaultFilmbackPreset_Params
{
public:
	class FString                                InDefaultFilmbackPreset;                           // 0x0(0x10)(Edit, ConstParm, ExportObject, Parm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraSettings.SetDefaultCropPresetName
struct UCineCameraSettings_SetDefaultCropPresetName_Params
{
public:
	class FString                                InDefaultCropPresetName;                           // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraSettings.SetCropPresets
struct UCineCameraSettings_SetCropPresets_Params
{
public:
	TArray<struct FNamedPlateCropPreset>         InCropPresets;                                     // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraSettings.GetLensPresetNames
struct UCineCameraSettings_GetLensPresetNames_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function CinematicCamera.CineCameraSettings.GetLensPresetByName
struct UCineCameraSettings_GetLensPresetByName_Params
{
public:
	class FString                                PresetName;                                        // 0x0(0x10)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FCameraLensSettings                   LensSettings;                                      // 0x10(0x1C)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	bool                                         ReturnValue;                                       // 0x2C(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2DAB[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraSettings.GetFilmbackPresetNames
struct UCineCameraSettings_GetFilmbackPresetNames_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function CinematicCamera.CineCameraSettings.GetFilmbackPresetByName
struct UCineCameraSettings_GetFilmbackPresetByName_Params
{
public:
	class FString                                PresetName;                                        // 0x0(0x10)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FCameraFilmbackSettings               FilmbackSettings;                                  // 0x10(0xC)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2DB0[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function CinematicCamera.CineCameraSettings.GetCropPresetNames
struct UCineCameraSettings_GetCropPresetNames_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function CinematicCamera.CineCameraSettings.GetCropPresetByName
struct UCineCameraSettings_GetCropPresetByName_Params
{
public:
	class FString                                PresetName;                                        // 0x0(0x10)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FPlateCropSettings                    CropSettings;                                      // 0x10(0x4)(ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2DB6[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function CinematicCamera.CineCameraSettings.GetCineCameraSettings
struct UCineCameraSettings_GetCineCameraSettings_Params
{
public:
	class UCineCameraSettings*                   ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


