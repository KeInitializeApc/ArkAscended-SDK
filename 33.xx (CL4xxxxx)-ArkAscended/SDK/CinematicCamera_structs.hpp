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
	uint8                                        bEnableLookAtTracking : 1;                         // Mask: 0x1, PropSize: 0x10x0(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        bDrawDebugLookAtTrackingPosition : 1;              // Mask: 0x2, PropSize: 0x10x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_290 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2EA9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        LookAtTrackingInterpSpeed;                         // 0x4(0x4)(BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2EAA[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class AActor>                 ActorToTrack;                                      // 0x20(0x30)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector                               RelativeOffset;                                    // 0x50(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        bAllowRoll : 1;                                    // Mask: 0x1, PropSize: 0x10x68(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2EAB[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct CinematicCamera.CameraFilmbackSettings
struct FCameraFilmbackSettings
{
public:
	float                                        SensorWidth;                                       // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        SensorHeight;                                      // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        SensorAspectRatio;                                 // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CinematicCamera.NamedFilmbackPreset
struct FNamedFilmbackPreset
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	struct FCameraFilmbackSettings               FilmbackSettings;                                  // 0x10(0xC)(Edit, ExportObject, BlueprintReadOnly, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2EAE[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1C (0x1C - 0x0)
// ScriptStruct CinematicCamera.CameraLensSettings
struct FCameraLensSettings
{
public:
	float                                        MinFocalLength;                                    // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxFocalLength;                                    // 0x4(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MinFStop;                                          // 0x8(0x4)(EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxFStop;                                          // 0xC(0x4)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MinimumFocusDistance;                              // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        SqueezeFactor;                                     // 0x14(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        DiaphragmBladeCount;                               // 0x18(0x4)(ConstParm, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CinematicCamera.NamedLensPreset
struct FNamedLensPreset
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	struct FCameraLensSettings                   LensSettings;                                      // 0x10(0x1C)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_2EB0[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x4 - 0x0)
// ScriptStruct CinematicCamera.PlateCropSettings
struct FPlateCropSettings
{
public:
	float                                        AspectRatio;                                       // 0x0(0x4)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CinematicCamera.NamedPlateCropPreset
struct FNamedPlateCropPreset
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	struct FPlateCropSettings                    CropSettings;                                      // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2EB4[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
struct FCameraTrackingFocusSettings
{
public:
	TSoftObjectPtr<class AActor>                 ActorToTrack;                                      // 0x0(0x30)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector                               RelativeOffset;                                    // 0x30(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        bDrawDebugTrackingFocusPoint : 1;                  // Mask: 0x1, PropSize: 0x10x48(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2EB5[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x68 (0x68 - 0x0)
// ScriptStruct CinematicCamera.CameraFocusSettings
struct FCameraFocusSettings
{
public:
	enum class ECameraFocusMethod                FocusMethod;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2EB8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ManualFocusDistance;                               // 0x4(0x4)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FCameraTrackingFocusSettings          TrackingFocusSettings;                             // 0x8(0x50)(Edit, ConstParm, ExportObject, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        bSmoothFocusChanges : 1;                           // Mask: 0x1, PropSize: 0x10x58(0x1)(OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_293 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2EB9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        FocusSmoothingInterpSpeed;                         // 0x5C(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        FocusOffset;                                       // 0x60(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2EBA[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

}


