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
	uint8                                        Pad_1A67[0x58];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMediaSource* GetDefaultObj();

	bool Validate();
	void SetMediaOptionString(class FName Key, class FString* Value);
	void SetMediaOptionInt64(class FName Key, int64* Value);
	void SetMediaOptionFloat(class FName Key, float* Value);
	void SetMediaOptionBool(class FName Key, bool* Value);
	class FString GetUrl();
};

// 0x8 (0x88 - 0x80)
// Class MediaAssets.BaseMediaSource
class UBaseMediaSource : public UMediaSource
{
public:
	class FName                                  PlayerName;                                        // 0x80(0x8)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)

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
	enum class ETextureAddress                   AddressX;                                          // 0x1D8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, DuplicateTransient)
	enum class ETextureAddress                   AddressY;                                          // 0x1D9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	bool                                         AutoClear;                                         // 0x1DA(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A87[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          ClearColor;                                        // 0x1DC(0x10)(ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig)
	bool                                         EnableGenMips;                                     // 0x1EC(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        NumMips;                                           // 0x1ED(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         NewStyleOutput;                                    // 0x1EE(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EMediaTextureOutputFormat         OutputFormat;                                      // 0x1EF(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)
	float                                        CurrentAspectRatio;                                // 0x1F0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EMediaTextureOrientation          CurrentOrientation;                                // 0x1F4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A8A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UMediaPlayer*                          MediaPlayer;                                       // 0x1F8(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_1A8B[0xC0];                                    // Fixing Size Of Struct > TateDumper <

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
	class FString                                FilePath;                                          // 0x88(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, EditConst, SubobjectReference)
	bool                                         PrecacheFile;                                      // 0x98(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst)
	uint8                                        Pad_1A92[0x17];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFileMediaSource* GetDefaultObj();

	class FString SetFilePath();
};

// 0x10 (0xC8 - 0xB8)
// Class MediaAssets.MediaComponent
class UMediaComponent : public UActorComponent
{
public:
	class UMediaTexture*                         MediaTexture;                                      // 0xB8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	class UMediaPlayer*                          MediaPlayer;                                       // 0xC0(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)

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
	struct FTimespan                             Time;                                              // 0x28(0x8)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	int64                                        SequenceIndex;                                     // 0x30(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMediaTimeStampInfo* GetDefaultObj();

};

// 0x128 (0x150 - 0x28)
// Class MediaAssets.MediaPlayer
class UMediaPlayer : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnEndReached;                                      // 0x28(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMediaClosed;                                     // 0x38(0x10)(BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMediaOpened;                                     // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig)
	FMulticastInlineDelegateProperty_            OnMediaOpenFailed;                                 // 0x58(0x10)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPlaybackResumed;                                 // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPlaybackSuspended;                               // 0x78(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSeekCompleted;                                   // 0x88(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnTracksChanged;                                   // 0x98(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMetadataChanged;                                 // 0xA8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTimespan                             CacheAhead;                                        // 0xB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTimespan                             CacheBehind;                                       // 0xC0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTimespan                             CacheBehindGame;                                   // 0xC8(0x8)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         NativeAudioOut;                                    // 0xD0(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         PlayOnOpen;                                        // 0xD1(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B69[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        Shuffle : 1;                                       // Mask: 0x1, PropSize: 0x10xD4(0x1)(Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Loop : 1;                                          // Mask: 0x2, PropSize: 0x10xD4(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        BitPad_CF : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1B6A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UMediaPlaylist*                        Playlist;                                          // 0xD8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        PlaylistIndex;                                     // 0xE0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B6B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTimespan                             TimeDelay;                                         // 0xE8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, EditConst)
	float                                        HorizontalFieldOfView;                             // 0xF0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        VerticalFieldOfView;                               // 0xF4(0x4)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FRotator                              ViewRotation;                                      // 0xF8(0x18)(Edit, ConstParm, ExportObject, Net, OutParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B6C[0x28];                                    // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 PlayerGuid;                                        // 0x138(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B6D[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMediaPlayer* GetDefaultObj();

	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float* Rate);
	bool SetViewRotation(struct FRotator* Rotation, bool* Absolute);
	bool SetViewField(bool* Absolute);
	bool SetVideoTrackFrameRate(int32* TrackIndex);
	bool SetTrackFormat(enum class EMediaPlayerTrack TrackType, int32* TrackIndex);
	struct FTimespan SetTimeDelay();
	bool SetRate(float* Rate);
	bool SetNativeVolume();
	void SetMediaOptions(class UMediaSource* Options);
	bool SetLooping();
	class FName SetDesiredPlayerName();
	struct FTimespan SetBlockOnTime();
	bool SelectTrack(enum class EMediaPlayerTrack TrackType, int32* TrackIndex);
	bool Seek();
	bool Rewind();
	bool Reopen();
	bool Previous();
	void PlayAndSeek();
	bool Play();
	bool Pause();
	bool OpenUrl();
	bool OpenSourceWithOptions(class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options);
	bool OpenSourceLatent(class UObject** WorldContextObject, class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options);
	bool OpenSource(class UMediaSource* MediaSource);
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
	class FString GetVideoTrackType(int32* TrackIndex);
	struct FFloatRange GetVideoTrackFrameRates(int32* TrackIndex);
	float GetVideoTrackFrameRate(int32* TrackIndex);
	struct FIntPoint GetVideoTrackDimensions(int32* TrackIndex);
	float GetVideoTrackAspectRatio(int32* TrackIndex);
	float GetVerticalFieldOfView();
	class FString GetUrl();
	class FString GetTrackLanguage(enum class EMediaPlayerTrack TrackType, int32* TrackIndex);
	int32 GetTrackFormat(enum class EMediaPlayerTrack TrackType, int32* TrackIndex);
	class FText GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, int32* TrackIndex);
	class UMediaTimeStampInfo* GetTimeStamp();
	struct FTimespan GetTimeDelay();
	struct FTimespan GetTime();
	bool GetSupportedRates();
	int32 GetSelectedTrack(enum class EMediaPlayerTrack TrackType);
	float GetRate();
	int32 GetPlaylistIndex();
	class UMediaPlaylist* GetPlaylist();
	class FName GetPlayerName();
	int32 GetNumTracks(enum class EMediaPlayerTrack TrackType);
	int32 GetNumTrackFormats(enum class EMediaPlayerTrack TrackType, int32* TrackIndex);
	class FText GetMediaName();
	float GetHorizontalFieldOfView();
	struct FTimespan GetDuration();
	class FName GetDesiredPlayerName();
	class FString GetAudioTrackType(int32* TrackIndex);
	int32 GetAudioTrackSampleRate(int32* TrackIndex);
	int32 GetAudioTrackChannels(int32* TrackIndex);
	void Close();
	bool CanPlayUrl();
	bool CanPlaySource(class UMediaSource* MediaSource);
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
	TArray<class UMediaSource*>                  Items;                                             // 0x28(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMediaPlaylist* GetDefaultObj();

	bool Replace();
	bool RemoveAt();
	bool Remove(class UMediaSource* MediaSource);
	int32 Num();
	int32 Insert(class UMediaSource* MediaSource);
	class UMediaSource* GetRandom();
	class UMediaSource* GetPrevious();
	class UMediaSource* GetNext();
	class UMediaSource* Get();
	bool AddUrl();
	bool AddFile();
	bool Add(class UMediaSource* MediaSource);
};

// 0xE0 (0x8A0 - 0x7C0)
// Class MediaAssets.MediaSoundComponent
class UMediaSoundComponent : public USynthComponent
{
public:
	enum class EMediaSoundChannels               Channels;                                          // 0x7C0(0x4)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         DynamicRateAdjustment;                             // 0x7C4(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BE3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RateAdjustmentFactor;                              // 0x7C8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFloatRange                           RateAdjustmentRange;                               // 0x7CC(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BE5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMediaPlayer*                          MediaPlayer;                                       // 0x7E0(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_1BE6[0xB8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMediaSoundComponent* GetDefaultObj();

	enum class EMediaSoundComponentFFTSize SetSpectralAnalysisSettings();
	class UMediaPlayer* SetMediaPlayer();
	void SetEnvelopeFollowingsettings(int32* AttackTimeMsec, int32* ReleaseTimeMsec);
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
	class UMediaSource*                          MediaSource;                                       // 0x80(0x8)(BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, GlobalConfig)

	static class UClass* StaticClass();
	static class UPlatformMediaSource* GetDefaultObj();

};

// 0x10 (0x98 - 0x88)
// Class MediaAssets.StreamMediaSource
class UStreamMediaSource : public UBaseMediaSource
{
public:
	class FString                                StreamUrl;                                         // 0x88(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UStreamMediaSource* GetDefaultObj();

};

// 0x18 (0xA0 - 0x88)
// Class MediaAssets.TimeSynchronizableMediaSource
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{
public:
	bool                                         bUseTimeSynchronization;                           // 0x88(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BF7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        FrameDelay;                                        // 0x8C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, EditConst)
	double                                       TimeDelay;                                         // 0x90(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, EditConst)
	bool                                         bAutoDetectInput;                                  // 0x98(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1BF8[0x7];                                     // Fixing Size Of Struct > TateDumper <

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

	int32 EnumerateWebcamCaptureDevices();
	int32 EnumerateVideoCaptureDevices();
	int32 EnumerateAudioCaptureDevices();
};

}


