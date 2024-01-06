#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EEXRCompressionFormat : uint8
{
	None                           = 0,
	PIZ                            = 1,
	ZIP                            = 2,
	DWAA                           = 3,
	DWAB                           = 4,
	EEXRCompressionFormat_MAX      = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieRenderPipelineRenderPasses.MoviePipelinePostProcessPass
struct FMoviePipelinePostProcessPass
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_203[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class UMaterialInterface>     Material;                                          // 0x8(0x30)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
};

}


