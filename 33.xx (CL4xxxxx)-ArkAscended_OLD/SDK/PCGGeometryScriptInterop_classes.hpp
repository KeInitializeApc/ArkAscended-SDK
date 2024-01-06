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
	enum class EPCGMeshSamplingMethod            SamplingMethod;                                    // 0x148(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
	uint8                                        Pad_11D9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSoftObjectPath                       StaticMeshPath;                                    // 0x150(0x20)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseRedAsDensity;                                  // 0x170(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bVoxelize;                                         // 0x171(0x1)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_11DC[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        VoxelSize;                                         // 0x174(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bRemoveHiddenTriangles;                            // 0x178(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	enum class EGeometryScriptLODType            RequestedLODType;                                  // 0x179(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_11DF[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        RequestedLODIndex;                                 // 0x17C(0x4)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FGeometryScriptMeshPointSamplingOptions SamplingOptions;                                   // 0x180(0x18)(EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FGeometryScriptNonUniformPointSamplingOptions NonUniformSamplingOptions;                         // 0x198(0x18)(ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPCGMeshSamplerSettings* GetDefaultObj();

};

}


