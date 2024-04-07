#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x4F0 - 0x4C0)
// Class CinematicCamera.CameraRig_Crane
class ACameraRig_Crane : public AActor
{
public:
	float                                        CranePitch;                                        // 0x4C0(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CraneYaw;                                          // 0x4C4(0x4)(ExportObject, Net, EditFixedSize, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CraneArmLength;                                    // 0x4C8(0x4)(Net, EditFixedSize, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bLockMountPitch;                                   // 0x4CC(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bLockMountYaw;                                     // 0x4CD(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_24B1[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       TransformComponent;                                // 0x4D0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USceneComponent*                       CraneYawControl;                                   // 0x4D8(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class USceneComponent*                       CranePitchControl;                                 // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class USceneComponent*                       CraneCameraMount;                                  // 0x4E8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ACameraRig_Crane* GetDefaultObj();

};

// 0x20 (0x4E0 - 0x4C0)
// Class CinematicCamera.CameraRig_Rail
class ACameraRig_Rail : public AActor
{
public:
	float                                        CurrentPositionOnRail;                             // 0x4C0(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bLockOrientationToRail;                            // 0x4C4(0x1)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_24CC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       TransformComponent;                                // 0x4C8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USplineComponent*                      RailSplineComponent;                               // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class USceneComponent*                       RailCameraMount;                                   // 0x4D8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ACameraRig_Rail* GetDefaultObj();

	class USplineComponent* GetRailSplineComponent();
};

// 0x80 (0xCF0 - 0xC70)
// Class CinematicCamera.CineCameraActor
class ACineCameraActor : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings         LookatTrackingSettings;                            // 0xC70(0x70)(Edit, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_24DD[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ACineCameraActor* GetDefaultObj();

	class UCineCameraComponent* GetCineCameraComponent();
};

// 0x120 (0xC10 - 0xAF0)
// Class CinematicCamera.CineCameraComponent
class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings               FilmbackSettings;                                  // 0xAF0(0xC)(BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
	struct FCameraFilmbackSettings               Filmback;                                          // 0xAFC(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FCameraLensSettings                   LensSettings;                                      // 0xB08(0x1C)(Edit, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst)
	uint8                                        Pad_251B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCameraFocusSettings                  FocusSettings;                                     // 0xB28(0x68)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FPlateCropSettings                    CropSettings;                                      // 0xB90(0x4)(BlueprintVisible, ExportObject, Net, OutParm, InstancedReference, SubobjectReference)
	float                                        CurrentFocalLength;                                // 0xB94(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config)
	float                                        CurrentAperture;                                   // 0xB98(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config)
	float                                        CurrentFocusDistance;                              // 0xB9C(0x4)(ConstParm, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        bOverride_CustomNearClippingPlane : 1;             // Mask: 0x1, PropSize: 0x10xBA0(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_15A : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_251C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CustomNearClippingPlane;                           // 0xBA4(0x4)(Net, EditFixedSize, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_251E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNamedFilmbackPreset>          FilmbackPresets;                                   // 0xBB0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	TArray<struct FNamedLensPreset>              LensPresets;                                       // 0xBC0(0x10)(BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	class FString                                DefaultFilmbackPresetName;                         // 0xBD0(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                DefaultFilmbackPreset;                             // 0xBE0(0x10)(BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	class FString                                DefaultLensPresetName;                             // 0xBF0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	float                                        DefaultLensFocalLength;                            // 0xC00(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	float                                        DefaultLensFStop;                                  // 0xC04(0x4)(ConstParm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	uint8                                        Pad_2521[0x8];                                     // Fixing Size Of Struct > TateDumper <

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
	float GetVerticalFieldOfView();
	TArray<struct FNamedLensPreset> GetLensPresetsCopy();
	class FString GetLensPresetName();
	float GetHorizontalFieldOfView();
	TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy();
	class FString GetFilmbackPresetName();
	class FString GetDefaultFilmbackPresetName();
	class FString GetCropPresetName();
};

// 0x78 (0xB0 - 0x38)
// Class CinematicCamera.CineCameraSettings
class UCineCameraSettings : public UDeveloperSettings
{
public:
	class FString                                DefaultLensPresetName;                             // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	float                                        DefaultLensFocalLength;                            // 0x48(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	float                                        DefaultLensFStop;                                  // 0x4C(0x4)(ConstParm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	TArray<struct FNamedLensPreset>              LensPresets;                                       // 0x50(0x10)(BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	class FString                                DefaultFilmbackPreset;                             // 0x60(0x10)(BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	TArray<struct FNamedFilmbackPreset>          FilmbackPresets;                                   // 0x70(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	class FString                                DefaultCropPresetName;                             // 0x80(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	TArray<struct FNamedPlateCropPreset>         CropPresets;                                       // 0x90(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	uint8                                        Pad_255F[0x10];                                    // Fixing Size Of Struct > TateDumper <

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
	TArray<class FString> GetLensPresetNames();
	bool GetLensPresetByName(class FString* PresetName, const struct FCameraLensSettings& LensSettings);
	TArray<class FString> GetFilmbackPresetNames();
	bool GetFilmbackPresetByName(class FString* PresetName, const struct FCameraFilmbackSettings& FilmbackSettings);
	TArray<class FString> GetCropPresetNames();
	bool GetCropPresetByName(class FString* PresetName, struct FPlateCropSettings* CropSettings);
	class UCineCameraSettings* GetCineCameraSettings();
};

}


