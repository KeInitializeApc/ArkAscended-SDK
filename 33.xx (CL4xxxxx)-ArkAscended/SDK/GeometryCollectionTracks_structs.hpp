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

// 0x38 (0x38 - 0x0)
// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionParams
struct FMovieSceneGeometryCollectionParams
{
public:
	uint8                                        Pad_2418[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSoftObjectPath                       GeometryCollectionCache;                           // 0x8(0x20)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	struct FFrameNumber                          StartFrameOffset;                                  // 0x28(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FFrameNumber                          EndFrameOffset;                                    // 0x2C(0x4)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        PlayRate;                                          // 0x30(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2419[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x40 - 0x38)
// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
struct FMovieSceneGeometryCollectionSectionTemplateParameters : public FMovieSceneGeometryCollectionParams
{
public:
	struct FFrameNumber                          SectionStartTime;                                  // 0x38(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FFrameNumber                          SectionEndTime;                                    // 0x3C(0x4)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x40 (0x60 - 0x20)
// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
struct FMovieSceneGeometryCollectionSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneGeometryCollectionSectionTemplateParameters Params;                                            // 0x20(0x40)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
};

}


