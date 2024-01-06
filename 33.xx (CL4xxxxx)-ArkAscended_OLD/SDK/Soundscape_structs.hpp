#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESoundscapeColorAltitudeClampMode : uint8
{
	Relative                       = 0,
	Absolute                       = 1,
	ESoundscapeColorAltitudeClampMode_MAX = 2,
};

enum class ESoundscapeLOD : uint8
{
	LOD1                           = 0,
	LOD2                           = 1,
	LOD3                           = 2,
	ESoundscapeLOD_MAX             = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x88 - 0x0)
// ScriptStruct Soundscape.SoundscapeColorSpawnSettings
struct FSoundscapeColorSpawnSettings
{
public:
	bool                                         bDelayFirstSpawn;                                  // 0x0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_5E7[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinFirstSpawnDelay;                                // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxFirstSpawnDelay;                                // 0x8(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bContinuouslyRespawn;                              // 0xC(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_5E8[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinSpawnDelay;                                     // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxSpawnDelay;                                     // 0x14(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        MaxNumberOfSpawnedElements;                        // 0x18(0x4)(ExportObject, Net, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MinSpawnDistance;                                  // 0x1C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxSpawnDistance;                                  // 0x20(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCullByMaxSpawnDistance;                           // 0x24(0x1)(Edit, ExportObject, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_5ED[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinSpawnAngle;                                     // 0x28(0x4)(Edit, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxSpawnAngle;                                     // 0x2C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bClampHeight;                                      // 0x30(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class ESoundscapeColorAltitudeClampMode ClampMode;                                         // 0x31(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_5EF[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinSpawnHeightClamp;                               // 0x34(0x4)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxSpawnHeightClamp;                               // 0x38(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bRotateSoundSource;                                // 0x3C(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_5F2[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinAzimuthalRotationAngle;                         // 0x40(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxAzimuthalRotationAngle;                         // 0x44(0x4)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MinAltitudinalRotationAngle;                       // 0x48(0x4)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        MaxAltitudinalRotationAngle;                       // 0x4C(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bPositionByTrace;                                  // 0x50(0x1)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_5F7[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               TraceVector;                                       // 0x58(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        TraceDistance;                                     // 0x70(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x74(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bFilterByColorPointDensity;                        // 0x75(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_5F9[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGameplayTag                          ColorPoint;                                        // 0x78(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        MinColorPointNumber;                               // 0x80(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bIgnoreZAxisWhenCullingByMaxDistance;              // 0x84(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_5FB[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Soundscape.SoundscapeColorModulationSettings
struct FSoundscapeColorModulationSettings
{
public:
	bool                                         bRandomizeVolume;                                  // 0x0(0x1)(EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_5FC[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        VolumeMin;                                         // 0x4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        VolumeMax;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bRandomizePitch;                                   // 0xC(0x1)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_5FF[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        PitchMin;                                          // 0x10(0x4)(ConstParm, BlueprintVisible, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        PitchMax;                                          // 0x14(0x4)(Edit, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bFadeVolume;                                       // 0x18(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_602[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinFadeInTime;                                     // 0x1C(0x4)(ConstParm, BlueprintReadOnly, Parm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxFadeInTime;                                     // 0x20(0x4)(ConstParm, ExportObject, Parm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MinFadeOutTime;                                    // 0x24(0x4)(ConstParm, Parm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxFadeOutTime;                                    // 0x28(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bOnlyFadeInOnRetrigger;                            // 0x2C(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_606[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct Soundscape.SoundscapeColorPlaybackSettings
struct FSoundscapeColorPlaybackSettings
{
public:
	bool                                         bRandomizeStartingSeekTime;                        // 0x0(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bLimitPlaybackDuration;                            // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_60A[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinPlaybackDuration;                               // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        MaxPlaybackDuration;                               // 0x8(0x4)(Edit, ExportObject, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Soundscape.SoundscapeColorVoiceParams
struct FSoundscapeColorVoiceParams
{
public:
	uint8                                        Pad_60E[0x40];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Soundscape.SoundscapeColorPoint
struct FSoundscapeColorPoint
{
public:
	struct FGameplayTag                          ColorPoint;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Soundscape.SoundscapeColorPointVectorArray
struct FSoundscapeColorPointVectorArray
{
public:
	struct FGameplayTag                          ColorPoint;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FVector>                       Locations;                                         // 0x8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Soundscape.SoundscapePaletteColor
struct FSoundscapePaletteColor
{
public:
	class USoundscapeColor*                      SoundscapeColor;                                   // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	float                                        ColorVolume;                                       // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ColorPitch;                                        // 0xC(0x4)(Edit, BlueprintVisible, ExportObject, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ColorFadeIn;                                       // 0x10(0x4)(ConstParm, BlueprintVisible, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	float                                        ColorFadeOut;                                      // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Soundscape.SoundscapePaletteCollection
struct FSoundscapePaletteCollection
{
public:
	TSet<struct FSoftObjectPath>                 SoundscapePaletteCollection;                       // 0x0(0x50)(ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Soundscape.SoundscapePaletteCollectionLoaded
struct FSoundscapePaletteCollectionLoaded
{
public:
	TSet<class USoundscapePalette*>              SoundscapePaletteCollection;                       // 0x0(0x50)(ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Soundscape.SoundscapeColorPointCollection
struct FSoundscapeColorPointCollection
{
public:
	TArray<struct FSoundscapeColorPointVectorArray> ColorPointCollection;                              // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

}


