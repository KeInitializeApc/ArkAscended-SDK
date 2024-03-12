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
	uint8                                        Pad_11E[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            OnMediaClosed;                                     // 0x30(0x10)(BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnMediaOpened;                                     // 0x40(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig)
	FMulticastInlineDelegateProperty_            OnMediaReachedEnd;                                 // 0x50(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnPlaybackSuspended;                               // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Looping : 1;                                       // Mask: 0x1, PropSize: 0x10x70(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config)
	uint8                                        StartImmediately : 1;                              // Mask: 0x2, PropSize: 0x10x70(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        DelayedOpen : 1;                                   // Mask: 0x4, PropSize: 0x10x70(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        BitPad_0 : 5;                                      // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_125[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             BinkDestinationUpperLeft;                          // 0x78(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FVector2D                             BinkDestinationLowerRight;                         // 0x88(0x10)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	class FString                                URL;                                               // 0x98(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst)
	enum class EBinkMediaPlayerBinkBufferModes   BinkBufferMode;                                    // 0xA8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class EBinkMediaPlayerBinkSoundTrack    BinkSoundTrack;                                    // 0xA9(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_126[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        BinkSoundTrackStart;                               // 0xAC(0x4)(Edit, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class EBinkMediaPlayerBinkDrawStyle     BinkDrawStyle;                                     // 0xB0(0x1)(Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_128[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        BinkLayerDepth;                                    // 0xB4(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        VolumeScale;                                       // 0xB8(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_129[0x5C];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBinkMediaPlayer* GetDefaultObj();

	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float* Rate);
	void Stop();
	void SetVolume(float* Rate);
	bool SetRate(float* Rate);
	bool SetLooping(bool InLooping);
	bool Seek(const struct FTimespan& InTime);
	bool Rewind();
	bool Play();
	bool Pause();
	bool OpenUrl();
	bool IsStopped();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	bool IsInitialized();
	class FString GetUrl();
	struct FTimespan GetTime();
	float GetRate();
	struct FTimespan GetDuration();
	bool Draw(float Alpha);
	void CloseUrl();
	bool CanPlay();
	bool CanPause();
};

// 0x38 (0x210 - 0x1D8)
// Class BinkMediaPlayer.BinkMediaTexture
class UBinkMediaTexture : public UTexture
{
public:
	enum class ETextureAddress                   AddressX;                                          // 0x1D8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, GlobalConfig, DuplicateTransient)
	enum class ETextureAddress                   AddressY;                                          // 0x1D9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
	uint8                                        Pad_12F[0x6];                                      // Fixing Size After Last Property  > TateDumper <
	class UBinkMediaPlayer*                      MediaPlayer;                                       // 0x1E0(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	enum class EPixelFormat                      PixelFormat;                                       // 0x1E8(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         Tonemap;                                           // 0x1E9(0x1)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_131[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        OutputNits;                                        // 0x1EC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	float                                        Alpha;                                             // 0x1F0(0x4)(Edit, BlueprintVisible, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DecodeSRGB;                                        // 0x1F4(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_133[0x1B];                                     // Fixing Size Of Struct > TateDumper <

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
	enum class EBinkMoviePlayerBinkBufferModes   BinkBufferMode;                                    // 0x28(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class EBinkMoviePlayerBinkSoundTrack    BinkSoundTrack;                                    // 0x29(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_138[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        BinkSoundTrackStart;                               // 0x2C(0x4)(Edit, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FVector2D                             BinkDestinationUpperLeft;                          // 0x30(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FVector2D                             BinkDestinationLowerRight;                         // 0x40(0x10)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class EPixelFormat                      BinkPixelFormat;                                   // 0x50(0x1)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_13B[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBinkMoviePlayerSettings* GetDefaultObj();

};

}


