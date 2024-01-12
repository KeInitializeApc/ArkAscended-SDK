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
	class FName                                  PropertyName;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<struct FMovieSceneFloatChannel>       FloatChannel;                                      // 0x8(0x10)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneStringChannel>      StringChannel;                                     // 0x18(0x10)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FMovieSceneIntegerChannel>     IntegerChannel;                                    // 0x28(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneBoolChannel>        BoolChannel;                                       // 0x38(0x10)(Edit, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMovieSceneByteChannel>        ByteChannel;                                       // 0x48(0x10)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LiveLinkMovieScene.LiveLinkSubSectionData
struct FLiveLinkSubSectionData
{
public:
	TArray<struct FLiveLinkPropertyData>         Properties;                                        // 0x0(0x10)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x80 (0xB8 - 0x38)
// ScriptStruct LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
struct FMovieSceneLiveLinkSectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FLiveLinkSubjectPreset                SubjectPreset;                                     // 0x38(0x38)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<bool>                                 ChannelMask;                                       // 0x70(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	TArray<struct FLiveLinkSubSectionData>       SubSectionsData;                                   // 0x80(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_58D[0x28];                                     // Fixing Size Of Struct > TateDumper <
};

}


