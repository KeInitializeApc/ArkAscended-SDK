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

// 0x48 (0x48 - 0x0)
// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheParams
struct FMovieSceneGeometryCacheParams
{
public:
	class UGeometryCache*                        GeometryCacheAsset;                                // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          FirstLoopStartFrameOffset;                         // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          StartFrameOffset;                                  // 0xC(0x4)(Edit, BlueprintVisible, Net, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          EndFrameOffset;                                    // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        PlayRate;                                          // 0x14(0x4)(Edit, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_5C : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_7D8[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        StartOffset;                                       // 0x1C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        EndOffset;                                         // 0x20(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_7D9[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoftObjectPath                       GeometryCache;                                     // 0x28(0x20)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
};

// 0x8 (0x50 - 0x48)
// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
struct FMovieSceneGeometryCacheSectionTemplateParameters : public FMovieSceneGeometryCacheParams
{
public:
	struct FFrameNumber                          SectionStartTime;                                  // 0x48(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FFrameNumber                          SectionEndTime;                                    // 0x4C(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x70 - 0x20)
// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
struct FMovieSceneGeometryCacheSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneGeometryCacheSectionTemplateParameters Params;                                            // 0x20(0x50)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

}


