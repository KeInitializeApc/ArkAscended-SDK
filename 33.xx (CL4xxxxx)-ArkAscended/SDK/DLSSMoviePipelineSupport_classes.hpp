#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x50 - 0x48)
// Class DLSSMoviePipelineSupport.MoviePipelineDLSSSetting
class UMoviePipelineDLSSSetting : public UMoviePipelineViewFamilySetting
{
public:
	enum class EMoviePipelineDLSSQuality         DLSSQuality;                                       // 0x48(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_1005[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineDLSSSetting* GetDefaultObj();

};

}


