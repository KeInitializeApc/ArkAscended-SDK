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
	uint8                                        Pad_1EF[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnMediaClosed;                                     // 0x30(0x10)(Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMediaOpened;                                     // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnMediaReachedEnd;                                 // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPlaybackSuspended;                               // 0x60(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Looping : 1;                                       // Mask: 0x1, PropSize: 0x10x70(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, GlobalConfig, InstancedReference)
	uint8                                        StartImmediately : 1;                              // Mask: 0x2, PropSize: 0x10x70(0x1)(Edit, ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        DelayedOpen : 1;                                   // Mask: 0x4, PropSize: 0x10x70(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        BitPad_14 : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1F6[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             BinkDestinationUpperLeft;                          // 0x78(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FVector2D                             BinkDestinationLowerRight;                         // 0x88(0x10)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class FString                                URL;                                               // 0x98(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, EditConst)
	enum class EBinkMediaPlayerBinkBufferModes   BinkBufferMode;                                    // 0xA8(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class EBinkMediaPlayerBinkSoundTrack    BinkSoundTrack;                                    // 0xA9(0x1)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FA[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        BinkSoundTrackStart;                               // 0xAC(0x4)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class EBinkMediaPlayerBinkDrawStyle     BinkDrawStyle;                                     // 0xB0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_1FC[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        BinkLayerDepth;                                    // 0xB4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        VolumeScale;                                       // 0xB8(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1FE[0x5C];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBinkMediaPlayer* GetDefaultObj();

	void SupportsSeeking(bool ReturnValue);
	void SupportsScrubbing(bool ReturnValue);
	bool SupportsRate(bool ReturnValue);
	void Stop();
	float SetVolume();
	float SetRate(bool ReturnValue);
	bool SetLooping(bool ReturnValue);
	struct FTimespan Seek(bool ReturnValue);
	void Rewind(bool ReturnValue);
	void Play(bool ReturnValue);
	void Pause(bool ReturnValue);
	class FString OpenUrl(bool ReturnValue);
	void IsStopped(bool ReturnValue);
	void IsPlaying(bool ReturnValue);
	void IsPaused(bool ReturnValue);
	void IsLooping(bool ReturnValue);
	void IsInitialized(bool ReturnValue);
	void GetUrl(const class FString& ReturnValue);
	void GetTime(const struct FTimespan& ReturnValue);
	void GetRate(float ReturnValue);
	void GetDuration(const struct FTimespan& ReturnValue);
	bool Draw(class UTexture** Texture, float Alpha);
	void CloseUrl();
	void CanPlay(bool ReturnValue);
	void CanPause(bool ReturnValue);
};

// 0x38 (0x210 - 0x1D8)
// Class BinkMediaPlayer.BinkMediaTexture
class UBinkMediaTexture : public UTexture
{
public:
	enum class ETextureAddress                   AddressX;                                          // 0x1D8(0x1)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, DuplicateTransient)
	enum class ETextureAddress                   AddressY;                                          // 0x1D9(0x1)(BlueprintVisible, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_227[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UBinkMediaPlayer*                      MediaPlayer;                                       // 0x1E0(0x8)(Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference)
	enum class EPixelFormat                      PixelFormat;                                       // 0x1E8(0x1)(Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         Tonemap;                                           // 0x1E9(0x1)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_22C[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        OutputNits;                                        // 0x1EC(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        Alpha;                                             // 0x1F0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DecodeSRGB;                                        // 0x1F4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_22D[0x1B];                                     // Fixing Size Of Struct > TateDumper <

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
	enum class EBinkMoviePlayerBinkBufferModes   BinkBufferMode;                                    // 0x28(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class EBinkMoviePlayerBinkSoundTrack    BinkSoundTrack;                                    // 0x29(0x1)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_22E[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        BinkSoundTrackStart;                               // 0x2C(0x4)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FVector2D                             BinkDestinationUpperLeft;                          // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FVector2D                             BinkDestinationLowerRight;                         // 0x40(0x10)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class EPixelFormat                      BinkPixelFormat;                                   // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_231[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBinkMoviePlayerSettings* GetDefaultObj();

};

}


