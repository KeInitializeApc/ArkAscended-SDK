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
	enum class EMoviePipelineDLSSQuality         DLSSQuality;                                       // 0x48(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_94C[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UMoviePipelineDLSSSetting* GetDefaultObj();

};

}


