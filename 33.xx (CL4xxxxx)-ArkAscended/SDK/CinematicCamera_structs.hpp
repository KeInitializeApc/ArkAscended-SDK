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
	uint8                                        bEnableLookAtTracking : 1;                         // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bDrawDebugLookAtTrackingPosition : 1;              // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_254 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2DC0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        LookAtTrackingInterpSpeed;                         // 0x4(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2DC1[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class AActor>                 ActorToTrack;                                      // 0x20(0x30)(Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               RelativeOffset;                                    // 0x50(0x18)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        bAllowRoll : 1;                                    // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2DC5[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct CinematicCamera.CameraFilmbackSettings
struct FCameraFilmbackSettings
{
public:
	float                                        SensorWidth;                                       // 0x0(0x4)(EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        SensorHeight;                                      // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        SensorAspectRatio;                                 // 0x8(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CinematicCamera.NamedFilmbackPreset
struct FNamedFilmbackPreset
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	struct FCameraFilmbackSettings               FilmbackSettings;                                  // 0x10(0xC)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2DCC[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1C (0x1C - 0x0)
// ScriptStruct CinematicCamera.CameraLensSettings
struct FCameraLensSettings
{
public:
	float                                        MinFocalLength;                                    // 0x0(0x4)(BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxFocalLength;                                    // 0x4(0x4)(ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MinFStop;                                          // 0x8(0x4)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxFStop;                                          // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MinimumFocusDistance;                              // 0x10(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        SqueezeFactor;                                     // 0x14(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        DiaphragmBladeCount;                               // 0x18(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CinematicCamera.NamedLensPreset
struct FNamedLensPreset
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	struct FCameraLensSettings                   LensSettings;                                      // 0x10(0x1C)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_2DD5[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// ScriptStruct CinematicCamera.PlateCropSettings
struct FPlateCropSettings
{
public:
	float                                        AspectRatio;                                       // 0x0(0x4)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CinematicCamera.NamedPlateCropPreset
struct FNamedPlateCropPreset
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	struct FPlateCropSettings                    CropSettings;                                      // 0x10(0x4)(ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2DF0[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
struct FCameraTrackingFocusSettings
{
public:
	TSoftObjectPtr<class AActor>                 ActorToTrack;                                      // 0x0(0x30)(Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FVector                               RelativeOffset;                                    // 0x30(0x18)(ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        bDrawDebugTrackingFocusPoint : 1;                  // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2DF4[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x68 (0x68 - 0x0)
// ScriptStruct CinematicCamera.CameraFocusSettings
struct FCameraFocusSettings
{
public:
	enum class ECameraFocusMethod                FocusMethod;                                       // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2DF6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ManualFocusDistance;                               // 0x4(0x4)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FCameraTrackingFocusSettings          TrackingFocusSettings;                             // 0x8(0x50)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bSmoothFocusChanges : 1;                           // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_255 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2DF7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        FocusSmoothingInterpSpeed;                         // 0x5C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        FocusOffset;                                       // 0x60(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2DF9[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

}


