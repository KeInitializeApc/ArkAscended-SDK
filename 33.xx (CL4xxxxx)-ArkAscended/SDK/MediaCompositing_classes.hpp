#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x100 - 0xF0)
// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection
{
public:
	class UMediaSource*                          MediaSource;                                       // 0xF0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         bLoop;                                             // 0xF8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_16C4[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneMediaPlayerPropertySection* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack
class UMovieSceneMediaPlayerPropertyTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_16C8[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneMediaPlayerPropertyTrack* GetDefaultObj();

};

// 0x60 (0x150 - 0xF0)
// Class MediaCompositing.MovieSceneMediaSection
class UMovieSceneMediaSection : public UMovieSceneSection
{
public:
	class UMediaSource*                          MediaSource;                                       // 0xF0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	int32                                        MediaSourceProxyIndex;                             // 0xF8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLooping;                                          // 0xFC(0x1)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_16CD[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFrameNumber                          StartFrameOffset;                                  // 0x100(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_16D1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMediaTexture*                         MediaTexture;                                      // 0x108(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	class UMediaSoundComponent*                  MediaSoundComponent;                               // 0x110(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	bool                                         bUseExternalMediaPlayer;                           // 0x118(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_16D3[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UMediaPlayer*                          ExternalMediaPlayer;                               // 0x120(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FMediaSourceCacheSettings             CacheSettings;                                     // 0x128(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        TextureIndex;                                      // 0x130(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasMediaPlayerProxy;                              // 0x134(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_16D6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMovieSceneObjectBindingID            MediaSourceProxyBindingID;                         // 0x138(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneMediaSection* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class MediaCompositing.MovieSceneMediaTrack
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_16D8[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UMovieSceneSection*>            MediaSections;                                     // 0xA0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneMediaTrack* GetDefaultObj();

};

}


