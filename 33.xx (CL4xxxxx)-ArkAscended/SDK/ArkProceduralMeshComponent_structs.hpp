#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EArkProcMeshSliceCapOption : uint8
{
	NoCap                          = 0,
	CreateNewSectionForCap         = 1,
	UseLastSectionForCap           = 2,
	EArkProcMeshSliceCapOption_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct ArkProceduralMeshComponent.ArkProcMeshTangent
struct FArkProcMeshTangent
{
public:
	struct FVector3f                             TangentX;                                          // 0x0(0xC)(BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bFlipTangentY;                                     // 0xC(0x1)(ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_5C2[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ArkProceduralMeshComponent.ArkProcMeshSection
struct FArkProcMeshSection
{
public:
	uint8                                        Pad_5C3[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<uint32>                               ProcIndexBuffer;                                   // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FBox                                  SectionLocalBox;                                   // 0x20(0x38)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableCollision;                                  // 0x58(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSectionVisible;                                   // 0x59(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_5C4[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

}


