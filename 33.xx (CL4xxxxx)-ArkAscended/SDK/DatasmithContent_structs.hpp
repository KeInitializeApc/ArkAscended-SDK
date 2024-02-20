#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDatasmithAreaLightActorShape : uint8
{
	Rectangle                      = 0,
	Disc                           = 1,
	Sphere                         = 2,
	Cylinder                       = 3,
	None                           = 4,
	EDatasmithAreaLightActorShape_MAX = 5,
};

enum class EDatasmithAreaLightActorType : uint8
{
	Point                          = 0,
	Spot                           = 1,
	Rect                           = 2,
	EDatasmithAreaLightActorType_MAX = 3,
};

enum class EDatasmithImportSearchPackagePolicy : uint8
{
	Current                        = 0,
	All                            = 1,
	EDatasmithImportSearchPackagePolicy_MAX = 2,
};

enum class EDatasmithImportAssetConflictPolicy : uint8
{
	Replace                        = 0,
	Update                         = 1,
	Use                            = 2,
	Ignore                         = 3,
	EDatasmithImportAssetConflictPolicy_MAX = 4,
};

enum class EDatasmithImportActorPolicy : uint8
{
	Update                         = 0,
	Full                           = 1,
	Ignore                         = 2,
	EDatasmithImportActorPolicy_MAX = 3,
};

enum class EDatasmithImportMaterialQuality : uint8
{
	UseNoFresnelCurves             = 0,
	UseSimplifierFresnelCurves     = 1,
	UseRealFresnelCurves           = 2,
	EDatasmithImportMaterialQuality_MAX = 3,
};

enum class EDatasmithImportLightmapMin : uint8
{
	LIGHTMAP_16                    = 0,
	LIGHTMAP_32                    = 1,
	LIGHTMAP_64                    = 2,
	LIGHTMAP_128                   = 3,
	LIGHTMAP_256                   = 4,
	LIGHTMAP_512                   = 5,
	LIGHTMAP_MAX                   = 6,
};

enum class EDatasmithImportLightmapMax : uint8
{
	LIGHTMAP_64                    = 0,
	LIGHTMAP_128                   = 1,
	LIGHTMAP_256                   = 2,
	LIGHTMAP_512                   = 3,
	LIGHTMAP_1024                  = 4,
	LIGHTMAP_2048                  = 5,
	LIGHTMAP_4096                  = 6,
	LIGHTMAP_MAX                   = 7,
};

enum class EDatasmithImportScene : uint8
{
	NewLevel                       = 0,
	CurrentLevel                   = 1,
	AssetsOnly                     = 2,
	EDatasmithImportScene_MAX      = 3,
};

enum class EDatasmithCADStitchingTechnique : uint8
{
	StitchingNone                  = 0,
	StitchingHeal                  = 1,
	StitchingSew                   = 2,
	EDatasmithCADStitchingTechnique_MAX = 3,
};

enum class EDatasmithCADRetessellationRule : uint8
{
	All                            = 0,
	SkipDeletedSurfaces            = 1,
	EDatasmithCADRetessellationRule_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct DatasmithContent.DatasmithImportInfo
struct FDatasmithImportInfo
{
public:
	uint8                                        Pad_14B1[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
struct FDatasmithCameraLookatTrackingSettingsTemplate
{
public:
	uint8                                        bEnableLookAtTracking : 1;                         // Mask: 0x1, PropSize: 0x10x0(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAllowRoll : 1;                                    // Mask: 0x2, PropSize: 0x10x0(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_B4 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_14B6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class AActor>                 ActorToTrack;                                      // 0x8(0x30)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
struct FDatasmithCameraFilmbackSettingsTemplate
{
public:
	float                                        SensorWidth;                                       // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        SensorHeight;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct DatasmithContent.DatasmithCameraLensSettingsTemplate
struct FDatasmithCameraLensSettingsTemplate
{
public:
	float                                        MaxFStop;                                          // 0x0(0x4)(ConstParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct DatasmithContent.DatasmithCameraFocusSettingsTemplate
struct FDatasmithCameraFocusSettingsTemplate
{
public:
	enum class ECameraFocusMethod                FocusMethod;                                       // 0x0(0x1)(ConstParm, BlueprintReadOnly, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14B9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ManualFocusDistance;                               // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct DatasmithContent.DatasmithPostProcessSettingsTemplate
struct FDatasmithPostProcessSettingsTemplate
{
public:
	uint8                                        bOverride_WhiteTemp : 1;                           // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, ConstParm, ExportObject, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOverride_ColorSaturation : 1;                     // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOverride_VignetteIntensity : 1;                   // Mask: 0x4, PropSize: 0x10x0(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOverride_AutoExposureMethod : 1;                  // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOverride_CameraISO : 1;                           // Mask: 0x10, PropSize: 0x10x0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOverride_CameraShutterSpeed : 1;                  // Mask: 0x20, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_B5 : 2;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_14BA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bOverride_DepthOfFieldFstop : 1;                   // Mask: 0x1, PropSize: 0x10x4(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_B6 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_14BB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        WhiteTemp;                                         // 0x8(0x4)(BlueprintReadOnly, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        VignetteIntensity;                                 // 0xC(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector4                              ColorSaturation;                                   // 0x10(0x20)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EAutoExposureMethod               AutoExposureMethod;                                // 0x30(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14BF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CameraISO;                                         // 0x34(0x4)(Edit, BlueprintVisible, ExportObject, Net, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        CameraShutterSpeed;                                // 0x38(0x4)(Edit, ConstParm, Net, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        DepthOfFieldFstop;                                 // 0x3C(0x4)(Edit, ExportObject, BlueprintReadOnly, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct DatasmithContent.DatasmithAssetImportOptions
struct FDatasmithAssetImportOptions
{
public:
	class FName                                  PackagePath;                                       // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct DatasmithContent.DatasmithStaticMeshImportOptions
struct FDatasmithStaticMeshImportOptions
{
public:
	enum class EDatasmithImportLightmapMin       MinLightmapResolution;                             // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class EDatasmithImportLightmapMax       MaxLightmapResolution;                             // 0x1(0x1)(Edit, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bGenerateLightmapUVs;                              // 0x2(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRemoveDegenerates;                                // 0x3(0x1)(Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct DatasmithContent.DatasmithReimportOptions
struct FDatasmithReimportOptions
{
public:
	bool                                         bUpdateActors;                                     // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRespawnDeletedActors;                             // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct DatasmithContent.DatasmithImportBaseOptions
struct FDatasmithImportBaseOptions
{
public:
	enum class EDatasmithImportScene             SceneHandling;                                     // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIncludeGeometry;                                  // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIncludeMaterial;                                  // 0x2(0x1)(BlueprintVisible, ExportObject, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIncludeLight;                                     // 0x3(0x1)(BlueprintVisible, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIncludeCamera;                                    // 0x4(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIncludeAnimation;                                 // 0x5(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14C5[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDatasmithAssetImportOptions          AssetOptions;                                      // 0x8(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FDatasmithStaticMeshImportOptions     StaticMeshOptions;                                 // 0x10(0x4)(Edit, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DatasmithContent.DatasmithTessellationOptions
struct FDatasmithTessellationOptions
{
public:
	float                                        ChordTolerance;                                    // 0x0(0x4)(Edit, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxEdgeLength;                                     // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        NormalTolerance;                                   // 0x8(0x4)(BlueprintReadOnly, Net, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	enum class EDatasmithCADStitchingTechnique   StitchingTechnique;                                // 0xC(0x1)(ConstParm, BlueprintVisible, Net, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14C7[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4 (0x14 - 0x10)
// ScriptStruct DatasmithContent.DatasmithRetessellationOptions
struct FDatasmithRetessellationOptions : public FDatasmithTessellationOptions
{
public:
	enum class EDatasmithCADRetessellationRule   RetessellationRule;                                // 0x10(0x1)(Edit, ExportObject, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_14C9[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct DatasmithContent.DatasmithStaticParameterSetTemplate
struct FDatasmithStaticParameterSetTemplate
{
public:
	TMap<class FName, bool>                      StaticSwitchParameters;                            // 0x0(0x50)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DatasmithContent.DatasmithMeshBuildSettingsTemplate
struct FDatasmithMeshBuildSettingsTemplate
{
public:
	uint8                                        bUseMikkTSpace : 1;                                // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        bRecomputeNormals : 1;                             // Mask: 0x2, PropSize: 0x10x0(0x1)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRecomputeTangents : 1;                            // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRemoveDegenerates : 1;                            // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        bUseHighPrecisionTangentBasis : 1;                 // Mask: 0x10, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseFullPrecisionUVs : 1;                          // Mask: 0x20, PropSize: 0x10x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        bGenerateLightmapUVs : 1;                          // Mask: 0x40, PropSize: 0x10x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_B8 : 1;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_14D0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MinLightmapResolution;                             // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        SrcLightmapIndex;                                  // 0x8(0x4)(Edit, ExportObject, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        DstLightmapIndex;                                  // 0xC(0x4)(ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DatasmithContent.DatasmithStaticMaterialTemplate
struct FDatasmithStaticMaterialTemplate
{
public:
	class FName                                  MaterialSlotName;                                  // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, GlobalConfig, SubobjectReference)
	class UMaterialInterface*                    MaterialInterface;                                 // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoTemplate
struct FDatasmithMeshSectionInfoTemplate
{
public:
	int32                                        MaterialIndex;                                     // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoMapTemplate
struct FDatasmithMeshSectionInfoMapTemplate
{
public:
	TMap<uint32, struct FDatasmithMeshSectionInfoTemplate> Map;                                               // 0x0(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
};

}


