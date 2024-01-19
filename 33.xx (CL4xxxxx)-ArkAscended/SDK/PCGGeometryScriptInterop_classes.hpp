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
	enum class EPCGMeshSamplingMethod            SamplingMethod;                                    // 0x148(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_155B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSoftObjectPath                       StaticMeshPath;                                    // 0x150(0x20)(Edit, ConstParm, ExportObject, Net, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseRedAsDensity;                                  // 0x170(0x1)(ConstParm, Net, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	bool                                         bVoxelize;                                         // 0x171(0x1)(Edit, EditFixedSize, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1560[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        VoxelSize;                                         // 0x174(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bRemoveHiddenTriangles;                            // 0x178(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	enum class EGeometryScriptLODType            RequestedLODType;                                  // 0x179(0x1)(Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1565[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        RequestedLODIndex;                                 // 0x17C(0x4)(Edit, ConstParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshPointSamplingOptions SamplingOptions;                                   // 0x180(0x18)(ExportObject, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptNonUniformPointSamplingOptions NonUniformSamplingOptions;                         // 0x198(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMeshSamplerSettings* GetDefaultObj();

};

}


