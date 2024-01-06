#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x4F8 - 0x4C8)
// Class CinematicCamera.CameraRig_Crane
class ACameraRig_Crane : public AActor
{
public:
	float                                        CranePitch;                                        // 0x4C8(0x4)(Edit, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CraneYaw;                                          // 0x4CC(0x4)(BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CraneArmLength;                                    // 0x4D0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bLockMountPitch;                                   // 0x4D4(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bLockMountYaw;                                     // 0x4D5(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_237E[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       TransformComponent;                                // 0x4D8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class USceneComponent*                       CraneYawControl;                                   // 0x4E0(0x8)(ConstParm, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class USceneComponent*                       CranePitchControl;                                 // 0x4E8(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class USceneComponent*                       CraneCameraMount;                                  // 0x4F0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ACameraRig_Crane* GetDefaultObj();

};

// 0x20 (0x4E8 - 0x4C8)
// Class CinematicCamera.CameraRig_Rail
class ACameraRig_Rail : public AActor
{
public:
	float                                        CurrentPositionOnRail;                             // 0x4C8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bLockOrientationToRail;                            // 0x4CC(0x1)(Edit, ConstParm, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2384[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       TransformComponent;                                // 0x4D0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class USplineComponent*                      RailSplineComponent;                               // 0x4D8(0x8)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class USceneComponent*                       RailCameraMount;                                   // 0x4E0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ACameraRig_Rail* GetDefaultObj();

	void GetRailSplineComponent(class USplineComponent** ReturnValue);
};

// 0x80 (0xCF0 - 0xC70)
// Class CinematicCamera.CineCameraActor
class ACineCameraActor : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings         LookatTrackingSettings;                            // 0xC70(0x70)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2385[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ACineCameraActor* GetDefaultObj();

	void GetCineCameraComponent(class UCineCameraComponent** ReturnValue);
};

// 0x120 (0xC00 - 0xAE0)
// Class CinematicCamera.CineCameraComponent
class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings               FilmbackSettings;                                  // 0xAE0(0xC)(Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FCameraFilmbackSettings               Filmback;                                          // 0xAEC(0xC)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FCameraLensSettings                   LensSettings;                                      // 0xAF8(0x1C)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_23AC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCameraFocusSettings                  FocusSettings;                                     // 0xB18(0x68)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FPlateCropSettings                    CropSettings;                                      // 0xB80(0x4)(Edit, ConstParm, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        CurrentFocalLength;                                // 0xB84(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Config)
	float                                        CurrentAperture;                                   // 0xB88(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, Config)
	float                                        CurrentFocusDistance;                              // 0xB8C(0x4)(Net, Parm, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bOverride_CustomNearClippingPlane : 1;             // Mask: 0x1, PropSize: 0x10xB90(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_177 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_23AE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CustomNearClippingPlane;                           // 0xB94(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_23AF[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNamedFilmbackPreset>          FilmbackPresets;                                   // 0xBA0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference)
	TArray<struct FNamedLensPreset>              LensPresets;                                       // 0xBB0(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference)
	class FString                                DefaultFilmbackPresetName;                         // 0xBC0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                DefaultFilmbackPreset;                             // 0xBD0(0x10)(Edit, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference)
	class FString                                DefaultLensPresetName;                             // 0xBE0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference)
	float                                        DefaultLensFocalLength;                            // 0xBF0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference)
	float                                        DefaultLensFStop;                                  // 0xBF4(0x4)(ConstParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference)
	uint8                                        Pad_23B2[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCineCameraComponent* GetDefaultObj();

	struct FCameraLensSettings SetLensSettings();
	class FString SetLensPresetByName();
	struct FCameraFocusSettings SetFocusSettings();
	class FString SetFilmbackPresetByName();
	struct FCameraFilmbackSettings SetFilmback();
	float SetCustomNearClippingPlane();
	float SetCurrentFocalLength();
	float SetCurrentAperture();
	struct FPlateCropSettings SetCropSettings();
	class FString SetCropPresetByName();
	void GetVerticalFieldOfView(float* ReturnValue);
	void GetLensPresetsCopy(TArray<struct FNamedLensPreset>* ReturnValue);
	void GetLensPresetName(class FString* ReturnValue);
	void GetHorizontalFieldOfView(float* ReturnValue);
	void GetFilmbackPresetsCopy(TArray<struct FNamedFilmbackPreset>* ReturnValue);
	void GetFilmbackPresetName(class FString* ReturnValue);
	void GetDefaultFilmbackPresetName(class FString* ReturnValue);
	void GetCropPresetName(class FString* ReturnValue);
};

// 0x78 (0xB0 - 0x38)
// Class CinematicCamera.CineCameraSettings
class UCineCameraSettings : public UDeveloperSettings
{
public:
	class FString                                DefaultLensPresetName;                             // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference)
	float                                        DefaultLensFocalLength;                            // 0x48(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference)
	float                                        DefaultLensFStop;                                  // 0x4C(0x4)(ConstParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference)
	TArray<struct FNamedLensPreset>              LensPresets;                                       // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference)
	class FString                                DefaultFilmbackPreset;                             // 0x60(0x10)(Edit, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, InstancedReference)
	TArray<struct FNamedFilmbackPreset>          FilmbackPresets;                                   // 0x70(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference)
	class FString                                DefaultCropPresetName;                             // 0x80(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference)
	TArray<struct FNamedPlateCropPreset>         CropPresets;                                       // 0x90(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference)
	uint8                                        Pad_23F4[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCineCameraSettings* GetDefaultObj();

	TArray<struct FNamedLensPreset> SetLensPresets();
	TArray<struct FNamedFilmbackPreset> SetFilmbackPresets();
	class FString SetDefaultLensPresetName();
	float SetDefaultLensFStop();
	float SetDefaultLensFocalLength();
	class FString SetDefaultFilmbackPreset();
	class FString SetDefaultCropPresetName();
	TArray<struct FNamedPlateCropPreset> SetCropPresets();
	void GetLensPresetNames(TArray<class FString>* ReturnValue);
	struct FCameraLensSettings GetLensPresetByName(class FString* PresetName, bool* ReturnValue);
	void GetFilmbackPresetNames(TArray<class FString>* ReturnValue);
	void GetFilmbackPresetByName(class FString* PresetName, const struct FCameraFilmbackSettings& FilmbackSettings, bool* ReturnValue);
	void GetCropPresetNames(TArray<class FString>* ReturnValue);
	void GetCropPresetByName(class FString* PresetName, const struct FPlateCropSettings& CropSettings, bool* ReturnValue);
	void GetCineCameraSettings(class UCineCameraSettings** ReturnValue);
};

}


