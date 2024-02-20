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
	bool                                         bBlurShape;                                        // 0x0(0x1)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_232A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Radius;                                            // 0x4(0x4)(ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landmass.BrushEffectCurlNoise
struct FBrushEffectCurlNoise
{
public:
	float                                        Curl1Amount;                                       // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Curl2Amount;                                       // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Curl1Tiling;                                       // 0x8(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        Curl2Tiling;                                       // 0xC(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Landmass.BrushEffectCurves
struct FBrushEffectCurves
{
public:
	bool                                         bUseCurveChannel;                                  // 0x0(0x1)(Edit, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2330[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UCurveFloat*                           ElevationCurveAsset;                               // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ChannelEdgeOffset;                                 // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ChannelDepth;                                      // 0x14(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        CurveRampWidth;                                    // 0x18(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2331[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Landmass.BrushEffectDisplacement
struct FBrushEffectDisplacement
{
public:
	float                                        DisplacementHeight;                                // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        DisplacementTiling;                                // 0x4(0x4)(Edit, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            Texture;                                           // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
	float                                        Midpoint;                                          // 0x10(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          Channel;                                           // 0x14(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	float                                        WeightmapInfluence;                                // 0x24(0x4)(ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Landmass.BrushEffectSmoothBlending
struct FBrushEffectSmoothBlending
{
public:
	float                                        InnerSmoothDistance;                               // 0x0(0x4)(EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        OuterSmoothDistance;                               // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Landmass.BrushEffectTerracing
struct FBrushEffectTerracing
{
public:
	float                                        TerraceAlpha;                                      // 0x0(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        TerraceSpacing;                                    // 0x4(0x4)(BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        TerraceSmoothness;                                 // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaskLength;                                        // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaskStartOffset;                                   // 0x10(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Landmass.LandmassBrushEffectsList
struct FLandmassBrushEffectsList
{
public:
	struct FBrushEffectBlurring                  Blurring;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FBrushEffectCurlNoise                 CurlNoise;                                         // 0x8(0x10)(ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FBrushEffectDisplacement              Displacement;                                      // 0x18(0x28)(Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FBrushEffectSmoothBlending            SmoothBlending;                                    // 0x40(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FBrushEffectTerracing                 Terracing;                                         // 0x48(0x14)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2335[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Landmass.LandmassFalloffSettings
struct FLandmassFalloffSettings
{
public:
	enum class EBrushFalloffMode                 FalloffMode;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2337[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        FalloffAngle;                                      // 0x4(0x4)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        FalloffWidth;                                      // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        EdgeOffset;                                        // 0xC(0x4)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ZOffset;                                           // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Landmass.LandmassTerrainCarvingSettings
struct FLandmassTerrainCarvingSettings
{
public:
	enum class EBrushBlendType                   BlendMode;                                         // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, GlobalConfig, DuplicateTransient)
	bool                                         bInvertShape;                                      // 0x1(0x1)(Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2347[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLandmassFalloffSettings              FalloffSettings;                                   // 0x4(0x14)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FLandmassBrushEffectsList             Effects;                                           // 0x18(0x60)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Priority;                                          // 0x78(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2348[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

}


