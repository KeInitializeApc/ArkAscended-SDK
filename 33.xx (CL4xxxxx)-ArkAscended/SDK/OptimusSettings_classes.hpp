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
	enum class EOptimusDefaultDeformerMode       DefaultMode;                                       // 0x38(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_11C9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class UMeshDeformer>          DefaultDeformer;                                   // 0x40(0x30)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	TSoftObjectPtr<class UMeshDeformer>          DefaultRecomputeTangentDeformer;                   // 0x70(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UOptimusSettings* GetDefaultObj();

};

}


