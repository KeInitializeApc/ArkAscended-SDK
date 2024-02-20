#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECameraFocusMethod : uint8
{
	DoNotOverride                  = 0,
	Manual                         = 1,
	Tracking                       = 2,
	Disable                        = 3,
	MAX                            = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x70 - 0x0)
// ScriptStruct CinematicCamera.CameraLookatTrackingSettings
struct FCameraLookatTrackingSettings
{
public:
	uint8                                        bEnableLookAtTracking : 1;                         // Mask: 0x1, PropSize: 0x10x0(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDrawDebugLookAtTrackingPosition : 1;              // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_2 : 6;                                      // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_193[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        LookAtTrackingInterpSpeed;                         // 0x4(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_194[0x18];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class AActor>                 ActorToTrack;                                      // 0x20(0x30)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               RelativeOffset;                                    // 0x50(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAllowRoll : 1;                                    // Mask: 0x1, PropSize: 0x10x68(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_195[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct CinematicCamera.CameraFilmbackSettings
struct FCameraFilmbackSettings
{
public:
	float                                        SensorWidth;                                       // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        SensorHeight;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        SensorAspectRatio;                                 // 0x8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CinematicCamera.NamedFilmbackPreset
struct FNamedFilmbackPreset
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	struct FCameraFilmbackSettings               FilmbackSettings;                                  // 0x10(0xC)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_199[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x1C (0x1C - 0x0)
// ScriptStruct CinematicCamera.CameraLensSettings
struct FCameraLensSettings
{
public:
	float                                        MinFocalLength;                                    // 0x0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxFocalLength;                                    // 0x4(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinFStop;                                          // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxFStop;                                          // 0xC(0x4)(ConstParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinimumFocusDistance;                              // 0x10(0x4)(ConstParm, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SqueezeFactor;                                     // 0x14(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DiaphragmBladeCount;                               // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CinematicCamera.NamedLensPreset
struct FNamedLensPreset
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	struct FCameraLensSettings                   LensSettings;                                      // 0x10(0x1C)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, EditConst)
	uint8                                        Pad_19B[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// ScriptStruct CinematicCamera.PlateCropSettings
struct FPlateCropSettings
{
public:
	float                                        AspectRatio;                                       // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CinematicCamera.NamedPlateCropPreset
struct FNamedPlateCropPreset
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	struct FPlateCropSettings                    CropSettings;                                      // 0x10(0x4)(ConstParm, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_19E[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
struct FCameraTrackingFocusSettings
{
public:
	TSoftObjectPtr<class AActor>                 ActorToTrack;                                      // 0x0(0x30)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               RelativeOffset;                                    // 0x30(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDrawDebugTrackingFocusPoint : 1;                  // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_19F[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x68 (0x68 - 0x0)
// ScriptStruct CinematicCamera.CameraFocusSettings
struct FCameraFocusSettings
{
public:
	enum class ECameraFocusMethod                FocusMethod;                                       // 0x0(0x1)(ConstParm, BlueprintReadOnly, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1A3[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        ManualFocusDistance;                               // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FCameraTrackingFocusSettings          TrackingFocusSettings;                             // 0x8(0x50)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bSmoothFocusChanges : 1;                           // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_4 : 7;                                      // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1A5[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        FocusSmoothingInterpSpeed;                         // 0x5C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FocusOffset;                                       // 0x60(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1A6[0x4];                                      // Fixing Size Of Struct > TateDumper <
};

}


