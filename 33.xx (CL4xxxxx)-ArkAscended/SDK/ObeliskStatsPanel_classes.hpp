#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xCC0 - 0xC90)
// WidgetBlueprintGeneratedClass ObeliskStatsPanel.ObeliskStatsPanel_C
class UObeliskStatsPanel_C : public UStatsPanelWidget_Obelisk
{
public:
	class UStructureStatWidget_C*                ArkDinoStat;                                       // 0xC90(0x8)(ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UStructureStatWidget_C*                ArkStorageStat;                                    // 0xC98(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   RefreshArkButton;                                  // 0xCA0(0x8)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UStructureStatWidget_C*                StorageStat;                                       // 0xCA8(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   TravelToAnotherServerButton;                       // 0xCB0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   UploadCharacterDataButton;                         // 0xCB8(0x8)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UObeliskStatsPanel_C* GetDefaultObj();

};

}


