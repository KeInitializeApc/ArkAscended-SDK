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
	struct FLiveLinkSubjectPreset                SubjectPreset;                                     // 0xF0(0x38)(ConstParm, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<bool>                                 ChannelMask;                                       // 0x128(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UMovieSceneLiveLinkSubSection*> SubSections;                                       // 0x138(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_2EE[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  SubjectName;                                       // 0x158(0x8)(Edit, Net, ReturnParm, DisableEditOnInstance, EditConst)
	struct FLiveLinkFrameData                    TemplateToPush;                                    // 0x160(0x90)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	struct FLiveLinkRefSkeleton                  RefSkeleton;                                       // 0x1F0(0x20)(ConstParm, Parm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	TArray<class FName>                          CurveNames;                                        // 0x210(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneFloatChannel>       PropertyFloatChannels;                             // 0x220(0x10)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneLiveLinkSection* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSection
class UMovieSceneLiveLinkSubSection : public UObject
{
public:
	struct FLiveLinkSubSectionData               SubSectionData;                                    // 0x28(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	class UClass*                                SubjectRole;                                       // 0x38(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
	uint8                                        Pad_2F6[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneLiveLinkSubSection* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
class UMovieSceneLiveLinkSubSectionAnimation : public UMovieSceneLiveLinkSubSection
{
public:
	uint8                                        Pad_2F9[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneLiveLinkSubSectionAnimation* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
class UMovieSceneLiveLinkSubSectionBasicRole : public UMovieSceneLiveLinkSubSection
{
public:
	uint8                                        Pad_2FA[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneLiveLinkSubSectionBasicRole* GetDefaultObj();

};

// 0x10 (0x60 - 0x50)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
class UMovieSceneLiveLinkSubSectionProperties : public UMovieSceneLiveLinkSubSection
{
public:
	uint8                                        Pad_2FE[0x10];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMovieSceneLiveLinkSubSectionProperties* GetDefaultObj();

};

// 0x10 (0xD8 - 0xC8)
// Class LiveLinkMovieScene.MovieSceneLiveLinkTrack
class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_301[0x8];                                      // Fixing Size After Last Property  > TateDumper <
	class UClass*                                TrackRole;                                         // 0xD0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMovieSceneLiveLinkTrack* GetDefaultObj();

};

}


