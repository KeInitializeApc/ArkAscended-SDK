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
	float                                        CranePitch;                                        // 0x4C8(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CraneYaw;                                          // 0x4CC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CraneArmLength;                                    // 0x4D0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bLockMountPitch;                                   // 0x4D4(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bLockMountYaw;                                     // 0x4D5(0x1)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D75[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       TransformComponent;                                // 0x4D8(0x8)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class USceneComponent*                       CraneYawControl;                                   // 0x4E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class USceneComponent*                       CranePitchControl;                                 // 0x4E8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class USceneComponent*                       CraneCameraMount;                                  // 0x4F0(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ACameraRig_Crane* GetDefaultObj();

};

// 0x20 (0x4E8 - 0x4C8)
// Class CinematicCamera.CameraRig_Rail
class ACameraRig_Rail : public AActor
{
public:
	float                                        CurrentPositionOnRail;                             // 0x4C8(0x4)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bLockOrientationToRail;                            // 0x4CC(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D7A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       TransformComponent;                                // 0x4D0(0x8)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class USplineComponent*                      RailSplineComponent;                               // 0x4D8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class USceneComponent*                       RailCameraMount;                                   // 0x4E0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ACameraRig_Rail* GetDefaultObj();

	class USplineComponent* GetRailSplineComponent();
};

// 0x80 (0xCF0 - 0xC70)
// Class CinematicCamera.CineCameraActor
class ACineCameraActor : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings         LookatTrackingSettings;                            // 0xC70(0x70)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D81[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ACineCameraActor* GetDefaultObj();

	class UCineCameraComponent* GetCineCameraComponent();
};

// 0x120 (0xC00 - 0xAE0)
// Class CinematicCamera.CineCameraComponent
class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings               FilmbackSettings;                                  // 0xAE0(0xC)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FCameraFilmbackSettings               Filmback;                                          // 0xAEC(0xC)(ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FCameraLensSettings                   LensSettings;                                      // 0xAF8(0x1C)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_2D93[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCameraFocusSettings                  FocusSettings;                                     // 0xB18(0x68)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FPlateCropSettings                    CropSettings;                                      // 0xB80(0x4)(ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        CurrentFocalLength;                                // 0xB84(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Config)
	float                                        CurrentAperture;                                   // 0xB88(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, Config)
	float                                        CurrentFocusDistance;                              // 0xB8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bOverride_CustomNearClippingPlane : 1;             // Mask: 0x1, PropSize: 0x10xB90(0x1)(BlueprintVisible, Net, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_244 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2D97[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CustomNearClippingPlane;                           // 0xB94(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D98[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNamedFilmbackPreset>          FilmbackPresets;                                   // 0xBA0(0x10)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference)
	TArray<struct FNamedLensPreset>              LensPresets;                                       // 0xBB0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference)
	class FString                                DefaultFilmbackPresetName;                         // 0xBC0(0x10)(Edit, ExportObject, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                DefaultFilmbackPreset;                             // 0xBD0(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference)
	class FString                                DefaultLensPresetName;                             // 0xBE0(0x10)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference)
	float                                        DefaultLensFocalLength;                            // 0xBF0(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference)
	float                                        DefaultLensFStop;                                  // 0xBF4(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference)
	uint8                                        Pad_2D9C[0x8];                                     // Fixing Size Of Struct > TateDumper <

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
	class FString                                DefaultLensPresetName;                             // 0x38(0x10)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference)
	float                                        DefaultLensFocalLength;                            // 0x48(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference)
	float                                        DefaultLensFStop;                                  // 0x4C(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference)
	TArray<struct FNamedLensPreset>              LensPresets;                                       // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference)
	class FString                                DefaultFilmbackPreset;                             // 0x60(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference)
	TArray<struct FNamedFilmbackPreset>          FilmbackPresets;                                   // 0x70(0x10)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference)
	class FString                                DefaultCropPresetName;                             // 0x80(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference)
	TArray<struct FNamedPlateCropPreset>         CropPresets;                                       // 0x90(0x10)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference)
	uint8                                        Pad_2DB8[0x10];                                    // Fixing Size Of Struct > TateDumper <

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
	bool GetLensPresetByName();
	TArray<class FString> GetFilmbackPresetNames();
	bool GetFilmbackPresetByName();
	TArray<class FString> GetCropPresetNames();
	bool GetCropPresetByName();
	class UCineCameraSettings* GetCineCameraSettings();
};

}


