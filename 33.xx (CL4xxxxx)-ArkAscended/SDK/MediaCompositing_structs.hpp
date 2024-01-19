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
	class UMediaSource*                          MediaSource;                                       // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FFrameNumber                          SectionStartFrame;                                 // 0x40(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bLoop;                                             // 0x44(0x1)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2381[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x160 (0x160 - 0x0)
// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
struct FMovieSceneMediaSectionParams
{
public:
	class UMediaSoundComponent*                  MediaSoundComponent;                               // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class UMediaSource*                          MediaSource;                                       // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FMovieSceneObjectBindingID            MediaSourceProxy;                                  // 0x10(0x18)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        MediaSourceProxyIndex;                             // 0x28(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2383[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UMediaTexture*                         MediaTexture;                                      // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, Transient, InstancedReference, DuplicateTransient)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x38(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference)
	struct FFrameNumber                          SectionStartFrame;                                 // 0x40(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FFrameNumber                          SectionEndFrame;                                   // 0x44(0x4)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         bLooping;                                          // 0x48(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst)
	uint8                                        Pad_2384[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFrameNumber                          StartFrameOffset;                                  // 0x4C(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, Config, InstancedReference, SubobjectReference)
	struct FMovieSceneFloatChannel               ProxyTextureBlend;                                 // 0x50(0x110)(Edit, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x168 (0x188 - 0x20)
// ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneMediaSectionParams         Params;                                            // 0x20(0x160)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	class UMovieSceneMediaSection*               MediaSection;                                      // 0x180(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
};

}


