#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x230 - 0xF0)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSection
class UMovieSceneLiveLinkSection : public UMovieSceneSection
{
public:
	struct FLiveLinkSubjectPreset                SubjectPreset;                                     // 0xF0(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<bool>                                 ChannelMask;                                       // 0x128(0x10)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UMovieSceneLiveLinkSubSection*> SubSections;                                       // 0x138(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1172[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	class FName                                  SubjectName;                                       // 0x158(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	struct FLiveLinkFrameData                    TemplateToPush;                                    // 0x160(0x90)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FLiveLinkRefSkeleton                  RefSkeleton;                                       // 0x1F0(0x20)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	TArray<class FName>                          CurveNames;                                        // 0x210(0x10)(EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneFloatChannel>       PropertyFloatChannels;                             // 0x220(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneLiveLinkSection* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSection
class UMovieSceneLiveLinkSubSection : public UObject
{
public:
	struct FLiveLinkSubSectionData               SubSectionData;                                    // 0x28(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UClass*                                SubjectRole;                                       // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_117F[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneLiveLinkSubSection* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
class UMovieSceneLiveLinkSubSectionAnimation : public UMovieSceneLiveLinkSubSection
{
public:
	uint8                                        Pad_1181[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneLiveLinkSubSectionAnimation* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
class UMovieSceneLiveLinkSubSectionBasicRole : public UMovieSceneLiveLinkSubSection
{
public:
	uint8                                        Pad_1187[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneLiveLinkSubSectionBasicRole* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
class UMovieSceneLiveLinkSubSectionProperties : public UMovieSceneLiveLinkSubSection
{
public:
	uint8                                        Pad_118C[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneLiveLinkSubSectionProperties* GetDefaultObj();

};

// 0x10 (0xD8 - 0xC8)
// Class LiveLinkMovieScene.MovieSceneLiveLinkTrack
class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_1190[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                TrackRole;                                         // 0xD0(0x8)(BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneLiveLinkTrack* GetDefaultObj();

};

}


