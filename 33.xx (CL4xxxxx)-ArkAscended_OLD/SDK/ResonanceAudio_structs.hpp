#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ERaQualityMode : uint8
{
	STEREO_PANNING                 = 0,
	BINAURAL_LOW                   = 1,
	BINAURAL_MEDIUM                = 2,
	BINAURAL_HIGH                  = 3,
	ERaQualityMode_MAX             = 4,
};

enum class ERaSpatializationMethod : uint8
{
	STEREO_PANNING                 = 0,
	HRTF                           = 1,
	ERaSpatializationMethod_MAX    = 2,
};

enum class ERaDistanceRolloffModel : uint8
{
	LOGARITHMIC                    = 0,
	LINEAR                         = 1,
	NONE                           = 2,
	ERaDistanceRolloffModel_MAX    = 3,
};

enum class ERaMaterialName : uint8
{
	TRANSPARENT_                   = 0,
	ACOUSTIC_CEILING_TILES         = 1,
	BRICK_BARE                     = 2,
	BRICK_PAINTED                  = 3,
	CONCRETE_BLOCK_COARSE          = 4,
	CONCRETE_BLOCK_PAINTED         = 5,
	CURTAIN_HEAVY                  = 6,
	FIBER_GLASS_INSULATION         = 7,
	GLASS_THIN                     = 8,
	GLASS_THICK                    = 9,
	GRASS                          = 10,
	LINOLEUM_ON_CONCRETE           = 11,
	MARBLE                         = 12,
	METAL                          = 13,
	PARQUET_ONCONCRETE             = 14,
	PLASTER_ROUGH                  = 15,
	PLASTER_SMOOTH                 = 16,
	PLYWOOD_PANEL                  = 17,
	POLISHED_CONCRETE_OR_TILE      = 18,
	SHEETROCK                      = 19,
	WATER_OR_ICE_SURFACE           = 20,
	WOOD_CEILING                   = 21,
	WOOD_PANEL                     = 22,
	UNIFORM                        = 23,
	ERaMaterialName_MAX            = 24,
};

enum class EResonanceRenderMode : uint8
{
	StereoPanning                  = 0,
	BinauralLowQuality             = 1,
	BinauralMediumQuality          = 2,
	BinauralHighQuality            = 3,
	RoomEffectsOnly                = 4,
	EResonanceRenderMode_MAX       = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x70 - 0x0)
// ScriptStruct ResonanceAudio.ResonanceAudioReverbPluginSettings
struct FResonanceAudioReverbPluginSettings
{
public:
	bool                                         bEnableRoomEffects;                                // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, InstancedReference, SubobjectReference)
	bool                                         bGetTransformFromAudioVolume;                      // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FAC[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               RoomPosition;                                      // 0x8(0x18)(ExportObject, Parm, InstancedReference, SubobjectReference)
	struct FQuat                                 RoomRotation;                                      // 0x20(0x20)(Edit, Parm, InstancedReference, SubobjectReference)
	struct FVector                               RoomDimensions;                                    // 0x40(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, InstancedReference, SubobjectReference)
	enum class ERaMaterialName                   LeftWallMaterial;                                  // 0x58(0x1)(BlueprintReadOnly, Net, EditFixedSize, InstancedReference, SubobjectReference)
	enum class ERaMaterialName                   RightWallMaterial;                                 // 0x59(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, InstancedReference, SubobjectReference)
	enum class ERaMaterialName                   FloorMaterial;                                     // 0x5A(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, InstancedReference, SubobjectReference)
	enum class ERaMaterialName                   CeilingMaterial;                                   // 0x5B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, InstancedReference, SubobjectReference)
	enum class ERaMaterialName                   FrontWallMaterial;                                 // 0x5C(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, InstancedReference, SubobjectReference)
	enum class ERaMaterialName                   BackWallMaterial;                                  // 0x5D(0x1)(ConstParm, EditFixedSize, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FB2[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ReflectionScalar;                                  // 0x60(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, InstancedReference, SubobjectReference)
	float                                        ReverbGain;                                        // 0x64(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, InstancedReference, SubobjectReference)
	float                                        ReverbTimeModifier;                                // 0x68(0x4)(Edit, ExportObject, Net, InstancedReference, SubobjectReference)
	float                                        ReverbBrightness;                                  // 0x6C(0x4)(Net, InstancedReference, SubobjectReference)
};

}


