#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x350 - 0x330)
// WidgetBlueprintGeneratedClass HUDActiveMissionAlertEntry.HUDActiveMissionAlertEntry_C
class UHUDActiveMissionAlertEntry_C : public UPrimalUserWidget
{
public:
	class UTextBlock*                            AlertContentTextBlock;                             // 0x330(0x8)(Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UTextBlock*                            AlertCountTextBlock;                               // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class UImage*                                AlertEntryIcon;                                    // 0x340(0x8)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	class USizeBox*                              AlertEntryIconContainer;                           // 0x348(0x8)(Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHUDActiveMissionAlertEntry_C* GetDefaultObj();

};

}


