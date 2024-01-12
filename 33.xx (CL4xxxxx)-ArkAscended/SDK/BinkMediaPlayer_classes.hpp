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

	struct FTimespan BinkLoadingMovie_GetTime();
	struct FTimespan BinkLoadingMovie_GetDuration();
	void Bink_DrawOverlays();
};

// 0xF0 (0x118 - 0x28)
// Class BinkMediaPlayer.BinkMediaPlayer
class UBinkMediaPlayer : public UObject
{
public:
	uint8                                        Pad_246[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnMediaClosed;                                     // 0x30(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMediaOpened;                                     // 0x40(0x10)(Edit, Net, GlobalConfig)
	FMulticastInlineDelegateProperty_            OnMediaReachedEnd;                                 // 0x50(0x10)(Edit, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPlaybackSuspended;                               // 0x60(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Looping : 1;                                       // Mask: 0x1, PropSize: 0x10x70(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance)
	uint8                                        StartImmediately : 1;                              // Mask: 0x2, PropSize: 0x10x70(0x1)(Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        DelayedOpen : 1;                                   // Mask: 0x4, PropSize: 0x10x70(0x1)(ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_1E : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_248[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             BinkDestinationUpperLeft;                          // 0x78(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector2D                             BinkDestinationLowerRight;                         // 0x88(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                URL;                                               // 0x98(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, EditConst)
	enum class EBinkMediaPlayerBinkBufferModes   BinkBufferMode;                                    // 0xA8(0x1)(Edit, ConstParm, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EBinkMediaPlayerBinkSoundTrack    BinkSoundTrack;                                    // 0xA9(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_24A[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        BinkSoundTrackStart;                               // 0xAC(0x4)(BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EBinkMediaPlayerBinkDrawStyle     BinkDrawStyle;                                     // 0xB0(0x1)(ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_24B[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        BinkLayerDepth;                                    // 0xB4(0x4)(EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        VolumeScale;                                       // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_24D[0x5C];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBinkMediaPlayer* GetDefaultObj();

	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float Rate, bool Unthinned);
	void Stop();
	void SetVolume(float Rate);
	bool SetRate(float Rate);
	bool SetLooping(bool InLooping);
	bool Seek(const struct FTimespan& InTime);
	bool Rewind();
	bool Play();
	bool Pause();
	bool OpenUrl(const class FString& NewUrl);
	bool IsStopped();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	bool IsInitialized();
	class FString GetUrl();
	struct FTimespan GetTime();
	float GetRate();
	struct FTimespan GetDuration();
	class UTexture* Draw(bool Tonemap, int32 Out_nits, float Alpha, bool Srgb_decode, bool Hdr);
	void CloseUrl();
	bool CanPlay();
	bool CanPause();
};

// 0x38 (0x210 - 0x1D8)
// Class BinkMediaPlayer.BinkMediaTexture
class UBinkMediaTexture : public UTexture
{
public:
	enum class ETextureAddress                   AddressX;                                          // 0x1D8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	enum class ETextureAddress                   AddressY;                                          // 0x1D9(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_253[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UBinkMediaPlayer*                      MediaPlayer;                                       // 0x1E0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	enum class EPixelFormat                      PixelFormat;                                       // 0x1E8(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         Tonemap;                                           // 0x1E9(0x1)(Edit, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_254[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        OutputNits;                                        // 0x1EC(0x4)(BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        Alpha;                                             // 0x1F0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DecodeSRGB;                                        // 0x1F4(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_255[0x1B];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBinkMediaTexture* GetDefaultObj();

	void SetMediaPlayer(class UBinkMediaPlayer** InMediaPlayer);
	void Clear();
};

// 0x30 (0x58 - 0x28)
// Class BinkMediaPlayer.BinkMoviePlayerSettings
class UBinkMoviePlayerSettings : public UObject
{
public:
	enum class EBinkMoviePlayerBinkBufferModes   BinkBufferMode;                                    // 0x28(0x1)(Edit, ConstParm, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EBinkMoviePlayerBinkSoundTrack    BinkSoundTrack;                                    // 0x29(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_259[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        BinkSoundTrackStart;                               // 0x2C(0x4)(BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector2D                             BinkDestinationUpperLeft;                          // 0x30(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector2D                             BinkDestinationLowerRight;                         // 0x40(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	enum class EPixelFormat                      BinkPixelFormat;                                   // 0x50(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_25A[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBinkMoviePlayerSettings* GetDefaultObj();

};

}


