#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EHDRCaptureGamut : uint8
{
	HCGM_Rec709                    = 0,
	HCGM_P3DCI                     = 1,
	HCGM_Rec2020                   = 2,
	HCGM_ACES                      = 3,
	HCGM_ACEScg                    = 4,
	HCGM_Linear                    = 5,
	HCGM_MAX                       = 6,
};

enum class EMovieSceneCaptureProtocolState : uint8
{
	Idle                           = 0,
	Initialized                    = 1,
	Capturing                      = 2,
	Finalizing                     = 3,
	EMovieSceneCaptureProtocolState_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
struct FCompositionGraphCapturePasses
{
public:
	TArray<class FString>                        Value;                                             // 0x0(0x10)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieSceneCapture.CaptureResolution
struct FCaptureResolution
{
public:
	int32                                        ResX;                                              // 0x0(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        ResY;                                              // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
struct FMovieSceneCaptureSettings
{
public:
	struct FDirectoryPath                        OutputDirectory;                                   // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class UClass*                                GameModeOverride;                                  // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                OutputFormat;                                      // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bOverwriteExisting;                                // 0x28(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUseRelativeFrameNumbers;                          // 0x29(0x1)(BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FEA[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        HandleFrames;                                      // 0x2C(0x4)(Edit, ExportObject, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                MovieExtension;                                    // 0x30(0x10)(Edit, Net, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        ZeroPadFrameNumbers;                               // 0x40(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FEB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFrameRate                            FrameRate;                                         // 0x44(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm)
	bool                                         bUseCustomFrameRate;                               // 0x4C(0x1)(Edit, ConstParm, ExportObject, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FEC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFrameRate                            CustomFrameRate;                                   // 0x50(0x8)(ConstParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FCaptureResolution                    Resolution;                                        // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableTextureStreaming;                           // 0x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCinematicEngineScalability;                       // 0x61(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCinematicMode;                                    // 0x62(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAllowMovement;                                    // 0x63(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAllowTurning;                                     // 0x64(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShowPlayer;                                       // 0x65(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShowHUD;                                          // 0x66(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUsePathTracer;                                    // 0x67(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        PathTracerSamplePerPixel;                          // 0x68(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FED[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneCapture.FrameMetrics
struct FFrameMetrics
{
public:
	float                                        TotalElapsedTime;                                  // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	float                                        FrameDelta;                                        // 0x4(0x4)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        FrameNumber;                                       // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	int32                                        NumDroppedFrames;                                  // 0xC(0x4)(Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MovieSceneCapture.CapturedPixelsID
struct FCapturedPixelsID
{
public:
	TMap<class FName, class FName>               Identifiers;                                       // 0x0(0x50)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneCapture.CapturedPixels
struct FCapturedPixels
{
public:
	uint8                                        Pad_2FEE[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

}


