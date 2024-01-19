#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x8E8 - 0x850)
// WidgetBlueprintGeneratedClass DataListButton_HostSession.DataListButton_HostSession_C
class UDataListButton_HostSession_C : public UDataListEntryButton_HostSession
{
public:
	class UImage*                                ActiveIconImage;                                   // 0x850(0x8)(Edit, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ActiveModMoveDownButton;                           // 0x858(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ActiveModMoveUpButton;                             // 0x860(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        ActiveModOrderButtons;                             // 0x868(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   Button;                                            // 0x870(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetSwitcher*                       ButtonIconSwitcher;                                // 0x878(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMenuAnchor*                           CtxMenu;                                           // 0x880(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UCustomButtonWidget*                   DeleteDedicatedServerSaveData;                     // 0x888(0x8)(Edit, ExportObject, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   DeleteSinglePlayerSaveData;                        // 0x890(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            EntryNameLabel;                                    // 0x898(0x8)(Edit, ConstParm, Parm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UHorizontalBox*                        MapIcons;                                          // 0x8A0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        ModIcons;                                          // 0x8A8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               TextBorder;                                        // 0x8B0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          SelectedColorBG;                                   // 0x8B8(0x10)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          UnSelectedColorBG;                                 // 0x8C8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          UnSelectedPairColorBG;                             // 0x8D8(0x10)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListButton_HostSession_C* GetDefaultObj();

	struct FLinearColor OnPaint(bool* CallFunc_GetToggledState_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


