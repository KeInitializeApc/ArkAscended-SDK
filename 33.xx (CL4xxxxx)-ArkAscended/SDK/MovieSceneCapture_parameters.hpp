#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
struct UMovieSceneCaptureProtocolBase_IsCapturing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
struct UMovieSceneCaptureProtocolBase_GetState_Params
{
public:
	enum class EMovieSceneCaptureProtocolState   ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
struct UMovieSceneCapture_SetImageCaptureProtocolType_Params
{
public:
	class UClass*                                ProtocolType;                                      // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
struct UMovieSceneCapture_SetAudioCaptureProtocolType_Params
{
public:
	class UClass*                                ProtocolType;                                      // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
struct UMovieSceneCapture_GetImageCaptureProtocol_Params
{
public:
	class UMovieSceneCaptureProtocolBase*        ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
struct UMovieSceneCapture_GetAudioCaptureProtocol_Params
{
public:
	class UMovieSceneCaptureProtocolBase*        ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
struct UMovieSceneCaptureEnvironment_IsCaptureInProgress_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
struct UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
struct UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
struct UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Params
{
public:
	class UMovieSceneImageCaptureProtocolBase*   ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
struct UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Params
{
public:
	class UMovieSceneAudioCaptureProtocolBase*   ReturnValue;                                       // 0x0(0x8)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
struct UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Params
{
public:
	struct FCapturedPixelsID                     StreamID;                                          // 0x0(0x50)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
struct UUserDefinedCaptureProtocol_ResolveBuffer_Params
{
public:
	class UTexture*                              Buffer;                                            // 0x0(0x8)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FCapturedPixelsID                     BufferID;                                          // 0x8(0x50)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
struct UUserDefinedCaptureProtocol_OnSetup_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
struct UUserDefinedCaptureProtocol_OnPixelsReceived_Params
{
public:
	struct FCapturedPixels                       Pixels;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FCapturedPixelsID                     ID;                                                // 0x10(0x50)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FFrameMetrics                         FrameMetrics;                                      // 0x60(0x10)(ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
struct UUserDefinedCaptureProtocol_OnCanFinalize_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
struct UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Params
{
public:
	struct FFrameMetrics                         ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
struct UUserDefinedCaptureProtocol_GenerateFilename_Params
{
public:
	struct FFrameMetrics                         InFrameMetrics;                                    // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
struct UUserDefinedImageCaptureProtocol_WriteImageToDisk_Params
{
public:
	struct FCapturedPixels                       PixelData;                                         // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FCapturedPixelsID                     StreamID;                                          // 0x10(0x50)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFrameMetrics                         FrameMetrics;                                      // 0x60(0x10)(ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst)
	bool                                         bCopyImageData;                                    // 0x70(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1F0B[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
struct UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
struct UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Params
{
public:
	class UTexture*                              Buffer;                                            // 0x0(0x8)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
	struct FCapturedPixelsID                     StreamID;                                          // 0x8(0x50)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FString                                ReturnValue;                                       // 0x58(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


