#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x70 - 0x0)
// ScriptStruct StaticMeshDescription.UVMapSettings
struct FUVMapSettings
{
public:
	struct FVector                               Size;                                              // 0x0(0x18)(Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
	struct FVector2D                             UVTile;                                            // 0x18(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FVector                               Position;                                          // 0x28(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
	struct FRotator                              Rotation;                                          // 0x40(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Scale;                                             // 0x58(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
};

}


