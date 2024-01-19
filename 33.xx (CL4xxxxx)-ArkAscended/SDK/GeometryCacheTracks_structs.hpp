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
	class UGeometryCache*                        GeometryCacheAsset;                                // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Config, InstancedReference, SubobjectReference)
	struct FFrameNumber                          FirstLoopStartFrameOffset;                         // 0x8(0x4)(BlueprintReadOnly, Net, Parm, Config, InstancedReference, SubobjectReference)
	struct FFrameNumber                          StartFrameOffset;                                  // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, Config, InstancedReference, SubobjectReference)
	struct FFrameNumber                          EndFrameOffset;                                    // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Config, InstancedReference, SubobjectReference)
	float                                        PlayRate;                                          // 0x14(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, InstancedReference, SubobjectReference)
	uint8                                        BitPad_78 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_AEC[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        StartOffset;                                       // 0x1C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        EndOffset;                                         // 0x20(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_AEE[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoftObjectPath                       GeometryCache;                                     // 0x28(0x20)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
};

// 0x8 (0x50 - 0x48)
// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
struct FMovieSceneGeometryCacheSectionTemplateParameters : public FMovieSceneGeometryCacheParams
{
public:
	struct FFrameNumber                          SectionStartTime;                                  // 0x48(0x4)(BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
	struct FFrameNumber                          SectionEndTime;                                    // 0x4C(0x4)(ExportObject, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
};

// 0x50 (0x70 - 0x20)
// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
struct FMovieSceneGeometryCacheSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneGeometryCacheSectionTemplateParameters Params;                                            // 0x20(0x50)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
};

}


