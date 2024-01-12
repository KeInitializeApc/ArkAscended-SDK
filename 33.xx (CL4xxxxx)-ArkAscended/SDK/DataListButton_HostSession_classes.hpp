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
	class UImage*                                ActiveIconImage;                                   // 0x850(0x8)(ConstParm, ExportObject, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ActiveModMoveDownButton;                           // 0x858(0x8)(Edit, ConstParm, BlueprintReadOnly, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ActiveModMoveUpButton;                             // 0x860(0x8)(Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        ActiveModOrderButtons;                             // 0x868(0x8)(BlueprintVisible, ExportObject, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   Button;                                            // 0x870(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, GlobalConfig)
	class UWidgetSwitcher*                       ButtonIconSwitcher;                                // 0x878(0x8)(ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMenuAnchor*                           CtxMenu;                                           // 0x880(0x8)(ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UCustomButtonWidget*                   DeleteDedicatedServerSaveData;                     // 0x888(0x8)(ConstParm, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   DeleteSinglePlayerSaveData;                        // 0x890(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            EntryNameLabel;                                    // 0x898(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UHorizontalBox*                        MapIcons;                                          // 0x8A0(0x8)(Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        ModIcons;                                          // 0x8A8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               TextBorder;                                        // 0x8B0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          SelectedColorBG;                                   // 0x8B8(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          UnSelectedColorBG;                                 // 0x8C8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          UnSelectedPairColorBG;                             // 0x8D8(0x10)(ConstParm, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListButton_HostSession_C* GetDefaultObj();

	bool OnPaint(class UPanelWidget** CallFunc_GetParent_ReturnValue, int32* CallFunc_GetChildIndex_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, struct FLinearColor* CallFunc_SelectColor_ReturnValue);
};

}


