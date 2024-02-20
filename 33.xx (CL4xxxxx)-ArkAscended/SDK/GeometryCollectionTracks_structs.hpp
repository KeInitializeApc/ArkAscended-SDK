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
	uint8                                        Pad_154B[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSoftObjectPath                       GeometryCollectionCache;                           // 0x8(0x20)(BlueprintVisible, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	struct FFrameNumber                          StartFrameOffset;                                  // 0x28(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          EndFrameOffset;                                    // 0x2C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PlayRate;                                          // 0x30(0x4)(Edit, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_154D[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x40 - 0x38)
// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
struct FMovieSceneGeometryCollectionSectionTemplateParameters : public FMovieSceneGeometryCollectionParams
{
public:
	struct FFrameNumber                          SectionStartTime;                                  // 0x38(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          SectionEndTime;                                    // 0x3C(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x60 - 0x20)
// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
struct FMovieSceneGeometryCollectionSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneGeometryCollectionSectionTemplateParameters Params;                                            // 0x20(0x40)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

}


