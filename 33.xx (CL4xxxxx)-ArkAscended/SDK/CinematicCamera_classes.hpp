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
	float                                        CranePitch;                                        // 0x4C8(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CraneYaw;                                          // 0x4CC(0x4)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CraneArmLength;                                    // 0x4D0(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bLockMountPitch;                                   // 0x4D4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bLockMountYaw;                                     // 0x4D5(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E82[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       TransformComponent;                                // 0x4D8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class USceneComponent*                       CraneYawControl;                                   // 0x4E0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class USceneComponent*                       CranePitchControl;                                 // 0x4E8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class USceneComponent*                       CraneCameraMount;                                  // 0x4F0(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ACameraRig_Crane* GetDefaultObj();

};

// 0x20 (0x4E8 - 0x4C8)
// Class CinematicCamera.CameraRig_Rail
class ACameraRig_Rail : public AActor
{
public:
	float                                        CurrentPositionOnRail;                             // 0x4C8(0x4)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bLockOrientationToRail;                            // 0x4CC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E84[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       TransformComponent;                                // 0x4D0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
	class USplineComponent*                      RailSplineComponent;                               // 0x4D8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class USceneComponent*                       RailCameraMount;                                   // 0x4E0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ACameraRig_Rail* GetDefaultObj();

	void GetRailSplineComponent(class USplineComponent* ReturnValue);
};

// 0x80 (0xCF0 - 0xC70)
// Class CinematicCamera.CineCameraActor
class ACineCameraActor : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings         LookatTrackingSettings;                            // 0xC70(0x70)(ConstParm, BlueprintReadOnly, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E88[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ACineCameraActor* GetDefaultObj();

	void GetCineCameraComponent(class UCineCameraComponent* ReturnValue);
};

// 0x120 (0xC00 - 0xAE0)
// Class CinematicCamera.CineCameraComponent
class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings               FilmbackSettings;                                  // 0xAE0(0xC)(Edit, ExportObject, BlueprintReadOnly, Parm, Transient, Config, InstancedReference, SubobjectReference)
	struct FCameraFilmbackSettings               Filmback;                                          // 0xAEC(0xC)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FCameraLensSettings                   LensSettings;                                      // 0xAF8(0x1C)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_2E90[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCameraFocusSettings                  FocusSettings;                                     // 0xB18(0x68)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FPlateCropSettings                    CropSettings;                                      // 0xB80(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        CurrentFocalLength;                                // 0xB84(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Config)
	float                                        CurrentAperture;                                   // 0xB88(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, Config)
	float                                        CurrentFocusDistance;                              // 0xB8C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bOverride_CustomNearClippingPlane : 1;             // Mask: 0x1, PropSize: 0x10xB90(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_28F : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2E91[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CustomNearClippingPlane;                           // 0xB94(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E92[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNamedFilmbackPreset>          FilmbackPresets;                                   // 0xBA0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<struct FNamedLensPreset>              LensPresets;                                       // 0xBB0(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FString                                DefaultFilmbackPresetName;                         // 0xBC0(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                DefaultFilmbackPreset;                             // 0xBD0(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FString                                DefaultLensPresetName;                             // 0xBE0(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        DefaultLensFocalLength;                            // 0xBF0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        DefaultLensFStop;                                  // 0xBF4(0x4)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_2E94[0x8];                                     // Fixing Size Of Struct > TateDumper <

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
	void GetVerticalFieldOfView(float ReturnValue);
	void GetLensPresetsCopy(const TArray<struct FNamedLensPreset>& ReturnValue);
	void GetLensPresetName(const class FString& ReturnValue);
	void GetHorizontalFieldOfView(float ReturnValue);
	void GetFilmbackPresetsCopy(const TArray<struct FNamedFilmbackPreset>& ReturnValue);
	void GetFilmbackPresetName(const class FString& ReturnValue);
	void GetDefaultFilmbackPresetName(const class FString& ReturnValue);
	void GetCropPresetName(const class FString& ReturnValue);
};

// 0x78 (0xB0 - 0x38)
// Class CinematicCamera.CineCameraSettings
class UCineCameraSettings : public UDeveloperSettings
{
public:
	class FString                                DefaultLensPresetName;                             // 0x38(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        DefaultLensFocalLength;                            // 0x48(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        DefaultLensFStop;                                  // 0x4C(0x4)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<struct FNamedLensPreset>              LensPresets;                                       // 0x50(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FString                                DefaultFilmbackPreset;                             // 0x60(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<struct FNamedFilmbackPreset>          FilmbackPresets;                                   // 0x70(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	class FString                                DefaultCropPresetName;                             // 0x80(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<struct FNamedPlateCropPreset>         CropPresets;                                       // 0x90(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_2EA7[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCineCameraSettings* GetDefaultObj();

	void SetLensPresets(const TArray<struct FNamedLensPreset>& InLensPresets);
	void SetFilmbackPresets(const TArray<struct FNamedFilmbackPreset>& InFilmbackPresets);
	void SetDefaultLensPresetName(const class FString& InDefaultLensPresetName);
	void SetDefaultLensFStop(float InDefaultLensFStop);
	void SetDefaultLensFocalLength(float InDefaultLensFocalLength);
	void SetDefaultFilmbackPreset(const class FString& InDefaultFilmbackPreset);
	class FString SetDefaultCropPresetName();
	TArray<struct FNamedPlateCropPreset> SetCropPresets();
	void GetLensPresetNames(const TArray<class FString>& ReturnValue);
	struct FCameraLensSettings GetLensPresetByName(const class FString& PresetName, bool ReturnValue);
	void GetFilmbackPresetNames(const TArray<class FString>& ReturnValue);
	void GetFilmbackPresetByName(const class FString& PresetName, const struct FCameraFilmbackSettings& FilmbackSettings, bool ReturnValue);
	void GetCropPresetNames(const TArray<class FString>& ReturnValue);
	void GetCropPresetByName(const class FString& PresetName, const struct FPlateCropSettings& CropSettings, bool ReturnValue);
	void GetCineCameraSettings(class UCineCameraSettings* ReturnValue);
};

}


