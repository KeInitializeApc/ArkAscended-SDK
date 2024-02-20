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
	struct FVector                               TangentX;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFlipTangentY;                                     // 0x18(0x1)(Edit, ConstParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_42D[0x7];                                      // Fixing Size Of Struct > TateDumper <
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
struct FProcMeshVertex
{
public:
	struct FVector                               Position;                                          // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
	struct FVector                               Normal;                                            // 0x18(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FProcMeshTangent                      Tangent;                                           // 0x30(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FColor                                Color;                                             // 0x50(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	uint8                                        Pad_42E[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             UV0;                                               // 0x58(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             UV1;                                               // 0x68(0x10)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             UV2;                                               // 0x78(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             UV3;                                               // 0x88(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ProceduralMeshComponent.ProcMeshSection
struct FProcMeshSection
{
public:
	TArray<struct FProcMeshVertex>               ProcVertexBuffer;                                  // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint32>                               ProcIndexBuffer;                                   // 0x10(0x10)(ConstParm, Net, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FBox                                  SectionLocalBox;                                   // 0x20(0x38)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableCollision;                                  // 0x58(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSectionVisible;                                   // 0x59(0x1)(BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_42F[0x6];                                      // Fixing Size Of Struct > TateDumper <
};

}


