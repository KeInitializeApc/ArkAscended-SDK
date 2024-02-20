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
	bool                                         bDelayFirstSpawn;                                  // 0x0(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F12[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinFirstSpawnDelay;                                // 0x4(0x4)(Edit, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxFirstSpawnDelay;                                // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bContinuouslyRespawn;                              // 0xC(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F15[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinSpawnDelay;                                     // 0x10(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxSpawnDelay;                                     // 0x14(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxNumberOfSpawnedElements;                        // 0x18(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinSpawnDistance;                                  // 0x1C(0x4)(Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxSpawnDistance;                                  // 0x20(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCullByMaxSpawnDistance;                           // 0x24(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F17[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinSpawnAngle;                                     // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxSpawnAngle;                                     // 0x2C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bClampHeight;                                      // 0x30(0x1)(ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ESoundscapeColorAltitudeClampMode ClampMode;                                         // 0x31(0x1)(ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F1A[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinSpawnHeightClamp;                               // 0x34(0x4)(Edit, ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxSpawnHeightClamp;                               // 0x38(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRotateSoundSource;                                // 0x3C(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F1C[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinAzimuthalRotationAngle;                         // 0x40(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxAzimuthalRotationAngle;                         // 0x44(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinAltitudinalRotationAngle;                       // 0x48(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxAltitudinalRotationAngle;                       // 0x4C(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPositionByTrace;                                  // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F22[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               TraceVector;                                       // 0x58(0x18)(ExportObject, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        TraceDistance;                                     // 0x70(0x4)(Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x74(0x1)(BlueprintVisible, EditFixedSize, Parm, Transient, Config, EditConst, SubobjectReference)
	bool                                         bFilterByColorPointDensity;                        // 0x75(0x1)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F23[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGameplayTag                          ColorPoint;                                        // 0x78(0x8)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MinColorPointNumber;                               // 0x80(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIgnoreZAxisWhenCullingByMaxDistance;              // 0x84(0x1)(Edit, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F24[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Soundscape.SoundscapeColorModulationSettings
struct FSoundscapeColorModulationSettings
{
public:
	bool                                         bRandomizeVolume;                                  // 0x0(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F27[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        VolumeMin;                                         // 0x4(0x4)(Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        VolumeMax;                                         // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRandomizePitch;                                   // 0xC(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F28[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        PitchMin;                                          // 0x10(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PitchMax;                                          // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFadeVolume;                                       // 0x18(0x1)(EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F2A[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinFadeInTime;                                     // 0x1C(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxFadeInTime;                                     // 0x20(0x4)(BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinFadeOutTime;                                    // 0x24(0x4)(ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxFadeOutTime;                                    // 0x28(0x4)(Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOnlyFadeInOnRetrigger;                            // 0x2C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F2C[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct Soundscape.SoundscapeColorPlaybackSettings
struct FSoundscapeColorPlaybackSettings
{
public:
	bool                                         bRandomizeStartingSeekTime;                        // 0x0(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLimitPlaybackDuration;                            // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_F30[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinPlaybackDuration;                               // 0x4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxPlaybackDuration;                               // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Soundscape.SoundscapeColorVoiceParams
struct FSoundscapeColorVoiceParams
{
public:
	uint8                                        Pad_F31[0x40];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Soundscape.SoundscapeColorPoint
struct FSoundscapeColorPoint
{
public:
	struct FGameplayTag                          ColorPoint;                                        // 0x0(0x8)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Soundscape.SoundscapeColorPointVectorArray
struct FSoundscapeColorPointVectorArray
{
public:
	struct FGameplayTag                          ColorPoint;                                        // 0x0(0x8)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       Locations;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Soundscape.SoundscapePaletteColor
struct FSoundscapePaletteColor
{
public:
	class USoundscapeColor*                      SoundscapeColor;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst)
	float                                        ColorVolume;                                       // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ColorPitch;                                        // 0xC(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ColorFadeIn;                                       // 0x10(0x4)(BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ColorFadeOut;                                      // 0x14(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Soundscape.SoundscapePaletteCollection
struct FSoundscapePaletteCollection
{
public:
	TSet<struct FSoftObjectPath>                 SoundscapePaletteCollection;                       // 0x0(0x50)(ConstParm, EditFixedSize, Transient, Config)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Soundscape.SoundscapePaletteCollectionLoaded
struct FSoundscapePaletteCollectionLoaded
{
public:
	TSet<class USoundscapePalette*>              SoundscapePaletteCollection;                       // 0x0(0x50)(ConstParm, EditFixedSize, Transient, Config)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Soundscape.SoundscapeColorPointCollection
struct FSoundscapeColorPointCollection
{
public:
	TArray<struct FSoundscapeColorPointVectorArray> ColorPointCollection;                              // 0x0(0x10)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

}


