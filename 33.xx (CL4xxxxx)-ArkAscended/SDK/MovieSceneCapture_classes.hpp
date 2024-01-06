#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
class UMovieSceneCaptureProtocolBase : public UObject
{
public:
	uint8                                        Pad_24C0[0x28];                                    // Fixing Size After Last Property  > TateDumper <
	enum class EMovieSceneCaptureProtocolState   State;                                             // 0x50(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
	uint8                                        Pad_24C1[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneCaptureProtocolBase* GetDefaultObj();

	void IsCapturing(bool* ReturnValue);
	void GetState(enum class EMovieSceneCaptureProtocolState* ReturnValue);
};

// 0x0 (0x58 - 0x58)
// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneAudioCaptureProtocolBase* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneCapture.NullAudioCaptureProtocol
class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
public:

	static class UClass* StaticClass();
	static class UNullAudioCaptureProtocol* GetDefaultObj();

};

// 0x38 (0x90 - 0x58)
// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
public:
	class FString                                Filename;                                          // 0x58(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm)
	uint8                                        Pad_24CD[0x28];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMasterAudioSubmixCaptureProtocol* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneImageCaptureProtocolBase* GetDefaultObj();

};

// 0x70 (0xC8 - 0x58)
// Class MovieSceneCapture.CompositionGraphCaptureProtocol
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	struct FCompositionGraphCapturePasses        IncludeRenderPasses;                               // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bCaptureFramesInHDR;                               // 0x68(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_24D2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        HDRCompressionQuality;                             // 0x6C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EHDRCaptureGamut                  CaptureGamut;                                      // 0x70(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_24D4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSoftObjectPath                       PostProcessingMaterial;                            // 0x78(0x20)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDisableScreenPercentage;                          // 0x98(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_24D7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    PostProcessingMaterialPtr;                         // 0xA0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_24D8[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCompositionGraphCaptureProtocol* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieSceneCapture.MovieSceneCaptureInterface
class IMovieSceneCaptureInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneCaptureInterface* GetDefaultObj();

};

// 0x10 (0x68 - 0x58)
// Class MovieSceneCapture.FrameGrabberProtocol
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	uint8                                        Pad_24DC[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFrameGrabberProtocol* GetDefaultObj();

};

// 0x70 (0xD8 - 0x68)
// Class MovieSceneCapture.ImageSequenceProtocol
class UImageSequenceProtocol : public UFrameGrabberProtocol
{
public:
	uint8                                        Pad_24DE[0x70];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UImageSequenceProtocol* GetDefaultObj();

};

// 0x8 (0xE0 - 0xD8)
// Class MovieSceneCapture.CompressedImageSequenceProtocol
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{
public:
	int32                                        CompressionQuality;                                // 0xD8(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_24E0[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCompressedImageSequenceProtocol* GetDefaultObj();

};

// 0x0 (0xD8 - 0xD8)
// Class MovieSceneCapture.ImageSequenceProtocol_BMP
class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
{
public:

	static class UClass* StaticClass();
	static class UImageSequenceProtocol_BMP* GetDefaultObj();

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneCapture.ImageSequenceProtocol_PNG
class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
{
public:

	static class UClass* StaticClass();
	static class UImageSequenceProtocol_PNG* GetDefaultObj();

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneCapture.ImageSequenceProtocol_JPG
class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
{
public:

	static class UClass* StaticClass();
	static class UImageSequenceProtocol_JPG* GetDefaultObj();

};

// 0x10 (0xE8 - 0xD8)
// Class MovieSceneCapture.ImageSequenceProtocol_EXR
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{
public:
	bool                                         bCompressed;                                       // 0xD8(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
	enum class EHDRCaptureGamut                  CaptureGamut;                                      // 0xD9(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_24E4[0xE];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UImageSequenceProtocol_EXR* GetDefaultObj();

};

// 0x210 (0x238 - 0x28)
// Class MovieSceneCapture.MovieSceneCapture
class UMovieSceneCapture : public UObject
{
public:
	uint8                                        Pad_24EC[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSoftClassPath                        ImageCaptureProtocolType;                          // 0x38(0x20)(BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FSoftClassPath                        AudioCaptureProtocolType;                          // 0x58(0x20)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UMovieSceneImageCaptureProtocolBase*   ImageCaptureProtocol;                              // 0x78(0x8)(BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UMovieSceneAudioCaptureProtocolBase*   AudioCaptureProtocol;                              // 0x80(0x8)(Edit, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FMovieSceneCaptureSettings            Settings;                                          // 0x88(0x70)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bUseSeparateProcess;                               // 0xF8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bCloseEditorWhenCaptureStarts;                     // 0xF9(0x1)(ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_24F3[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                AdditionalCommandLineArguments;                    // 0x100(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class FString                                InheritedCommandLineArguments;                     // 0x110(0x10)(Edit, ConstParm, EditFixedSize, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_24F4[0x118];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneCapture* GetDefaultObj();

	void SetImageCaptureProtocolType(class UClass** ProtocolType);
	void SetAudioCaptureProtocolType(class UClass** ProtocolType);
	void GetImageCaptureProtocol(class UMovieSceneCaptureProtocolBase** ReturnValue);
	void GetAudioCaptureProtocol(class UMovieSceneCaptureProtocolBase** ReturnValue);
};

// 0x20 (0x258 - 0x238)
// Class MovieSceneCapture.LevelCapture
class ULevelCapture : public UMovieSceneCapture
{
public:
	bool                                         bAutoStartCapture;                                 // 0x238(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_24F9[0xB];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 PrerequisiteActorId;                               // 0x244(0x10)(Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_24FA[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULevelCapture* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieSceneCapture.MovieSceneCaptureEnvironment
class UMovieSceneCaptureEnvironment : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneCaptureEnvironment* GetDefaultObj();

	void IsCaptureInProgress(bool* ReturnValue);
	void GetCaptureFrameNumber(int32* ReturnValue);
	void GetCaptureElapsedTime(float* ReturnValue);
	void FindImageCaptureProtocol(class UMovieSceneImageCaptureProtocolBase** ReturnValue);
	void FindAudioCaptureProtocol(class UMovieSceneAudioCaptureProtocolBase** ReturnValue);
};

// 0x80 (0xD8 - 0x58)
// Class MovieSceneCapture.UserDefinedCaptureProtocol
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	class UWorld*                                World;                                             // 0x58(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	uint8                                        Pad_2510[0x78];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUserDefinedCaptureProtocol* GetDefaultObj();

	void StopCapturingFinalPixels();
	struct FCapturedPixelsID StartCapturingFinalPixels();
	struct FCapturedPixelsID ResolveBuffer(class UTexture** Buffer);
	void OnWarmUp();
	void OnTick();
	void OnStartCapture();
	void OnSetup(bool* ReturnValue);
	void OnPreTick();
	struct FFrameMetrics OnPixelsReceived(struct FCapturedPixelsID* ID);
	void OnPauseCapture();
	void OnFinalize();
	void OnCaptureFrame();
	void OnCanFinalize(bool* ReturnValue);
	void OnBeginFinalize();
	void GetCurrentFrameMetrics(struct FFrameMetrics* ReturnValue);
	struct FFrameMetrics GenerateFilename(class FString* ReturnValue);
};

// 0x8 (0xE0 - 0xD8)
// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{
public:
	enum class EDesiredImageFormat               Format;                                            // 0xD8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst)
	bool                                         bEnableCompression;                                // 0xD9(0x1)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_251D[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CompressionQuality;                                // 0xDC(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class UUserDefinedImageCaptureProtocol* GetDefaultObj();

	bool WriteImageToDisk();
	void GenerateFilenameForCurrentFrame(class FString* ReturnValue);
	struct FCapturedPixelsID GenerateFilenameForBuffer(class UTexture** Buffer, class FString* ReturnValue);
};

// 0x18 (0x80 - 0x68)
// Class MovieSceneCapture.VideoCaptureProtocol
class UVideoCaptureProtocol : public UFrameGrabberProtocol
{
public:
	bool                                         bUseCompression;                                   // 0x68(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, DuplicateTransient)
	uint8                                        Pad_2520[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CompressionQuality;                                // 0x6C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_2521[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UVideoCaptureProtocol* GetDefaultObj();

};

}

