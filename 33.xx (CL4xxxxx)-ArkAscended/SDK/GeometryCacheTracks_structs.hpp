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
	class UGeometryCache*                        GeometryCacheAsset;                                // 0x0(0x8)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FFrameNumber                          FirstLoopStartFrameOffset;                         // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FFrameNumber                          StartFrameOffset;                                  // 0xC(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FFrameNumber                          EndFrameOffset;                                    // 0x10(0x4)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        PlayRate;                                          // 0x14(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        BitPad_B8 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_D59[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        StartOffset;                                       // 0x1C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        EndOffset;                                         // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_D5A[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoftObjectPath                       GeometryCache;                                     // 0x28(0x20)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst)
};

// 0x8 (0x50 - 0x48)
// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
struct FMovieSceneGeometryCacheSectionTemplateParameters : public FMovieSceneGeometryCacheParams
{
public:
	struct FFrameNumber                          SectionStartTime;                                  // 0x48(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FFrameNumber                          SectionEndTime;                                    // 0x4C(0x4)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x50 (0x70 - 0x20)
// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
struct FMovieSceneGeometryCacheSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneGeometryCacheSectionTemplateParameters Params;                                            // 0x20(0x50)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
};

}


