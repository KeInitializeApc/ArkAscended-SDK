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
	int32                                        ResX;                                              // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        ResY;                                              // 0x4(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
struct FMovieSceneCaptureSettings
{
public:
	struct FDirectoryPath                        OutputDirectory;                                   // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class UClass*                                GameModeOverride;                                  // 0x10(0x8)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                OutputFormat;                                      // 0x18(0x10)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bOverwriteExisting;                                // 0x28(0x1)(Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUseRelativeFrameNumbers;                          // 0x29(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E78[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        HandleFrames;                                      // 0x2C(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class FString                                MovieExtension;                                    // 0x30(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        ZeroPadFrameNumbers;                               // 0x40(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E79[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFrameRate                            FrameRate;                                         // 0x44(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm)
	bool                                         bUseCustomFrameRate;                               // 0x4C(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E7A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFrameRate                            CustomFrameRate;                                   // 0x50(0x8)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FCaptureResolution                    Resolution;                                        // 0x58(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableTextureStreaming;                           // 0x60(0x1)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCinematicEngineScalability;                       // 0x61(0x1)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bCinematicMode;                                    // 0x62(0x1)(Edit, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAllowMovement;                                    // 0x63(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bAllowTurning;                                     // 0x64(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShowPlayer;                                       // 0x65(0x1)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bShowHUD;                                          // 0x66(0x1)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bUsePathTracer;                                    // 0x67(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        PathTracerSamplePerPixel;                          // 0x68(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E7B[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneCapture.FrameMetrics
struct FFrameMetrics
{
public:
	float                                        TotalElapsedTime;                                  // 0x0(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        FrameDelta;                                        // 0x4(0x4)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        FrameNumber;                                       // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	int32                                        NumDroppedFrames;                                  // 0xC(0x4)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MovieSceneCapture.CapturedPixelsID
struct FCapturedPixelsID
{
public:
	TMap<class FName, class FName>               Identifiers;                                       // 0x0(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneCapture.CapturedPixels
struct FCapturedPixels
{
public:
	uint8                                        Pad_2E7C[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

}


