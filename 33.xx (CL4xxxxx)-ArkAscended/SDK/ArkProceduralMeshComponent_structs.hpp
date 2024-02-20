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
	struct FVector3f                             TangentX;                                          // 0x0(0xC)(Edit, ConstParm, ExportObject, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFlipTangentY;                                     // 0xC(0x1)(Edit, ConstParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11BB[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ArkProceduralMeshComponent.ArkProcMeshSection
struct FArkProcMeshSection
{
public:
	uint8                                        Pad_11BC[0x10];                                    // Fixing Size After Last Property  > TateDumper <
	TArray<uint32>                               ProcIndexBuffer;                                   // 0x10(0x10)(ConstParm, Net, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FBox                                  SectionLocalBox;                                   // 0x20(0x38)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableCollision;                                  // 0x58(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSectionVisible;                                   // 0x59(0x1)(BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_11BE[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

}


