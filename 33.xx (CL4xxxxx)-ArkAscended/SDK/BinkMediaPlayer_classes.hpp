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

	void BinkLoadingMovie_GetTime(struct FTimespan* ReturnValue);
	void BinkLoadingMovie_GetDuration(struct FTimespan* ReturnValue);
	void Bink_DrawOverlays();
};

// 0xF0 (0x118 - 0x28)
// Class BinkMediaPlayer.BinkMediaPlayer
class UBinkMediaPlayer : public UObject
{
public:
	uint8                                        Pad_172[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnMediaClosed;                                     // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMediaOpened;                                     // 0x40(0x10)(Edit, Net, GlobalConfig)
	FMulticastInlineDelegateProperty_            OnMediaReachedEnd;                                 // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPlaybackSuspended;                               // 0x60(0x10)(ConstParm, ExportObject, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Looping : 1;                                       // Mask: 0x1, PropSize: 0x10x70(0x1)(Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance)
	uint8                                        StartImmediately : 1;                              // Mask: 0x2, PropSize: 0x10x70(0x1)(Edit, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        DelayedOpen : 1;                                   // Mask: 0x4, PropSize: 0x10x70(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_10 : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_175[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             BinkDestinationUpperLeft;                          // 0x78(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector2D                             BinkDestinationLowerRight;                         // 0x88(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                URL;                                               // 0x98(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, EditConst)
	enum class EBinkMediaPlayerBinkBufferModes   BinkBufferMode;                                    // 0xA8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EBinkMediaPlayerBinkSoundTrack    BinkSoundTrack;                                    // 0xA9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_178[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        BinkSoundTrackStart;                               // 0xAC(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EBinkMediaPlayerBinkDrawStyle     BinkDrawStyle;                                     // 0xB0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_179[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        BinkLayerDepth;                                    // 0xB4(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        VolumeScale;                                       // 0xB8(0x4)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_17A[0x5C];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBinkMediaPlayer* GetDefaultObj();

	void SupportsSeeking(bool* ReturnValue);
	void SupportsScrubbing(bool* ReturnValue);
	float SupportsRate(bool* Unthinned, bool* ReturnValue);
	void Stop();
	float SetVolume();
	float SetRate(bool* ReturnValue);
	bool SetLooping(bool* ReturnValue);
	struct FTimespan Seek(bool* ReturnValue);
	void Rewind(bool* ReturnValue);
	void Play(bool* ReturnValue);
	void Pause(bool* ReturnValue);
	void OpenUrl(class FString* NewUrl, bool* ReturnValue);
	void IsStopped(bool* ReturnValue);
	void IsPlaying(bool* ReturnValue);
	void IsPaused(bool* ReturnValue);
	void IsLooping(bool* ReturnValue);
	void IsInitialized(bool* ReturnValue);
	void GetUrl(class FString* ReturnValue);
	void GetTime(struct FTimespan* ReturnValue);
	void GetRate(float* ReturnValue);
	void GetDuration(struct FTimespan* ReturnValue);
	float Draw(bool* Tonemap, int32* Out_nits, bool* Srgb_decode, bool* Hdr);
	void CloseUrl();
	void CanPlay(bool* ReturnValue);
	void CanPause(bool* ReturnValue);
};

// 0x38 (0x210 - 0x1D8)
// Class BinkMediaPlayer.BinkMediaTexture
class UBinkMediaTexture : public UTexture
{
public:
	enum class ETextureAddress                   AddressX;                                          // 0x1D8(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	enum class ETextureAddress                   AddressY;                                          // 0x1D9(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_183[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UBinkMediaPlayer*                      MediaPlayer;                                       // 0x1E0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	enum class EPixelFormat                      PixelFormat;                                       // 0x1E8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         Tonemap;                                           // 0x1E9(0x1)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_185[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        OutputNits;                                        // 0x1EC(0x4)(ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Alpha;                                             // 0x1F0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DecodeSRGB;                                        // 0x1F4(0x1)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_187[0x1B];                                     // Fixing Size Of Struct > TateDumper <

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
	enum class EBinkMoviePlayerBinkBufferModes   BinkBufferMode;                                    // 0x28(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EBinkMoviePlayerBinkSoundTrack    BinkSoundTrack;                                    // 0x29(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_18B[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        BinkSoundTrackStart;                               // 0x2C(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector2D                             BinkDestinationUpperLeft;                          // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector2D                             BinkDestinationLowerRight;                         // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EPixelFormat                      BinkPixelFormat;                                   // 0x50(0x1)(Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_18C[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBinkMoviePlayerSettings* GetDefaultObj();

};

}


