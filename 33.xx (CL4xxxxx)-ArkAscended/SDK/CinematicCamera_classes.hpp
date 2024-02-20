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
	float                                        CranePitch;                                        // 0x4C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        CraneYaw;                                          // 0x4CC(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        CraneArmLength;                                    // 0x4D0(0x4)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bLockMountPitch;                                   // 0x4D4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bLockMountYaw;                                     // 0x4D5(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_159[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       TransformComponent;                                // 0x4D8(0x8)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class USceneComponent*                       CraneYawControl;                                   // 0x4E0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class USceneComponent*                       CranePitchControl;                                 // 0x4E8(0x8)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class USceneComponent*                       CraneCameraMount;                                  // 0x4F0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ACameraRig_Crane* GetDefaultObj();

};

// 0x20 (0x4E8 - 0x4C8)
// Class CinematicCamera.CameraRig_Rail
class ACameraRig_Rail : public AActor
{
public:
	float                                        CurrentPositionOnRail;                             // 0x4C8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bLockOrientationToRail;                            // 0x4CC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_15B[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       TransformComponent;                                // 0x4D0(0x8)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class USplineComponent*                      RailSplineComponent;                               // 0x4D8(0x8)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class USceneComponent*                       RailCameraMount;                                   // 0x4E0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ACameraRig_Rail* GetDefaultObj();

	void GetRailSplineComponent(class USplineComponent* ReturnValue);
};

// 0x80 (0xD00 - 0xC80)
// Class CinematicCamera.CineCameraActor
class ACineCameraActor : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings         LookatTrackingSettings;                            // 0xC80(0x70)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_15D[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ACineCameraActor* GetDefaultObj();

	void GetCineCameraComponent(class UCineCameraComponent* ReturnValue);
};

// 0x120 (0xC10 - 0xAF0)
// Class CinematicCamera.CineCameraComponent
class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings               FilmbackSettings;                                  // 0xAF0(0xC)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCameraFilmbackSettings               Filmback;                                          // 0xAFC(0xC)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FCameraLensSettings                   LensSettings;                                      // 0xB08(0x1C)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst)
	uint8                                        Pad_173[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FCameraFocusSettings                  FocusSettings;                                     // 0xB28(0x68)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FPlateCropSettings                    CropSettings;                                      // 0xB90(0x4)(ConstParm, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CurrentFocalLength;                                // 0xB94(0x4)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Config)
	float                                        CurrentAperture;                                   // 0xB98(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config)
	float                                        CurrentFocusDistance;                              // 0xB9C(0x4)(Net, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        bOverride_CustomNearClippingPlane : 1;             // Mask: 0x1, PropSize: 0x10xBA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_1 : 7;                                      // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_175[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        CustomNearClippingPlane;                           // 0xBA4(0x4)(ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_176[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNamedFilmbackPreset>          FilmbackPresets;                                   // 0xBB0(0x10)(BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	TArray<struct FNamedLensPreset>              LensPresets;                                       // 0xBC0(0x10)(Edit, Net, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	class FString                                DefaultFilmbackPresetName;                         // 0xBD0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class FString                                DefaultFilmbackPreset;                             // 0xBE0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	class FString                                DefaultLensPresetName;                             // 0xBF0(0x10)(ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	float                                        DefaultLensFocalLength;                            // 0xC00(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	float                                        DefaultLensFStop;                                  // 0xC04(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_177[0x8];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCineCameraComponent* GetDefaultObj();

	void SetLensSettings(const struct FCameraLensSettings& NewLensSettings);
	void SetLensPresetByName(const class FString& InPresetName);
	void SetFocusSettings(const struct FCameraFocusSettings& NewFocusSettings);
	void SetFilmbackPresetByName(const class FString& InPresetName);
	void SetFilmback(const struct FCameraFilmbackSettings& NewFilmback);
	void SetCustomNearClippingPlane(float NewCustomNearClippingPlane);
	void SetCurrentFocalLength(float InFocalLength);
	void SetCurrentAperture(float NewCurrentAperture);
	void SetCropSettings(const struct FPlateCropSettings& NewCropSettings);
	void SetCropPresetByName(const class FString& InPresetName);
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
	class FString                                DefaultLensPresetName;                             // 0x38(0x10)(ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	float                                        DefaultLensFocalLength;                            // 0x48(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	float                                        DefaultLensFStop;                                  // 0x4C(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	TArray<struct FNamedLensPreset>              LensPresets;                                       // 0x50(0x10)(Edit, Net, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	class FString                                DefaultFilmbackPreset;                             // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	TArray<struct FNamedFilmbackPreset>          FilmbackPresets;                                   // 0x70(0x10)(BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	class FString                                DefaultCropPresetName;                             // 0x80(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	TArray<struct FNamedPlateCropPreset>         CropPresets;                                       // 0x90(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_190[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCineCameraSettings* GetDefaultObj();

	void SetLensPresets(const TArray<struct FNamedLensPreset>& InLensPresets);
	void SetFilmbackPresets(const TArray<struct FNamedFilmbackPreset>& InFilmbackPresets);
	void SetDefaultLensPresetName(const class FString& InDefaultLensPresetName);
	void SetDefaultLensFStop(float InDefaultLensFStop);
	void SetDefaultLensFocalLength(float InDefaultLensFocalLength);
	void SetDefaultFilmbackPreset(const class FString& InDefaultFilmbackPreset);
	void SetDefaultCropPresetName(const class FString& InDefaultCropPresetName);
	void SetCropPresets(const TArray<struct FNamedPlateCropPreset>& InCropPresets);
	void GetLensPresetNames(const TArray<class FString>& ReturnValue);
	void GetLensPresetByName(class FString* PresetName, const struct FCameraLensSettings& LensSettings, bool ReturnValue);
	void GetFilmbackPresetNames(const TArray<class FString>& ReturnValue);
	void GetFilmbackPresetByName(class FString* PresetName, const struct FCameraFilmbackSettings& FilmbackSettings, bool ReturnValue);
	void GetCropPresetNames(const TArray<class FString>& ReturnValue);
	void GetCropPresetByName(class FString* PresetName, const struct FPlateCropSettings& CropSettings, bool ReturnValue);
	void GetCineCameraSettings(class UCineCameraSettings* ReturnValue);
};

}


