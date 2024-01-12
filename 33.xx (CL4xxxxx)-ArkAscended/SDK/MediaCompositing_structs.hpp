#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x48 - 0x38)
// ScriptStruct MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
struct FMovieSceneMediaPlayerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	class UMediaSource*                          MediaSource;                                       // 0x38(0x8)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	struct FFrameNumber                          SectionStartFrame;                                 // 0x40(0x4)(ConstParm, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bLoop;                                             // 0x44(0x1)(BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_24E5[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x160 (0x160 - 0x0)
// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
struct FMovieSceneMediaSectionParams
{
public:
	class UMediaSoundComponent*                  MediaSoundComponent;                               // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	class UMediaSource*                          MediaSource;                                       // 0x8(0x8)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	struct FMovieSceneObjectBindingID            MediaSourceProxy;                                  // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        MediaSourceProxyIndex;                             // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_24E7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMediaTexture*                         MediaTexture;                                      // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	struct FFrameNumber                          SectionStartFrame;                                 // 0x40(0x4)(ConstParm, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FFrameNumber                          SectionEndFrame;                                   // 0x44(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bLooping;                                          // 0x48(0x1)(Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_24E9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFrameNumber                          StartFrameOffset;                                  // 0x4C(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FMovieSceneFloatChannel               ProxyTextureBlend;                                 // 0x50(0x110)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x168 (0x188 - 0x20)
// ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneMediaSectionParams         Params;                                            // 0x20(0x160)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	class UMovieSceneMediaSection*               MediaSection;                                      // 0x180(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
};

}


