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
	uint8                                        Pad_2E58[0x28];                                    // Fixing Size After Last Property  > TateDumper <
	enum class EMovieSceneCaptureProtocolState   State;                                             // 0x50(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
	uint8                                        Pad_2E59[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneCaptureProtocolBase* GetDefaultObj();

	bool IsCapturing();
	enum class EMovieSceneCaptureProtocolState GetState();
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
	uint8                                        Pad_2E5C[0x28];                                    // Fixing Size Of Struct > TateDumper <

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
	struct FCompositionGraphCapturePasses        IncludeRenderPasses;                               // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bCaptureFramesInHDR;                               // 0x68(0x1)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E5D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        HDRCompressionQuality;                             // 0x6C(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EHDRCaptureGamut                  CaptureGamut;                                      // 0x70(0x1)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E5E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSoftObjectPath                       PostProcessingMaterial;                            // 0x78(0x20)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDisableScreenPercentage;                          // 0x98(0x1)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E61[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UMaterialInterface*                    PostProcessingMaterialPtr;                         // 0xA0(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E62[0x20];                                    // Fixing Size Of Struct > TateDumper <

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
	uint8                                        Pad_2E69[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFrameGrabberProtocol* GetDefaultObj();

};

// 0x70 (0xD8 - 0x68)
// Class MovieSceneCapture.ImageSequenceProtocol
class UImageSequenceProtocol : public UFrameGrabberProtocol
{
public:
	uint8                                        Pad_2E6A[0x70];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UImageSequenceProtocol* GetDefaultObj();

};

// 0x8 (0xE0 - 0xD8)
// Class MovieSceneCapture.CompressedImageSequenceProtocol
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{
public:
	int32                                        CompressionQuality;                                // 0xD8(0x4)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_2E6B[0x4];                                     // Fixing Size Of Struct > TateDumper <

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
	bool                                         bCompressed;                                       // 0xD8(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	enum class EHDRCaptureGamut                  CaptureGamut;                                      // 0xD9(0x1)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E6C[0xE];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UImageSequenceProtocol_EXR* GetDefaultObj();

};

// 0x210 (0x238 - 0x28)
// Class MovieSceneCapture.MovieSceneCapture
class UMovieSceneCapture : public UObject
{
public:
	uint8                                        Pad_2E6D[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	struct FSoftClassPath                        ImageCaptureProtocolType;                          // 0x38(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FSoftClassPath                        AudioCaptureProtocolType;                          // 0x58(0x20)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UMovieSceneImageCaptureProtocolBase*   ImageCaptureProtocol;                              // 0x78(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UMovieSceneAudioCaptureProtocolBase*   AudioCaptureProtocol;                              // 0x80(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FMovieSceneCaptureSettings            Settings;                                          // 0x88(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bUseSeparateProcess;                               // 0xF8(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bCloseEditorWhenCaptureStarts;                     // 0xF9(0x1)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E6F[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                AdditionalCommandLineArguments;                    // 0x100(0x10)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class FString                                InheritedCommandLineArguments;                     // 0x110(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E70[0x118];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneCapture* GetDefaultObj();

	class UClass* SetImageCaptureProtocolType();
	class UClass* SetAudioCaptureProtocolType();
	class UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();
	class UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();
};

// 0x20 (0x258 - 0x238)
// Class MovieSceneCapture.LevelCapture
class ULevelCapture : public UMovieSceneCapture
{
public:
	bool                                         bAutoStartCapture;                                 // 0x238(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E71[0xB];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 PrerequisiteActorId;                               // 0x244(0x10)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E72[0x4];                                     // Fixing Size Of Struct > TateDumper <

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

	bool IsCaptureInProgress();
	int32 GetCaptureFrameNumber();
	float GetCaptureElapsedTime();
	class UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol();
	class UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol();
};

// 0x80 (0xD8 - 0x58)
// Class MovieSceneCapture.UserDefinedCaptureProtocol
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	class UWorld*                                World;                                             // 0x58(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	uint8                                        Pad_2E73[0x78];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UUserDefinedCaptureProtocol* GetDefaultObj();

	void StopCapturingFinalPixels();
	struct FCapturedPixelsID StartCapturingFinalPixels();
	struct FCapturedPixelsID ResolveBuffer();
	void OnWarmUp();
	void OnTick();
	void OnStartCapture();
	bool OnSetup();
	void OnPreTick();
	struct FFrameMetrics OnPixelsReceived(struct FCapturedPixelsID* ID);
	void OnPauseCapture();
	void OnFinalize();
	void OnCaptureFrame();
	bool OnCanFinalize();
	void OnBeginFinalize();
	struct FFrameMetrics GetCurrentFrameMetrics();
	class FString GenerateFilename();
};

// 0x8 (0xE0 - 0xD8)
// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{
public:
	enum class EDesiredImageFormat               Format;                                            // 0xD8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst)
	bool                                         bEnableCompression;                                // 0xD9(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2E75[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CompressionQuality;                                // 0xDC(0x4)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class UUserDefinedImageCaptureProtocol* GetDefaultObj();

	bool WriteImageToDisk();
	class FString GenerateFilenameForCurrentFrame();
	class FString GenerateFilenameForBuffer();
};

// 0x18 (0x80 - 0x68)
// Class MovieSceneCapture.VideoCaptureProtocol
class UVideoCaptureProtocol : public UFrameGrabberProtocol
{
public:
	bool                                         bUseCompression;                                   // 0x68(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference)
	uint8                                        Pad_2E76[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CompressionQuality;                                // 0x6C(0x4)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_2E77[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UVideoCaptureProtocol* GetDefaultObj();

};

}


