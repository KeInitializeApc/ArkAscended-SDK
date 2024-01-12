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

// 0x30 (0x30 - 0x0)
// ScriptStruct FieldSystemEngine.FieldObjectCommands
struct FFieldObjectCommands
{
public:
	TArray<class FName>                          TargetNames;                                       // 0x0(0x10)(Edit, ConstParm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	TArray<class UFieldNodeBase*>                RootNodes;                                         // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	TArray<class UFieldSystemMetaData*>          MetaDatas;                                         // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
};

}


