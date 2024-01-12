#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0xA0 - 0x38)
// Class OptimusSettings.OptimusSettings
class UOptimusSettings : public UDeveloperSettings
{
public:
	enum class EOptimusDefaultDeformerMode       DefaultMode;                                       // 0x38(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_152A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class UMeshDeformer>          DefaultDeformer;                                   // 0x40(0x30)(Edit, ConstParm, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference)
	TSoftObjectPtr<class UMeshDeformer>          DefaultRecomputeTangentDeformer;                   // 0x70(0x30)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusSettings* GetDefaultObj();

};

}


