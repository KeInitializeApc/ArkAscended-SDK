#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x8F0 - 0x858)
// WidgetBlueprintGeneratedClass DataListButton_HostSession.DataListButton_HostSession_C
class UDataListButton_HostSession_C : public UDataListEntryButton_HostSession
{
public:
	class UImage*                                ActiveIconImage;                                   // 0x858(0x8)(Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ActiveModMoveDownButton;                           // 0x860(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ActiveModMoveUpButton;                             // 0x868(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        ActiveModOrderButtons;                             // 0x870(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   Button;                                            // 0x878(0x8)(ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig)
	class UWidgetSwitcher*                       ButtonIconSwitcher;                                // 0x880(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UMenuAnchor*                           CtxMenu;                                           // 0x888(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UCustomButtonWidget*                   DeleteDedicatedServerSaveData;                     // 0x890(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   DeleteSinglePlayerSaveData;                        // 0x898(0x8)(Edit, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            EntryNameLabel;                                    // 0x8A0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UHorizontalBox*                        MapIcons;                                          // 0x8A8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UHorizontalBox*                        ModIcons;                                          // 0x8B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	class UBorder*                               TextBorder;                                        // 0x8B8(0x8)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          SelectedColorBG;                                   // 0x8C0(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          UnSelectedColorBG;                                 // 0x8D0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          UnSelectedPairColorBG;                             // 0x8E0(0x10)(Net, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UDataListButton_HostSession_C* GetDefaultObj();

	struct FLinearColor OnPaint(struct FPaintContext* Context, int32* CallFunc_GetChildIndex_ReturnValue, bool* CallFunc_GetToggledState_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
};

}

