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
	float                                        CranePitch;                                        // 0x4C8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CraneYaw;                                          // 0x4CC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        CraneArmLength;                                    // 0x4D0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bLockMountPitch;                                   // 0x4D4(0x1)(ConstParm, BlueprintVisible, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bLockMountYaw;                                     // 0x4D5(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2324[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       TransformComponent;                                // 0x4D8(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class USceneComponent*                       CraneYawControl;                                   // 0x4E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class USceneComponent*                       CranePitchControl;                                 // 0x4E8(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class USceneComponent*                       CraneCameraMount;                                  // 0x4F0(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ACameraRig_Crane* GetDefaultObj();

};

// 0x20 (0x4E8 - 0x4C8)
// Class CinematicCamera.CameraRig_Rail
class ACameraRig_Rail : public AActor
{
public:
	float                                        CurrentPositionOnRail;                             // 0x4C8(0x4)(ConstParm, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bLockOrientationToRail;                            // 0x4CC(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_232E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class USceneComponent*                       TransformComponent;                                // 0x4D0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	class USplineComponent*                      RailSplineComponent;                               // 0x4D8(0x8)(Edit, ConstParm, ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class USceneComponent*                       RailCameraMount;                                   // 0x4E0(0x8)(ConstParm, Net, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ACameraRig_Rail* GetDefaultObj();

	void GetRailSplineComponent(class USplineComponent** ReturnValue);
};

// 0x80 (0xCF0 - 0xC70)
// Class CinematicCamera.CineCameraActor
class ACineCameraActor : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings         LookatTrackingSettings;                            // 0xC70(0x70)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_233A[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ACineCameraActor* GetDefaultObj();

	void GetCineCameraComponent(class UCineCameraComponent** ReturnValue);
};

// 0x120 (0xC00 - 0xAE0)
// Class CinematicCamera.CineCameraComponent
class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings               FilmbackSettings;                                  // 0xAE0(0xC)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FCameraFilmbackSettings               Filmback;                                          // 0xAEC(0xC)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FCameraLensSettings                   LensSettings;                                      // 0xAF8(0x1C)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_236E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCameraFocusSettings                  FocusSettings;                                     // 0xB18(0x68)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	struct FPlateCropSettings                    CropSettings;                                      // 0xB80(0x4)(Edit, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        CurrentFocalLength;                                // 0xB84(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Config)
	float                                        CurrentAperture;                                   // 0xB88(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, Config)
	float                                        CurrentFocusDistance;                              // 0xB8C(0x4)(BlueprintReadOnly, Net, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bOverride_CustomNearClippingPlane : 1;             // Mask: 0x1, PropSize: 0x10xB90(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_174 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_236F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CustomNearClippingPlane;                           // 0xB94(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2370[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNamedFilmbackPreset>          FilmbackPresets;                                   // 0xBA0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance)
	TArray<struct FNamedLensPreset>              LensPresets;                                       // 0xBB0(0x10)(ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	class FString                                DefaultFilmbackPresetName;                         // 0xBC0(0x10)(Edit, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                DefaultFilmbackPreset;                             // 0xBD0(0x10)(Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
	class FString                                DefaultLensPresetName;                             // 0xBE0(0x10)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	float                                        DefaultLensFocalLength;                            // 0xBF0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, EditConst)
	float                                        DefaultLensFStop;                                  // 0xBF4(0x4)(Edit, ExportObject, Net, ReturnParm, Transient, EditConst)
	uint8                                        Pad_2371[0x8];                                     // Fixing Size Of Struct > TateDumper <

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
	class FString                                DefaultLensPresetName;                             // 0x38(0x10)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	float                                        DefaultLensFocalLength;                            // 0x48(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, EditConst)
	float                                        DefaultLensFStop;                                  // 0x4C(0x4)(Edit, ExportObject, Net, ReturnParm, Transient, EditConst)
	TArray<struct FNamedLensPreset>              LensPresets;                                       // 0x50(0x10)(ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	class FString                                DefaultFilmbackPreset;                             // 0x60(0x10)(Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
	TArray<struct FNamedFilmbackPreset>          FilmbackPresets;                                   // 0x70(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance)
	class FString                                DefaultCropPresetName;                             // 0x80(0x10)(Edit, BlueprintReadOnly, ReturnParm, Transient, EditConst)
	TArray<struct FNamedPlateCropPreset>         CropPresets;                                       // 0x90(0x10)(ConstParm, ExportObject, ReturnParm, Transient, EditConst)
	uint8                                        Pad_23A0[0x10];                                    // Fixing Size Of Struct > TateDumper <

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
	struct FCameraLensSettings GetLensPresetByName(const class FString& PresetName, bool* ReturnValue);
	void GetFilmbackPresetNames(TArray<class FString>* ReturnValue);
	struct FCameraFilmbackSettings GetFilmbackPresetByName(const class FString& PresetName, bool* ReturnValue);
	void GetCropPresetNames(TArray<class FString>* ReturnValue);
	void GetCropPresetByName(const class FString& PresetName, const struct FPlateCropSettings& CropSettings, bool* ReturnValue);
	void GetCineCameraSettings(class UCineCameraSettings** ReturnValue);
};

}


