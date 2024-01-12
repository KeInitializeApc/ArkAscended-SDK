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
	enum class EPCGMeshSamplingMethod            SamplingMethod;                                    // 0x148(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1C4A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSoftObjectPath                       StaticMeshPath;                                    // 0x150(0x20)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseRedAsDensity;                                  // 0x170(0x1)(BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bVoxelize;                                         // 0x171(0x1)(BlueprintVisible, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C4C[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        VoxelSize;                                         // 0x174(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bRemoveHiddenTriangles;                            // 0x178(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EGeometryScriptLODType            RequestedLODType;                                  // 0x179(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1C4D[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        RequestedLODIndex;                                 // 0x17C(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshPointSamplingOptions SamplingOptions;                                   // 0x180(0x18)(Edit, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptNonUniformPointSamplingOptions NonUniformSamplingOptions;                         // 0x198(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMeshSamplerSettings* GetDefaultObj();

};

}


