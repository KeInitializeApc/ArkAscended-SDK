#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0xE0 - 0x38)
// Class DataflowCore.DataflowSettings
class UDataflowSettings : public UDeveloperSettings
{
public:
	struct FLinearColor                          ArrayPinTypeColor;                                 // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FLinearColor                          ManagedArrayCollectionPinTypeColor;                // 0x48(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FLinearColor                          BoxPinTypeColor;                                   // 0x58(0x10)(BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	struct FLinearColor                          SpherePinTypeColor;                                // 0x68(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TMap<class FName, struct FNodeColors>        NodeColorsMap;                                     // 0x78(0x50)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2C3B[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UDataflowSettings* GetDefaultObj();

};

}


