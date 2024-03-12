#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x890 - 0x840)
// WidgetBlueprintGeneratedClass StatsPanel.StatsPanel_C
class UStatsPanel_C : public UInventoryStatsPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x840(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UImage*                                Image_42;                                          // 0x848(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, EditorOnly)
	class UImage*                                Image_151;                                         // 0x850(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditorOnly, NoDestructor, ContainsInstancedReference)
	class UButton*                               PlayerStatsButton;                                 // 0x858(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCharacterStatsPanel_C*                PlayerStatsPanel;                                  // 0x860(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               RemoteStatsButton;                                 // 0x868(0x8)(ConstParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UWidgetSwitcher*                       StatsSwitcher;                                     // 0x870(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UWidgetSwitcher*                       TabBgSwitcher;                                     // 0x878(0x8)(Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                TabSplitImgPlayer;                                 // 0x880(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                TabSplitImgRemote;                                 // 0x888(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UStatsPanel_C* GetDefaultObj();

	void OnButtonHover();
	void BndEvt__StatsPanel_PlayerStatsButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__StatsPanel_RemoteStatsButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_StatsPanel(int32* EntryPoint);
};

}


