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
	bool                                         bDelayFirstSpawn;                                  // 0x0(0x1)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_688[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinFirstSpawnDelay;                                // 0x4(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MaxFirstSpawnDelay;                                // 0x8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bContinuouslyRespawn;                              // 0xC(0x1)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_689[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinSpawnDelay;                                     // 0x10(0x4)(Edit, ExportObject, Net, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MaxSpawnDelay;                                     // 0x14(0x4)(Edit, Net, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	int32                                        MaxNumberOfSpawnedElements;                        // 0x18(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MinSpawnDistance;                                  // 0x1C(0x4)(ConstParm, ExportObject, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MaxSpawnDistance;                                  // 0x20(0x4)(Edit, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bCullByMaxSpawnDistance;                           // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_68A[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinSpawnAngle;                                     // 0x28(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MaxSpawnAngle;                                     // 0x2C(0x4)(BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bClampHeight;                                      // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class ESoundscapeColorAltitudeClampMode ClampMode;                                         // 0x31(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_68D[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinSpawnHeightClamp;                               // 0x34(0x4)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MaxSpawnHeightClamp;                               // 0x38(0x4)(Edit, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bRotateSoundSource;                                // 0x3C(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_68E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinAzimuthalRotationAngle;                         // 0x40(0x4)(Edit, ExportObject, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MaxAzimuthalRotationAngle;                         // 0x44(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MinAltitudinalRotationAngle;                       // 0x48(0x4)(BlueprintVisible, ExportObject, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MaxAltitudinalRotationAngle;                       // 0x4C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bPositionByTrace;                                  // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_68F[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector                               TraceVector;                                       // 0x58(0x18)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        TraceDistance;                                     // 0x70(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x74(0x1)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bFilterByColorPointDensity;                        // 0x75(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_692[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	struct FGameplayTag                          ColorPoint;                                        // 0x78(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	int32                                        MinColorPointNumber;                               // 0x80(0x4)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bIgnoreZAxisWhenCullingByMaxDistance;              // 0x84(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_693[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Soundscape.SoundscapeColorModulationSettings
struct FSoundscapeColorModulationSettings
{
public:
	bool                                         bRandomizeVolume;                                  // 0x0(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_695[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        VolumeMin;                                         // 0x4(0x4)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        VolumeMax;                                         // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bRandomizePitch;                                   // 0xC(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_696[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        PitchMin;                                          // 0x10(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        PitchMax;                                          // 0x14(0x4)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bFadeVolume;                                       // 0x18(0x1)(Edit, BlueprintVisible, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_698[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinFadeInTime;                                     // 0x1C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MaxFadeInTime;                                     // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MinFadeOutTime;                                    // 0x24(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MaxFadeOutTime;                                    // 0x28(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bOnlyFadeInOnRetrigger;                            // 0x2C(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_69A[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct Soundscape.SoundscapeColorPlaybackSettings
struct FSoundscapeColorPlaybackSettings
{
public:
	bool                                         bRandomizeStartingSeekTime;                        // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bLimitPlaybackDuration;                            // 0x1(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_69C[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        MinPlaybackDuration;                               // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        MaxPlaybackDuration;                               // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Soundscape.SoundscapeColorVoiceParams
struct FSoundscapeColorVoiceParams
{
public:
	uint8                                        Pad_69E[0x40];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Soundscape.SoundscapeColorPoint
struct FSoundscapeColorPoint
{
public:
	struct FGameplayTag                          ColorPoint;                                        // 0x0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Soundscape.SoundscapeColorPointVectorArray
struct FSoundscapeColorPointVectorArray
{
public:
	struct FGameplayTag                          ColorPoint;                                        // 0x0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TArray<struct FVector>                       Locations;                                         // 0x8(0x10)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Soundscape.SoundscapePaletteColor
struct FSoundscapePaletteColor
{
public:
	class USoundscapeColor*                      SoundscapeColor;                                   // 0x0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	float                                        ColorVolume;                                       // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        ColorPitch;                                        // 0xC(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        ColorFadeIn;                                       // 0x10(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        ColorFadeOut;                                      // 0x14(0x4)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
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
	TArray<struct FSoundscapeColorPointVectorArray> ColorPointCollection;                              // 0x0(0x10)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
};

}


