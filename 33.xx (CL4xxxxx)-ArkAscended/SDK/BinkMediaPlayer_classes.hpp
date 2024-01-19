#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class BinkMediaPlayer.BinkFunctionLibrary
class UBinkFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBinkFunctionLibrary* GetDefaultObj();

	void BinkLoadingMovie_GetTime(const struct FTimespan& ReturnValue);
	void BinkLoadingMovie_GetDuration(const struct FTimespan& ReturnValue);
	void Bink_DrawOverlays();
};

// 0xF0 (0x118 - 0x28)
// Class BinkMediaPlayer.BinkMediaPlayer
class UBinkMediaPlayer : public UObject
{
public:
	uint8                                        Pad_11A[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnMediaClosed;                                     // 0x30(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMediaOpened;                                     // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMediaReachedEnd;                                 // 0x50(0x10)(ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPlaybackSuspended;                               // 0x60(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Looping : 1;                                       // Mask: 0x1, PropSize: 0x10x70(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, EditConst, GlobalConfig, InstancedReference)
	uint8                                        StartImmediately : 1;                              // Mask: 0x2, PropSize: 0x10x70(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        DelayedOpen : 1;                                   // Mask: 0x4, PropSize: 0x10x70(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_1 : 5;                                      // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_11C[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             BinkDestinationUpperLeft;                          // 0x78(0x10)(EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector2D                             BinkDestinationLowerRight;                         // 0x88(0x10)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                URL;                                               // 0x98(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, EditConst)
	enum class EBinkMediaPlayerBinkBufferModes   BinkBufferMode;                                    // 0xA8(0x1)(ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EBinkMediaPlayerBinkSoundTrack    BinkSoundTrack;                                    // 0xA9(0x1)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_11D[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        BinkSoundTrackStart;                               // 0xAC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EBinkMediaPlayerBinkDrawStyle     BinkDrawStyle;                                     // 0xB0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_11E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        BinkLayerDepth;                                    // 0xB4(0x4)(Edit, ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        VolumeScale;                                       // 0xB8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_11F[0x5C];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBinkMediaPlayer* GetDefaultObj();

	void SupportsSeeking(bool ReturnValue);
	void SupportsScrubbing(bool ReturnValue);
	bool SupportsRate(bool ReturnValue);
	void Stop();
	float SetVolume();
	float SetRate(bool ReturnValue);
	void SetLooping(bool* InLooping, bool ReturnValue);
	void Seek(struct FTimespan* InTime, bool ReturnValue);
	void Rewind(bool ReturnValue);
	void Play(bool ReturnValue);
	void Pause(bool ReturnValue);
	void OpenUrl(class FString* NewUrl, bool ReturnValue);
	void IsStopped(bool ReturnValue);
	void IsPlaying(bool ReturnValue);
	void IsPaused(bool ReturnValue);
	void IsLooping(bool ReturnValue);
	void IsInitialized(bool ReturnValue);
	void GetUrl(const class FString& ReturnValue);
	void GetTime(const struct FTimespan& ReturnValue);
	void GetRate(float ReturnValue);
	void GetDuration(const struct FTimespan& ReturnValue);
	class UTexture* Draw(bool* Tonemap, int32* Out_nits, float* Alpha, bool* Srgb_decode, bool* Hdr);
	void CloseUrl();
	void CanPlay(bool ReturnValue);
	void CanPause(bool ReturnValue);
};

// 0x38 (0x210 - 0x1D8)
// Class BinkMediaPlayer.BinkMediaTexture
class UBinkMediaTexture : public UTexture
{
public:
	enum class ETextureAddress                   AddressX;                                          // 0x1D8(0x1)(Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, DuplicateTransient)
	enum class ETextureAddress                   AddressY;                                          // 0x1D9(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_121[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UBinkMediaPlayer*                      MediaPlayer;                                       // 0x1E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference)
	enum class EPixelFormat                      PixelFormat;                                       // 0x1E8(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         Tonemap;                                           // 0x1E9(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_123[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        OutputNits;                                        // 0x1EC(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Alpha;                                             // 0x1F0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DecodeSRGB;                                        // 0x1F4(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_124[0x1B];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBinkMediaTexture* GetDefaultObj();

	class UBinkMediaPlayer* SetMediaPlayer();
	void Clear();
};

// 0x30 (0x58 - 0x28)
// Class BinkMediaPlayer.BinkMoviePlayerSettings
class UBinkMoviePlayerSettings : public UObject
{
public:
	enum class EBinkMoviePlayerBinkBufferModes   BinkBufferMode;                                    // 0x28(0x1)(ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EBinkMoviePlayerBinkSoundTrack    BinkSoundTrack;                                    // 0x29(0x1)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_126[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        BinkSoundTrackStart;                               // 0x2C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector2D                             BinkDestinationUpperLeft;                          // 0x30(0x10)(EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector2D                             BinkDestinationLowerRight;                         // 0x40(0x10)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EPixelFormat                      BinkPixelFormat;                                   // 0x50(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_127[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBinkMoviePlayerSettings* GetDefaultObj();

};

}


