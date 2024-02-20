#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x1B0 - 0x148)
// Class PCGGeometryScriptInterop.PCGMeshSamplerSettings
class UPCGMeshSamplerSettings : public UPCGSettings
{
public:
	enum class EPCGMeshSamplingMethod            SamplingMethod;                                    // 0x148(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3D4[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FSoftObjectPath                       StaticMeshPath;                                    // 0x150(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bUseRedAsDensity;                                  // 0x170(0x1)(BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	bool                                         bVoxelize;                                         // 0x171(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3D5[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        VoxelSize;                                         // 0x174(0x4)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRemoveHiddenTriangles;                            // 0x178(0x1)(Net, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	enum class EGeometryScriptLODType            RequestedLODType;                                  // 0x179(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_3D6[0x2];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        RequestedLODIndex;                                 // 0x17C(0x4)(Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshPointSamplingOptions SamplingOptions;                                   // 0x180(0x18)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FGeometryScriptNonUniformPointSamplingOptions NonUniformSamplingOptions;                         // 0x198(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMeshSamplerSettings* GetDefaultObj();

};

}


