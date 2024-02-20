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
	TArray<class FName>                          TargetNames;                                       // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UFieldNodeBase*>                RootNodes;                                         // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UFieldSystemMetaData*>          MetaDatas;                                         // 0x20(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


