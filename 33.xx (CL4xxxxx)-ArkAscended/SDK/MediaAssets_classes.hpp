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
	uint8                                        Pad_1D11[0x58];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMediaSource* GetDefaultObj();

	void Validate(bool* ReturnValue);
	void SetMediaOptionString(class FName Key, const class FString& Value);
	void SetMediaOptionInt64(class FName Key, int64 Value);
	void SetMediaOptionFloat(class FName Key, float Value);
	void SetMediaOptionBool(class FName Key, bool Value);
	void GetUrl(class FString* ReturnValue);
};

// 0x8 (0x88 - 0x80)
// Class MediaAssets.BaseMediaSource
class UBaseMediaSource : public UMediaSource
{
public:
	class FName                                  PlayerName;                                        // 0x80(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
	enum class ETextureAddress                   AddressX;                                          // 0x1D8(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	enum class ETextureAddress                   AddressY;                                          // 0x1D9(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         AutoClear;                                         // 0x1DA(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D68[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          ClearColor;                                        // 0x1DC(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig)
	bool                                         EnableGenMips;                                     // 0x1EC(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        NumMips;                                           // 0x1ED(0x1)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         NewStyleOutput;                                    // 0x1EE(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EMediaTextureOutputFormat         OutputFormat;                                      // 0x1EF(0x1)(ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        CurrentAspectRatio;                                // 0x1F0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	enum class EMediaTextureOrientation          CurrentOrientation;                                // 0x1F4(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D6E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UMediaPlayer*                          MediaPlayer;                                       // 0x1F8(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_1D6F[0xC0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMediaTexture* GetDefaultObj();

	void UpdateResource();
	void SetMediaPlayer(class UMediaPlayer** NewMediaPlayer);
	void GetWidth(int32* ReturnValue);
	void GetTextureNumMips(int32* ReturnValue);
	void GetMediaPlayer(class UMediaPlayer** ReturnValue);
	void GetHeight(int32* ReturnValue);
	void GetAspectRatio(float* ReturnValue);
};

// 0x28 (0xB0 - 0x88)
// Class MediaAssets.FileMediaSource
class UFileMediaSource : public UBaseMediaSource
{
public:
	class FString                                FilePath;                                          // 0x88(0x10)(ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         PrecacheFile;                                      // 0x98(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_1D85[0x17];                                    // Fixing Size Of Struct > TateDumper <

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

	void GetMediaTexture(class UMediaTexture** ReturnValue);
	void GetMediaPlayer(class UMediaPlayer** ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class MediaAssets.MediaTimeStampInfo
class UMediaTimeStampInfo : public UObject
{
public:
	struct FTimespan                             Time;                                              // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int64                                        SequenceIndex;                                     // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMediaTimeStampInfo* GetDefaultObj();

};

// 0x128 (0x150 - 0x28)
// Class MediaAssets.MediaPlayer
class UMediaPlayer : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnEndReached;                                      // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMediaClosed;                                     // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMediaOpened;                                     // 0x48(0x10)(Edit, Net, GlobalConfig)
	FMulticastInlineDelegateProperty_            OnMediaOpenFailed;                                 // 0x58(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPlaybackResumed;                                 // 0x68(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPlaybackSuspended;                               // 0x78(0x10)(ConstParm, ExportObject, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSeekCompleted;                                   // 0x88(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnTracksChanged;                                   // 0x98(0x10)(Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMetadataChanged;                                 // 0xA8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTimespan                             CacheAhead;                                        // 0xB8(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTimespan                             CacheBehind;                                       // 0xC0(0x8)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FTimespan                             CacheBehindGame;                                   // 0xC8(0x8)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         NativeAudioOut;                                    // 0xD0(0x1)(ConstParm, BlueprintReadOnly, Net, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         PlayOnOpen;                                        // 0xD1(0x1)(Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E61[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        Shuffle : 1;                                       // Mask: 0x1, PropSize: 0x10xD4(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Loop : 1;                                          // Mask: 0x2, PropSize: 0x10xD4(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_12D : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1E62[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UMediaPlaylist*                        Playlist;                                          // 0xD8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	int32                                        PlaylistIndex;                                     // 0xE0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E64[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTimespan                             TimeDelay;                                         // 0xE8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst)
	float                                        HorizontalFieldOfView;                             // 0xF0(0x4)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        VerticalFieldOfView;                               // 0xF4(0x4)(Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FRotator                              ViewRotation;                                      // 0xF8(0x18)(Edit, ExportObject, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E6B[0x28];                                    // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 PlayerGuid;                                        // 0x138(0x10)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E6C[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMediaPlayer* GetDefaultObj();

	void SupportsSeeking(bool* ReturnValue);
	void SupportsScrubbing(bool* ReturnValue);
	float SupportsRate(bool* Unthinned, bool* ReturnValue);
	void SetViewRotation(struct FRotator* Rotation, bool Absolute, bool* ReturnValue);
	void SetViewField(float Horizontal, float Vertical, bool Absolute, bool* ReturnValue);
	float SetVideoTrackFrameRate(int32 TrackIndex, int32* FormatIndex, bool* ReturnValue);
	void SetTrackFormat(enum class EMediaPlayerTrack* TrackType, int32 TrackIndex, int32* FormatIndex, bool* ReturnValue);
	struct FTimespan SetTimeDelay();
	float SetRate(bool* ReturnValue);
	void SetNativeVolume(float* Volume, bool* ReturnValue);
	void SetMediaOptions(class UMediaSource** Options);
	bool SetLooping(bool* ReturnValue);
	void SetDesiredPlayerName(class FName* PlayerName);
	struct FTimespan SetBlockOnTime();
	void SelectTrack(enum class EMediaPlayerTrack* TrackType, int32 TrackIndex, bool* ReturnValue);
	struct FTimespan Seek(bool* ReturnValue);
	void Rewind(bool* ReturnValue);
	void Reopen(bool* ReturnValue);
	void Previous(bool* ReturnValue);
	void PlayAndSeek();
	void Play(bool* ReturnValue);
	void Pause(bool* ReturnValue);
	void OpenUrl(class FString* URL, bool* ReturnValue);
	class UMediaSource* OpenSourceWithOptions(struct FMediaPlayerOptions* Options, bool* ReturnValue);
	class UMediaSource* OpenSourceLatent(const struct FLatentActionInfo& LatentInfo, struct FMediaPlayerOptions* Options, bool* bSuccess);
	class UMediaSource* OpenSource(bool* ReturnValue);
	int32 OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, bool* ReturnValue);
	void OpenPlaylist(class UMediaPlaylist* InPlaylist, bool* ReturnValue);
	void OpenFile(class FString* FilePath, bool* ReturnValue);
	void Next(bool* ReturnValue);
	void IsReady(bool* ReturnValue);
	void IsPreparing(bool* ReturnValue);
	void IsPlaying(bool* ReturnValue);
	void IsPaused(bool* ReturnValue);
	void IsLooping(bool* ReturnValue);
	void IsConnecting(bool* ReturnValue);
	void IsClosed(bool* ReturnValue);
	void IsBuffering(bool* ReturnValue);
	void HasError(bool* ReturnValue);
	void GetViewRotation(struct FRotator* ReturnValue);
	void GetVideoTrackType(int32 TrackIndex, int32* FormatIndex, class FString* ReturnValue);
	void GetVideoTrackFrameRates(int32 TrackIndex, int32* FormatIndex, struct FFloatRange* ReturnValue);
	void GetVideoTrackFrameRate(int32 TrackIndex, int32* FormatIndex, float* ReturnValue);
	void GetVideoTrackDimensions(int32 TrackIndex, int32* FormatIndex, struct FIntPoint* ReturnValue);
	void GetVideoTrackAspectRatio(int32 TrackIndex, int32* FormatIndex, float* ReturnValue);
	void GetVerticalFieldOfView(float* ReturnValue);
	void GetUrl(class FString* ReturnValue);
	void GetTrackLanguage(enum class EMediaPlayerTrack* TrackType, int32 TrackIndex, class FString* ReturnValue);
	void GetTrackFormat(enum class EMediaPlayerTrack* TrackType, int32 TrackIndex, int32* ReturnValue);
	void GetTrackDisplayName(enum class EMediaPlayerTrack* TrackType, int32 TrackIndex, class FText* ReturnValue);
	void GetTimeStamp(class UMediaTimeStampInfo** ReturnValue);
	void GetTimeDelay(struct FTimespan* ReturnValue);
	void GetTime(struct FTimespan* ReturnValue);
	void GetSupportedRates(const TArray<struct FFloatRange>& OutRates, bool* Unthinned);
	void GetSelectedTrack(enum class EMediaPlayerTrack* TrackType, int32* ReturnValue);
	void GetRate(float* ReturnValue);
	void GetPlaylistIndex(int32* ReturnValue);
	void GetPlaylist(class UMediaPlaylist** ReturnValue);
	void GetPlayerName(class FName* ReturnValue);
	void GetNumTracks(enum class EMediaPlayerTrack* TrackType, int32* ReturnValue);
	void GetNumTrackFormats(enum class EMediaPlayerTrack* TrackType, int32 TrackIndex, int32* ReturnValue);
	void GetMediaName(class FText* ReturnValue);
	void GetHorizontalFieldOfView(float* ReturnValue);
	void GetDuration(struct FTimespan* ReturnValue);
	void GetDesiredPlayerName(class FName* ReturnValue);
	void GetAudioTrackType(int32 TrackIndex, int32* FormatIndex, class FString* ReturnValue);
	void GetAudioTrackSampleRate(int32 TrackIndex, int32* FormatIndex, int32* ReturnValue);
	void GetAudioTrackChannels(int32 TrackIndex, int32* FormatIndex, int32* ReturnValue);
	void Close();
	void CanPlayUrl(class FString* URL, bool* ReturnValue);
	class UMediaSource* CanPlaySource(bool* ReturnValue);
	void CanPause(bool* ReturnValue);
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
	TArray<class UMediaSource*>                  Items;                                             // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMediaPlaylist* GetDefaultObj();

	class UMediaSource* Replace(bool* ReturnValue);
	int32 RemoveAt(bool* ReturnValue);
	class UMediaSource* Remove(bool* ReturnValue);
	void Num(int32* ReturnValue);
	int32 Insert();
	void GetRandom(int32 OutIndex, class UMediaSource** ReturnValue);
	void GetPrevious(int32 InOutIndex, class UMediaSource** ReturnValue);
	void GetNext(int32 InOutIndex, class UMediaSource** ReturnValue);
	int32 Get(class UMediaSource** ReturnValue);
	void AddUrl(class FString* URL, bool* ReturnValue);
	void AddFile(class FString* FilePath, bool* ReturnValue);
	class UMediaSource* Add(bool* ReturnValue);
};

// 0xE0 (0x8A0 - 0x7C0)
// Class MediaAssets.MediaSoundComponent
class UMediaSoundComponent : public USynthComponent
{
public:
	enum class EMediaSoundChannels               Channels;                                          // 0x7C0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DynamicRateAdjustment;                             // 0x7C4(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EB1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RateAdjustmentFactor;                              // 0x7C8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	struct FFloatRange                           RateAdjustmentRange;                               // 0x7CC(0x10)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EB2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMediaPlayer*                          MediaPlayer;                                       // 0x7E0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_1EB3[0xB8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMediaSoundComponent* GetDefaultObj();

	void SetSpectralAnalysisSettings(const TArray<float>& InFrequenciesToAnalyze, enum class EMediaSoundComponentFFTSize InFFTSize);
	void SetMediaPlayer(class UMediaPlayer** NewMediaPlayer);
	void SetEnvelopeFollowingsettings(int32* AttackTimeMsec, int32* ReleaseTimeMsec);
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);
	void GetSpectralData(TArray<struct FMediaSoundComponentSpectralData>* ReturnValue);
	void GetNormalizedSpectralData(TArray<struct FMediaSoundComponentSpectralData>* ReturnValue);
	void GetMediaPlayer(class UMediaPlayer** ReturnValue);
	void GetEnvelopeValue(float* ReturnValue);
	void BP_GetAttenuationSettingsToApply(const struct FSoundAttenuationSettings& OutAttenuationSettings, bool* ReturnValue);
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
	class FString                                StreamUrl;                                         // 0x88(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UStreamMediaSource* GetDefaultObj();

};

// 0x18 (0xA0 - 0x88)
// Class MediaAssets.TimeSynchronizableMediaSource
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{
public:
	bool                                         bUseTimeSynchronization;                           // 0x88(0x1)(Edit, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EB7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        FrameDelay;                                        // 0x8C(0x4)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst)
	double                                       TimeDelay;                                         // 0x90(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst)
	bool                                         bAutoDetectInput;                                  // 0x98(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1EB9[0x7];                                     // Fixing Size Of Struct > TateDumper <

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

	void EnumerateWebcamCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32* Filter);
	void EnumerateVideoCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32* Filter);
	void EnumerateAudioCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32* Filter);
};

}


