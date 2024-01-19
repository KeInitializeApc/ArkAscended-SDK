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
	struct FVector3f                             TangentX;                                          // 0x0(0xC)(Edit, BlueprintVisible, ExportObject, OutParm, Config, InstancedReference, SubobjectReference)
	bool                                         bFlipTangentY;                                     // 0xC(0x1)(Edit, BlueprintVisible, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_519[0x3];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ArkProceduralMeshComponent.ArkProcMeshSection
struct FArkProcMeshSection
{
public:
	uint8                                        Pad_51B[0x10];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<uint32>                               ProcIndexBuffer;                                   // 0x10(0x10)(BlueprintVisible, Net, OutParm, Config, InstancedReference, SubobjectReference)
	struct FBox                                  SectionLocalBox;                                   // 0x20(0x38)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableCollision;                                  // 0x58(0x1)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSectionVisible;                                   // 0x59(0x1)(ConstParm, BlueprintReadOnly, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_51C[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

}


