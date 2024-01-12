#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EBrushFalloffMode : uint8
{
	Angle                          = 0,
	Width                          = 1,
	EBrushFalloffMode_MAX          = 2,
};

enum class EBrushBlendType : uint8
{
	AlphaBlend                     = 0,
	Min                            = 1,
	Max                            = 2,
	Additive                       = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct Landmass.BrushEffectBlurring
struct FBrushEffectBlurring
{
public:
	bool                                         bBlurShape;                                        // 0x0(0x1)(Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2F30[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Radius;                                            // 0x4(0x4)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landmass.BrushEffectCurlNoise
struct FBrushEffectCurlNoise
{
public:
	float                                        Curl1Amount;                                       // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Curl2Amount;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Curl1Tiling;                                       // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Curl2Tiling;                                       // 0xC(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Landmass.BrushEffectCurves
struct FBrushEffectCurves
{
public:
	bool                                         bUseCurveChannel;                                  // 0x0(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2F31[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCurveFloat*                           ElevationCurveAsset;                               // 0x8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ChannelEdgeOffset;                                 // 0x10(0x4)(Edit, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ChannelDepth;                                      // 0x14(0x4)(ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CurveRampWidth;                                    // 0x18(0x4)(ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2F33[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Landmass.BrushEffectDisplacement
struct FBrushEffectDisplacement
{
public:
	float                                        DisplacementHeight;                                // 0x0(0x4)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DisplacementTiling;                                // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            Texture;                                           // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
	float                                        Midpoint;                                          // 0x10(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          Channel;                                           // 0x14(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	float                                        WeightmapInfluence;                                // 0x24(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Landmass.BrushEffectSmoothBlending
struct FBrushEffectSmoothBlending
{
public:
	float                                        InnerSmoothDistance;                               // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        OuterSmoothDistance;                               // 0x4(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Landmass.BrushEffectTerracing
struct FBrushEffectTerracing
{
public:
	float                                        TerraceAlpha;                                      // 0x0(0x4)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TerraceSpacing;                                    // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TerraceSmoothness;                                 // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaskLength;                                        // 0xC(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaskStartOffset;                                   // 0x10(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Landmass.LandmassBrushEffectsList
struct FLandmassBrushEffectsList
{
public:
	struct FBrushEffectBlurring                  Blurring;                                          // 0x0(0x8)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBrushEffectCurlNoise                 CurlNoise;                                         // 0x8(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBrushEffectDisplacement              Displacement;                                      // 0x18(0x28)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBrushEffectSmoothBlending            SmoothBlending;                                    // 0x40(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBrushEffectTerracing                 Terracing;                                         // 0x48(0x14)(BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2F35[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Landmass.LandmassFalloffSettings
struct FLandmassFalloffSettings
{
public:
	enum class EBrushFalloffMode                 FalloffMode;                                       // 0x0(0x1)(Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2F36[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        FalloffAngle;                                      // 0x4(0x4)(ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FalloffWidth;                                      // 0x8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        EdgeOffset;                                        // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ZOffset;                                           // 0x10(0x4)(BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Landmass.LandmassTerrainCarvingSettings
struct FLandmassTerrainCarvingSettings
{
public:
	enum class EBrushBlendType                   BlendMode;                                         // 0x0(0x1)(ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	bool                                         bInvertShape;                                      // 0x1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2F37[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLandmassFalloffSettings              FalloffSettings;                                   // 0x4(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLandmassBrushEffectsList             Effects;                                           // 0x18(0x60)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Priority;                                          // 0x78(0x4)(Edit, ConstParm, Net, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_2F38[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

}


