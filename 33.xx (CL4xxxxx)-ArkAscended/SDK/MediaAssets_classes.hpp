#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x80 - 0x28)
// Class MediaAssets.MediaSource
class UMediaSource : public UObject
{
public:
	uint8                                        Pad_2489[0x58];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMediaSource* GetDefaultObj();

	bool Validate();
	void SetMediaOptionString(class FName Key, const class FString& Value);
	void SetMediaOptionInt64(class FName Key, int64 Value);
	void SetMediaOptionFloat(class FName Key, float Value);
	void SetMediaOptionBool(class FName Key, bool Value);
	class FString GetUrl();
};

// 0x8 (0x88 - 0x80)
// Class MediaAssets.BaseMediaSource
class UBaseMediaSource : public UMediaSource
{
public:
	class FName                                  PlayerName;                                        // 0x80(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UBaseMediaSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MediaAssets.MediaSourceRendererInterface
class IMediaSourceRendererInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMediaSourceRendererInterface* GetDefaultObj();

};

// 0xE8 (0x2C0 - 0x1D8)
// Class MediaAssets.MediaTexture
class UMediaTexture : public UTexture
{
public:
	enum class ETextureAddress                   AddressX;                                          // 0x1D8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	enum class ETextureAddress                   AddressY;                                          // 0x1D9(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         AutoClear;                                         // 0x1DA(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_248A[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          ClearColor;                                        // 0x1DC(0x10)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	bool                                         EnableGenMips;                                     // 0x1EC(0x1)(ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        NumMips;                                           // 0x1ED(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         NewStyleOutput;                                    // 0x1EE(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EMediaTextureOutputFormat         OutputFormat;                                      // 0x1EF(0x1)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	float                                        CurrentAspectRatio;                                // 0x1F0(0x4)(BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EMediaTextureOrientation          CurrentOrientation;                                // 0x1F4(0x1)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_248B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UMediaPlayer*                          MediaPlayer;                                       // 0x1F8(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_248C[0xC0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMediaTexture* GetDefaultObj();

	void UpdateResource();
	class UMediaPlayer* SetMediaPlayer();
	int32 GetWidth();
	int32 GetTextureNumMips();
	class UMediaPlayer* GetMediaPlayer();
	int32 GetHeight();
	float GetAspectRatio();
};

// 0x28 (0xB0 - 0x88)
// Class MediaAssets.FileMediaSource
class UFileMediaSource : public UBaseMediaSource
{
public:
	class FString                                FilePath;                                          // 0x88(0x10)(BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	bool                                         PrecacheFile;                                      // 0x98(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_248D[0x17];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFileMediaSource* GetDefaultObj();

	void SetFilePath(const class FString& Path);
};

// 0x10 (0xC8 - 0xB8)
// Class MediaAssets.MediaComponent
class UMediaComponent : public UActorComponent
{
public:
	class UMediaTexture*                         MediaTexture;                                      // 0xB8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	class UMediaPlayer*                          MediaPlayer;                                       // 0xC0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)

	static class UClass* StaticClass();
	static class UMediaComponent* GetDefaultObj();

	class UMediaTexture* GetMediaTexture();
	class UMediaPlayer* GetMediaPlayer();
};

// 0x10 (0x38 - 0x28)
// Class MediaAssets.MediaTimeStampInfo
class UMediaTimeStampInfo : public UObject
{
public:
	struct FTimespan                             Time;                                              // 0x28(0x8)(Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	int64                                        SequenceIndex;                                     // 0x30(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMediaTimeStampInfo* GetDefaultObj();

};

// 0x128 (0x150 - 0x28)
// Class MediaAssets.MediaPlayer
class UMediaPlayer : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnEndReached;                                      // 0x28(0x10)(ConstParm, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMediaClosed;                                     // 0x38(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMediaOpened;                                     // 0x48(0x10)(Edit, Net, GlobalConfig)
	FMulticastInlineDelegateProperty_            OnMediaOpenFailed;                                 // 0x58(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPlaybackResumed;                                 // 0x68(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPlaybackSuspended;                               // 0x78(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSeekCompleted;                                   // 0x88(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnTracksChanged;                                   // 0x98(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMetadataChanged;                                 // 0xA8(0x10)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTimespan                             CacheAhead;                                        // 0xB8(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTimespan                             CacheBehind;                                       // 0xC0(0x8)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTimespan                             CacheBehindGame;                                   // 0xC8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         NativeAudioOut;                                    // 0xD0(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         PlayOnOpen;                                        // 0xD1(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2522[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        Shuffle : 1;                                       // Mask: 0x1, PropSize: 0x10xD4(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Loop : 1;                                          // Mask: 0x2, PropSize: 0x10xD4(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_1D2 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2523[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UMediaPlaylist*                        Playlist;                                          // 0xD8(0x8)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        PlaylistIndex;                                     // 0xE0(0x4)(Edit, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2524[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTimespan                             TimeDelay;                                         // 0xE8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst)
	float                                        HorizontalFieldOfView;                             // 0xF0(0x4)(ConstParm, BlueprintVisible, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        VerticalFieldOfView;                               // 0xF4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FRotator                              ViewRotation;                                      // 0xF8(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2525[0x28];                                    // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 PlayerGuid;                                        // 0x138(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2526[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMediaPlayer* GetDefaultObj();

	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float Rate, bool Unthinned);
	bool SetViewRotation(struct FRotator* Rotation);
	bool SetViewField();
	bool SetVideoTrackFrameRate();
	bool SetTrackFormat();
	struct FTimespan SetTimeDelay();
	bool SetRate(float Rate);
	bool SetNativeVolume(float* Volume);
	class UMediaSource* SetMediaOptions();
	bool SetLooping(bool* Looping);
	class FName SetDesiredPlayerName();
	void SetBlockOnTime(const struct FTimespan& Time);
	bool SelectTrack();
	bool Seek(const struct FTimespan& Time);
	bool Rewind();
	bool Reopen();
	bool Previous();
	void PlayAndSeek();
	bool Play();
	bool Pause();
	bool OpenUrl(class FString* URL);
	bool OpenSourceWithOptions();
	bool OpenSourceLatent();
	bool OpenSource();
	bool OpenPlaylistIndex();
	bool OpenPlaylist();
	bool OpenFile();
	bool Next();
	bool IsReady();
	bool IsPreparing();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	bool IsConnecting();
	bool IsClosed();
	bool IsBuffering();
	bool HasError();
	struct FRotator GetViewRotation();
	class FString GetVideoTrackType();
	struct FFloatRange GetVideoTrackFrameRates();
	float GetVideoTrackFrameRate();
	struct FIntPoint GetVideoTrackDimensions();
	float GetVideoTrackAspectRatio();
	float GetVerticalFieldOfView();
	class FString GetUrl();
	class FString GetTrackLanguage();
	int32 GetTrackFormat();
	class FText GetTrackDisplayName();
	class UMediaTimeStampInfo* GetTimeStamp();
	struct FTimespan GetTimeDelay();
	struct FTimespan GetTime();
	TArray<struct FFloatRange> GetSupportedRates(bool Unthinned);
	int32 GetSelectedTrack();
	float GetRate();
	int32 GetPlaylistIndex();
	class UMediaPlaylist* GetPlaylist();
	class FName GetPlayerName();
	int32 GetNumTracks();
	int32 GetNumTrackFormats();
	class FText GetMediaName();
	float GetHorizontalFieldOfView();
	struct FTimespan GetDuration();
	class FName GetDesiredPlayerName();
	class FString GetAudioTrackType();
	int32 GetAudioTrackSampleRate();
	int32 GetAudioTrackChannels();
	void Close();
	bool CanPlayUrl(class FString* URL);
	bool CanPlaySource();
	bool CanPause();
};

// 0x0 (0x28 - 0x28)
// Class MediaAssets.MediaPlayerProxyInterface
class IMediaPlayerProxyInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMediaPlayerProxyInterface* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MediaAssets.MediaPlaylist
class UMediaPlaylist : public UObject
{
public:
	TArray<class UMediaSource*>                  Items;                                             // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMediaPlaylist* GetDefaultObj();

	bool Replace(class UMediaSource** Replacement);
	bool RemoveAt();
	bool Remove();
	int32 Num();
	int32 Insert();
	class UMediaSource* GetRandom();
	class UMediaSource* GetPrevious();
	class UMediaSource* GetNext();
	class UMediaSource* Get();
	bool AddUrl(class FString* URL);
	bool AddFile();
	bool Add();
};

// 0xE0 (0x8A0 - 0x7C0)
// Class MediaAssets.MediaSoundComponent
class UMediaSoundComponent : public USynthComponent
{
public:
	enum class EMediaSoundChannels               Channels;                                          // 0x7C0(0x4)(BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DynamicRateAdjustment;                             // 0x7C4(0x1)(Edit, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2547[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RateAdjustmentFactor;                              // 0x7C8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFloatRange                           RateAdjustmentRange;                               // 0x7CC(0x10)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2548[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMediaPlayer*                          MediaPlayer;                                       // 0x7E0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_254A[0xB8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMediaSoundComponent* GetDefaultObj();

	enum class EMediaSoundComponentFFTSize SetSpectralAnalysisSettings();
	class UMediaPlayer* SetMediaPlayer();
	int32 SetEnvelopeFollowingsettings();
	bool SetEnableSpectralAnalysis();
	bool SetEnableEnvelopeFollowing();
	TArray<struct FMediaSoundComponentSpectralData> GetSpectralData();
	TArray<struct FMediaSoundComponentSpectralData> GetNormalizedSpectralData();
	class UMediaPlayer* GetMediaPlayer();
	float GetEnvelopeValue();
	bool BP_GetAttenuationSettingsToApply();
};

// 0x8 (0x88 - 0x80)
// Class MediaAssets.PlatformMediaSource
class UPlatformMediaSource : public UMediaSource
{
public:
	class UMediaSource*                          MediaSource;                                       // 0x80(0x8)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)

	static class UClass* StaticClass();
	static class UPlatformMediaSource* GetDefaultObj();

};

// 0x10 (0x98 - 0x88)
// Class MediaAssets.StreamMediaSource
class UStreamMediaSource : public UBaseMediaSource
{
public:
	class FString                                StreamUrl;                                         // 0x88(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UStreamMediaSource* GetDefaultObj();

};

// 0x18 (0xA0 - 0x88)
// Class MediaAssets.TimeSynchronizableMediaSource
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{
public:
	bool                                         bUseTimeSynchronization;                           // 0x88(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_254C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        FrameDelay;                                        // 0x8C(0x4)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst)
	double                                       TimeDelay;                                         // 0x90(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst)
	bool                                         bAutoDetectInput;                                  // 0x98(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_254F[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UTimeSynchronizableMediaSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MediaAssets.MediaBlueprintFunctionLibrary
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMediaBlueprintFunctionLibrary* GetDefaultObj();

	TArray<struct FMediaCaptureDevice> EnumerateWebcamCaptureDevices(int32* Filter);
	TArray<struct FMediaCaptureDevice> EnumerateVideoCaptureDevices(int32* Filter);
	TArray<struct FMediaCaptureDevice> EnumerateAudioCaptureDevices(int32* Filter);
};

}


