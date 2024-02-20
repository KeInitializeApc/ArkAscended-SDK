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
	TArray<class FString>                        Value;                                             // 0x0(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieSceneCapture.CaptureResolution
struct FCaptureResolution
{
public:
	int32                                        ResX;                                              // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ResY;                                              // 0x4(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
struct FMovieSceneCaptureSettings
{
public:
	struct FDirectoryPath                        OutputDirectory;                                   // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                GameModeOverride;                                  // 0x10(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                OutputFormat;                                      // 0x18(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOverwriteExisting;                                // 0x28(0x1)(Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseRelativeFrameNumbers;                          // 0x29(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1E25[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        HandleFrames;                                      // 0x2C(0x4)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                MovieExtension;                                    // 0x30(0x10)(BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        ZeroPadFrameNumbers;                               // 0x40(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1E26[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFrameRate                            FrameRate;                                         // 0x44(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm)
	bool                                         bUseCustomFrameRate;                               // 0x4C(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1E28[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFrameRate                            CustomFrameRate;                                   // 0x50(0x8)(Edit, BlueprintVisible, Net, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCaptureResolution                    Resolution;                                        // 0x58(0x8)(Edit, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableTextureStreaming;                           // 0x60(0x1)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCinematicEngineScalability;                       // 0x61(0x1)(Edit, ExportObject, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCinematicMode;                                    // 0x62(0x1)(Edit, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowMovement;                                    // 0x63(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowTurning;                                     // 0x64(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShowPlayer;                                       // 0x65(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShowHUD;                                          // 0x66(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUsePathTracer;                                    // 0x67(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PathTracerSamplePerPixel;                          // 0x68(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1E30[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneCapture.FrameMetrics
struct FFrameMetrics
{
public:
	float                                        TotalElapsedTime;                                  // 0x0(0x4)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FrameDelta;                                        // 0x4(0x4)(BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FrameNumber;                                       // 0x8(0x4)(Edit, Net, Parm, Transient, DisableEditOnInstance)
	int32                                        NumDroppedFrames;                                  // 0xC(0x4)(Edit, ConstParm, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MovieSceneCapture.CapturedPixelsID
struct FCapturedPixelsID
{
public:
	TMap<class FName, class FName>               Identifiers;                                       // 0x0(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneCapture.CapturedPixels
struct FCapturedPixels
{
public:
	uint8                                        Pad_1E33[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

}


