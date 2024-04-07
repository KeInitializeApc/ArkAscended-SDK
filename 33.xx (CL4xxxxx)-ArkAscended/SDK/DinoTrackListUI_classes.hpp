#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0xA68 - 0x9B0)
// WidgetBlueprintGeneratedClass DinoTrackListUI.DinoTrackListUI_C
class UDinoTrackListUI_C : public UUI_CustomTrackedDinoList
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9B0(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UHorizontalBox*                        BG;                                                // 0x9B8(0x8)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class UComboBoxString*                       DinoGroupSelector;                                 // 0x9C0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            DinoGroupsLabel;                                   // 0x9C8(0x8)(BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UDinoGroupsUI_C*                       DinoGroupsUI;                                      // 0x9D0(0x8)(Edit, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference)
	class UPrimalScrollBox*                      DinoListScrollBox;                                 // 0x9D8(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            DisableAutoTrackText;                              // 0x9E0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   EnableAutoTrackTamesButton;                        // 0x9E8(0x8)(ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               GoToDinoGroups;                                    // 0x9F0(0x8)(Edit, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               GoToTrackingList;                                  // 0x9F8(0x8)(Edit, ExportObject, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UScaleBox*                             GroupsEnableEffect;                                // 0xA00(0x8)(Edit, ConstParm, BlueprintVisible, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                Image;                                             // 0xA08(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UImage*                                Image_1;                                           // 0xA10(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp)
	class UImage*                                Image_3;                                           // 0xA18(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NonTransactional)
	class UImage*                                Image_4;                                           // 0xA20(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, NonTransactional)
	class UImage*                                Image_117;                                         // 0xA28(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp, NonTransactional, NoDestructor, AutoWeak)
	class UWidgetSwitcher*                       MainWidgetSwitcher;                                // 0xA30(0x8)(ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            ObtainingLatestInfoText;                           // 0xA38(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UComboBoxString*                       SearchFilterSelector;                              // 0xA40(0x8)(Edit, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UEditableTextBox*                      SearchTextBox;                                     // 0xA48(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UTextBlock*                            TrackinListLabel;                                  // 0xA50(0x8)(Edit, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UScaleBox*                             TribesEnableEffect;                                // 0xA58(0x8)(Edit, OutParm, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   UntrackAllButton;                                  // 0xA60(0x8)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UDinoTrackListUI_C* GetDefaultObj();

	void BndEvt__DinoTrackListUI_GoToDinoGroups_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__DinoTrackListUI_GoToTrackingList_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	struct FSlateColor ExecuteUbergraph_DinoTrackListUI(int32* EntryPoint);
};

}


