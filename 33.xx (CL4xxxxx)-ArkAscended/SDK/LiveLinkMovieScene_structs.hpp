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

// 0x58 (0x58 - 0x0)
// ScriptStruct LiveLinkMovieScene.LiveLinkPropertyData
struct FLiveLinkPropertyData
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	TArray<struct FMovieSceneFloatChannel>       FloatChannel;                                      // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneStringChannel>      StringChannel;                                     // 0x18(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneIntegerChannel>     IntegerChannel;                                    // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneBoolChannel>        BoolChannel;                                       // 0x38(0x10)(BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneByteChannel>        ByteChannel;                                       // 0x48(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LiveLinkMovieScene.LiveLinkSubSectionData
struct FLiveLinkSubSectionData
{
public:
	TArray<struct FLiveLinkPropertyData>         Properties;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x80 (0xB8 - 0x38)
// ScriptStruct LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
struct FMovieSceneLiveLinkSectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FLiveLinkSubjectPreset                SubjectPreset;                                     // 0x38(0x38)(ConstParm, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<bool>                                 ChannelMask;                                       // 0x70(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLiveLinkSubSectionData>       SubSectionsData;                                   // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_307[0x28];                                     // Fixing Size Of Struct > TateDumper <
};

}


