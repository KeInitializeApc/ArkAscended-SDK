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
	class UMediaSource*                          MediaSource;                                       // 0x38(0x8)(BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, GlobalConfig)
	struct FFrameNumber                          SectionStartFrame;                                 // 0x40(0x4)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLoop;                                             // 0x44(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AA4[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x160 (0x160 - 0x0)
// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
struct FMovieSceneMediaSectionParams
{
public:
	class UMediaSoundComponent*                  MediaSoundComponent;                               // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	class UMediaSource*                          MediaSource;                                       // 0x8(0x8)(BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, GlobalConfig)
	struct FMovieSceneObjectBindingID            MediaSourceProxy;                                  // 0x10(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MediaSourceProxyIndex;                             // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1AA8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMediaTexture*                         MediaTexture;                                      // 0x30(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x38(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
	struct FFrameNumber                          SectionStartFrame;                                 // 0x40(0x4)(ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          SectionEndFrame;                                   // 0x44(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLooping;                                          // 0x48(0x1)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_1AAB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFrameNumber                          StartFrameOffset;                                  // 0x4C(0x4)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneFloatChannel               ProxyTextureBlend;                                 // 0x50(0x110)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x168 (0x188 - 0x20)
// ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneMediaSectionParams         Params;                                            // 0x20(0x160)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UMovieSceneMediaSection*               MediaSection;                                      // 0x180(0x8)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


