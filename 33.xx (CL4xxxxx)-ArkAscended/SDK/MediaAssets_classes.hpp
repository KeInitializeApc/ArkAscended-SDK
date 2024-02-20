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
	uint8                                        Pad_1660[0x58];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMediaSource* GetDefaultObj();

	void Validate(bool ReturnValue);
	class FName SetMediaOptionString(class FString* Value);
	class FName SetMediaOptionInt64(int64* Value);
	class FName SetMediaOptionFloat(float* Value);
	class FName SetMediaOptionBool(bool* Value);
	void GetUrl(const class FString& ReturnValue);
};

// 0x8 (0x88 - 0x80)
// Class MediaAssets.BaseMediaSource
class UBaseMediaSource : public UMediaSource
{
public:
	class FName                                  PlayerName;                                        // 0x80(0x8)(ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

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
	enum class ETextureAddress                   AddressX;                                          // 0x1D8(0x1)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, DuplicateTransient)
	enum class ETextureAddress                   AddressY;                                          // 0x1D9(0x1)(BlueprintVisible, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         AutoClear;                                         // 0x1DA(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1682[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          ClearColor;                                        // 0x1DC(0x10)(ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, GlobalConfig)
	bool                                         EnableGenMips;                                     // 0x1EC(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        NumMips;                                           // 0x1ED(0x1)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         NewStyleOutput;                                    // 0x1EE(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EMediaTextureOutputFormat         OutputFormat;                                      // 0x1EF(0x1)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CurrentAspectRatio;                                // 0x1F0(0x4)(Edit, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	enum class EMediaTextureOrientation          CurrentOrientation;                                // 0x1F4(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1687[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UMediaPlayer*                          MediaPlayer;                                       // 0x1F8(0x8)(Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference)
	uint8                                        Pad_1689[0xC0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMediaTexture* GetDefaultObj();

	void UpdateResource();
	class UMediaPlayer* SetMediaPlayer();
	void GetWidth(int32 ReturnValue);
	void GetTextureNumMips(int32 ReturnValue);
	void GetMediaPlayer(class UMediaPlayer* ReturnValue);
	void GetHeight(int32 ReturnValue);
	void GetAspectRatio(float ReturnValue);
};

// 0x28 (0xB0 - 0x88)
// Class MediaAssets.FileMediaSource
class UFileMediaSource : public UBaseMediaSource
{
public:
	class FString                                FilePath;                                          // 0x88(0x10)(Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         PrecacheFile;                                      // 0x98(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	uint8                                        Pad_1691[0x17];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UFileMediaSource* GetDefaultObj();

	void SetFilePath(class FString* Path);
};

// 0x10 (0xC8 - 0xB8)
// Class MediaAssets.MediaComponent
class UMediaComponent : public UActorComponent
{
public:
	class UMediaTexture*                         MediaTexture;                                      // 0xB8(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	class UMediaPlayer*                          MediaPlayer;                                       // 0xC0(0x8)(Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference)

	static class UClass* StaticClass();
	static class UMediaComponent* GetDefaultObj();

	void GetMediaTexture(class UMediaTexture* ReturnValue);
	void GetMediaPlayer(class UMediaPlayer* ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class MediaAssets.MediaTimeStampInfo
class UMediaTimeStampInfo : public UObject
{
public:
	struct FTimespan                             Time;                                              // 0x28(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	int64                                        SequenceIndex;                                     // 0x30(0x8)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMediaTimeStampInfo* GetDefaultObj();

};

// 0x128 (0x150 - 0x28)
// Class MediaAssets.MediaPlayer
class UMediaPlayer : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnEndReached;                                      // 0x28(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMediaClosed;                                     // 0x38(0x10)(Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMediaOpened;                                     // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnMediaOpenFailed;                                 // 0x58(0x10)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPlaybackResumed;                                 // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPlaybackSuspended;                               // 0x78(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSeekCompleted;                                   // 0x88(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnTracksChanged;                                   // 0x98(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMetadataChanged;                                 // 0xA8(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FTimespan                             CacheAhead;                                        // 0xB8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FTimespan                             CacheBehind;                                       // 0xC0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FTimespan                             CacheBehindGame;                                   // 0xC8(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         NativeAudioOut;                                    // 0xD0(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         PlayOnOpen;                                        // 0xD1(0x1)(Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1784[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        Shuffle : 1;                                       // Mask: 0x1, PropSize: 0x10xD4(0x1)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Loop : 1;                                          // Mask: 0x2, PropSize: 0x10xD4(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_CE : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1786[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UMediaPlaylist*                        Playlist;                                          // 0xD8(0x8)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        PlaylistIndex;                                     // 0xE0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1787[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTimespan                             TimeDelay;                                         // 0xE8(0x8)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	float                                        HorizontalFieldOfView;                             // 0xF0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        VerticalFieldOfView;                               // 0xF4(0x4)(BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FRotator                              ViewRotation;                                      // 0xF8(0x18)(Edit, ExportObject, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1788[0x28];                                    // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 PlayerGuid;                                        // 0x138(0x10)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1789[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMediaPlayer* GetDefaultObj();

	void SupportsSeeking(bool ReturnValue);
	void SupportsScrubbing(bool ReturnValue);
	bool SupportsRate(bool ReturnValue);
	bool SetViewRotation(struct FRotator* Rotation, bool ReturnValue);
	bool SetViewField(bool ReturnValue);
	float SetVideoTrackFrameRate(bool ReturnValue);
	int32 SetTrackFormat(bool ReturnValue);
	struct FTimespan SetTimeDelay();
	float SetRate(bool ReturnValue);
	float SetNativeVolume(bool ReturnValue);
	class UMediaSource* SetMediaOptions();
	void SetLooping(bool* Looping, bool ReturnValue);
	class FName SetDesiredPlayerName();
	struct FTimespan SetBlockOnTime();
	int32 SelectTrack(bool ReturnValue);
	struct FTimespan Seek(bool ReturnValue);
	void Rewind(bool ReturnValue);
	void Reopen(bool ReturnValue);
	void Previous(bool ReturnValue);
	void PlayAndSeek();
	void Play(bool ReturnValue);
	void Pause(bool ReturnValue);
	class FString OpenUrl(bool ReturnValue);
	struct FMediaPlayerOptions OpenSourceWithOptions(bool ReturnValue);
	bool OpenSourceLatent();
	class UMediaSource* OpenSource(bool ReturnValue);
	class UMediaPlaylist* OpenPlaylistIndex(int32* Index, bool ReturnValue);
	class UMediaPlaylist* OpenPlaylist(bool ReturnValue);
	class FString OpenFile(bool ReturnValue);
	void Next(bool ReturnValue);
	void IsReady(bool ReturnValue);
	void IsPreparing(bool ReturnValue);
	void IsPlaying(bool ReturnValue);
	void IsPaused(bool ReturnValue);
	void IsLooping(bool ReturnValue);
	void IsConnecting(bool ReturnValue);
	void IsClosed(bool ReturnValue);
	void IsBuffering(bool ReturnValue);
	void HasError(bool ReturnValue);
	void GetViewRotation(const struct FRotator& ReturnValue);
	int32 GetVideoTrackType(const class FString& ReturnValue);
	int32 GetVideoTrackFrameRates(const struct FFloatRange& ReturnValue);
	int32 GetVideoTrackFrameRate(float ReturnValue);
	int32 GetVideoTrackDimensions(const struct FIntPoint& ReturnValue);
	int32 GetVideoTrackAspectRatio(float ReturnValue);
	void GetVerticalFieldOfView(float ReturnValue);
	void GetUrl(const class FString& ReturnValue);
	int32 GetTrackLanguage(const class FString& ReturnValue);
	int32 GetTrackFormat(int32 ReturnValue);
	int32 GetTrackDisplayName(class FText ReturnValue);
	void GetTimeStamp(class UMediaTimeStampInfo* ReturnValue);
	void GetTimeDelay(const struct FTimespan& ReturnValue);
	void GetTime(const struct FTimespan& ReturnValue);
	bool GetSupportedRates();
	enum class EMediaPlayerTrack GetSelectedTrack(int32 ReturnValue);
	void GetRate(float ReturnValue);
	void GetPlaylistIndex(int32 ReturnValue);
	void GetPlaylist(class UMediaPlaylist* ReturnValue);
	void GetPlayerName(class FName ReturnValue);
	enum class EMediaPlayerTrack GetNumTracks(int32 ReturnValue);
	int32 GetNumTrackFormats(int32 ReturnValue);
	void GetMediaName(class FText ReturnValue);
	void GetHorizontalFieldOfView(float ReturnValue);
	void GetDuration(const struct FTimespan& ReturnValue);
	void GetDesiredPlayerName(class FName ReturnValue);
	int32 GetAudioTrackType(const class FString& ReturnValue);
	int32 GetAudioTrackSampleRate(int32 ReturnValue);
	int32 GetAudioTrackChannels(int32 ReturnValue);
	void Close();
	class FString CanPlayUrl(bool ReturnValue);
	class UMediaSource* CanPlaySource(bool ReturnValue);
	void CanPause(bool ReturnValue);
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
	TArray<class UMediaSource*>                  Items;                                             // 0x28(0x10)(ExportObject, BlueprintReadOnly, Net, OutParm, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UMediaPlaylist* GetDefaultObj();

	class UMediaSource* Replace(int32* Index, bool ReturnValue);
	void RemoveAt(int32* Index, bool ReturnValue);
	class UMediaSource* Remove(bool ReturnValue);
	void Num(int32 ReturnValue);
	class UMediaSource* Insert(int32* Index);
	int32 GetRandom(class UMediaSource* ReturnValue);
	int32 GetPrevious(class UMediaSource* ReturnValue);
	int32 GetNext(class UMediaSource* ReturnValue);
	void Get(int32* Index, class UMediaSource* ReturnValue);
	class FString AddUrl(bool ReturnValue);
	class FString AddFile(bool ReturnValue);
	class UMediaSource* Add(bool ReturnValue);
};

// 0xE0 (0x8A0 - 0x7C0)
// Class MediaAssets.MediaSoundComponent
class UMediaSoundComponent : public USynthComponent
{
public:
	enum class EMediaSoundChannels               Channels;                                          // 0x7C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         DynamicRateAdjustment;                             // 0x7C4(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17C9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RateAdjustmentFactor;                              // 0x7C8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FFloatRange                           RateAdjustmentRange;                               // 0x7CC(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17CA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMediaPlayer*                          MediaPlayer;                                       // 0x7E0(0x8)(Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference)
	uint8                                        Pad_17CB[0xB8];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMediaSoundComponent* GetDefaultObj();

	enum class EMediaSoundComponentFFTSize SetSpectralAnalysisSettings();
	class UMediaPlayer* SetMediaPlayer();
	int32 SetEnvelopeFollowingsettings();
	bool SetEnableSpectralAnalysis();
	bool SetEnableEnvelopeFollowing();
	void GetSpectralData(const TArray<struct FMediaSoundComponentSpectralData>& ReturnValue);
	void GetNormalizedSpectralData(const TArray<struct FMediaSoundComponentSpectralData>& ReturnValue);
	void GetMediaPlayer(class UMediaPlayer* ReturnValue);
	void GetEnvelopeValue(float ReturnValue);
	struct FSoundAttenuationSettings BP_GetAttenuationSettingsToApply(bool ReturnValue);
};

// 0x8 (0x88 - 0x80)
// Class MediaAssets.PlatformMediaSource
class UPlatformMediaSource : public UMediaSource
{
public:
	class UMediaSource*                          MediaSource;                                       // 0x80(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class UPlatformMediaSource* GetDefaultObj();

};

// 0x10 (0x98 - 0x88)
// Class MediaAssets.StreamMediaSource
class UStreamMediaSource : public UBaseMediaSource
{
public:
	class FString                                StreamUrl;                                         // 0x88(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UStreamMediaSource* GetDefaultObj();

};

// 0x18 (0xA0 - 0x88)
// Class MediaAssets.TimeSynchronizableMediaSource
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{
public:
	bool                                         bUseTimeSynchronization;                           // 0x88(0x1)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17D4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        FrameDelay;                                        // 0x8C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	double                                       TimeDelay;                                         // 0x90(0x8)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	bool                                         bAutoDetectInput;                                  // 0x98(0x1)(BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_17D5[0x7];                                     // Fixing Size Of Struct > TateDumper <

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


