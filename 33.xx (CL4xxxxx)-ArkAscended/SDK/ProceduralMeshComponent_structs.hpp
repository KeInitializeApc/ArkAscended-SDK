#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EProcMeshSliceCapOption : uint8
{
	NoCap                          = 0,
	CreateNewSectionForCap         = 1,
	UseLastSectionForCap           = 2,
	EProcMeshSliceCapOption_MAX    = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
struct FProcMeshTangent
{
public:
	struct FVector                               TangentX;                                          // 0x0(0x18)(Edit, BlueprintVisible, ExportObject, OutParm, Config, InstancedReference, SubobjectReference)
	bool                                         bFlipTangentY;                                     // 0x18(0x1)(Edit, BlueprintVisible, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_20C4[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
struct FProcMeshVertex
{
public:
	struct FVector                               Position;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FVector                               Normal;                                            // 0x18(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	struct FProcMeshTangent                      Tangent;                                           // 0x30(0x20)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst)
	struct FColor                                Color;                                             // 0x50(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	uint8                                        Pad_20C5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             UV0;                                               // 0x58(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             UV1;                                               // 0x68(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             UV2;                                               // 0x78(0x10)(BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             UV3;                                               // 0x88(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ProceduralMeshComponent.ProcMeshSection
struct FProcMeshSection
{
public:
	TArray<struct FProcMeshVertex>               ProcVertexBuffer;                                  // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	TArray<uint32>                               ProcIndexBuffer;                                   // 0x10(0x10)(BlueprintVisible, Net, OutParm, Config, InstancedReference, SubobjectReference)
	struct FBox                                  SectionLocalBox;                                   // 0x20(0x38)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, InstancedReference, SubobjectReference)
	bool                                         bEnableCollision;                                  // 0x58(0x1)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSectionVisible;                                   // 0x59(0x1)(ConstParm, BlueprintReadOnly, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_20C6[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

}


