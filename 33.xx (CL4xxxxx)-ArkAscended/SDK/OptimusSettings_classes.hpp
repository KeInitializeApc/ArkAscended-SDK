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
	enum class EOptimusDefaultDeformerMode       DefaultMode;                                       // 0x38(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
	uint8                                        Pad_E47[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class UMeshDeformer>          DefaultDeformer;                                   // 0x40(0x30)(Edit, ExportObject, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference)
	TSoftObjectPtr<class UMeshDeformer>          DefaultRecomputeTangentDeformer;                   // 0x70(0x30)(ConstParm, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusSettings* GetDefaultObj();

};

}


