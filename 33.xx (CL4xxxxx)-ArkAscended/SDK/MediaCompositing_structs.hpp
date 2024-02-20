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
	class UMediaSource*                          MediaSource;                                       // 0x38(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	struct FFrameNumber                          SectionStartFrame;                                 // 0x40(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLoop;                                             // 0x44(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_16DD[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x160 (0x160 - 0x0)
// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
struct FMovieSceneMediaSectionParams
{
public:
	class UMediaSoundComponent*                  MediaSoundComponent;                               // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class UMediaSource*                          MediaSource;                                       // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	struct FMovieSceneObjectBindingID            MediaSourceProxy;                                  // 0x10(0x18)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MediaSourceProxyIndex;                             // 0x28(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_16E3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMediaTexture*                         MediaTexture;                                      // 0x30(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, DuplicateTransient)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x38(0x8)(Edit, ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference)
	struct FFrameNumber                          SectionStartFrame;                                 // 0x40(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          SectionEndFrame;                                   // 0x44(0x4)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLooping;                                          // 0x48(0x1)(ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_16E8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFrameNumber                          StartFrameOffset;                                  // 0x4C(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FMovieSceneFloatChannel               ProxyTextureBlend;                                 // 0x50(0x110)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x168 (0x188 - 0x20)
// ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneMediaSectionParams         Params;                                            // 0x20(0x160)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UMovieSceneMediaSection*               MediaSection;                                      // 0x180(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

}


