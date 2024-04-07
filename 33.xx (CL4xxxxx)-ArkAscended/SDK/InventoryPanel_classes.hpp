#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D0 (0xC10 - 0xA40)
// WidgetBlueprintGeneratedClass InventoryPanel.InventoryPanel_C
class UInventoryPanel_C : public UInventoryPanelWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA40(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UArkCreaturesPanel_C*                  ArkCreaturesPanel;                                 // 0xA48(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, DuplicateTransient)
	class UCustomButtonWidget*                   AutoStackButton;                                   // 0xA50(0x8)(ConstParm, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                AutoStackIcon;                                     // 0xA58(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   ClearCraftingQueueButton;                          // 0xA60(0x8)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   ClearTrackingItems;                                // 0xA68(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               CraftingButton;                                    // 0xA70(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UDataListEntryWidgetPrimalItem_CraftQueue_C* CraftingQueueItem1;                                // 0xA78(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UDataListEntryWidgetPrimalItem_CraftQueue_C* CraftingQueueItem2;                                // 0xA80(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UDataListEntryWidgetPrimalItem_CraftQueue_C* CraftingQueueItem3;                                // 0xA88(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UDataListEntryWidgetPrimalItem_CraftQueue_C* CraftingQueueItem4;                                // 0xA90(0x8)(Edit, ConstParm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UDataListEntryWidgetPrimalItem_CraftQueue_C* CraftingQueueItem5;                                // 0xA98(0x8)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UDataListEntryWidgetPrimalItem_CraftQueue_C* CraftingQueueItem6;                                // 0xAA0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               CreaturesButton;                                   // 0xAA8(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   CustomCosmeticsTab;                                // 0xAB0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UWidgetSwitcher*                       DataListSwitcher;                                  // 0xAB8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   DropAllButton;                                     // 0xAC0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                DropAllIcon;                                       // 0xAC8(0x8)(OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UComboBoxString*                       FilterCombo;                                       // 0xAD0(0x8)(Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                Image;                                             // 0xAD8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UImage*                                Image_0;                                           // 0xAE0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify)
	class UImage*                                Image_3;                                           // 0xAE8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, NonTransactional)
	class UImage*                                Image_42;                                          // 0xAF0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, RepNotify, Interp, EditorOnly)
	class UImage*                                Image_117;                                         // 0xAF8(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp, NonTransactional, NoDestructor, AutoWeak)
	class UImage*                                Image_151;                                         // 0xB00(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditorOnly, NoDestructor, ContainsInstancedReference)
	class UImage*                                Image_161;                                         // 0xB08(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp, ContainsInstancedReference)
	class UButton*                               InventoryButton;                                   // 0xB10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            InventoryText;                                     // 0xB18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                MaxInventoryImage;                                 // 0xB20(0x8)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
	class UImage*                                MaxInventoryImage_1;                               // 0xB28(0x8)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference, Interp)
	class UImage*                                MaxInventoryImage_2;                               // 0xB30(0x8)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	class UCustomButtonWidget*                   NewFolderButton;                                   // 0xB38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                NewFolderIcon;                                     // 0xB40(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UComboBoxString*                       OrderCombo;                                        // 0xB48(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UQuickSlotPanel_C*                     QuickSlotPanel;                                    // 0xB50(0x8)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	class UEditableTextBox*                      SearchTextBox;                                     // 0xB58(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UImage*                                SeparatorLineBottom;                               // 0xB60(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                SeparatorLineTop;                                  // 0xB68(0x8)(Edit, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UCustomButtonWidget*                   ShowAllButton;                                     // 0xB70(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                ShowAllIcon;                                       // 0xB78(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                ShowAllIcon_1;                                     // 0xB80(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	class UImage*                                ShowAllIcon_2;                                     // 0xB88(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	class UCustomButtonWidget*                   ShowEngramsButton;                                 // 0xB90(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UButton*                               SkinsButton;                                       // 0xB98(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UDataListPanel*                        SkinsDataList;                                     // 0xBA0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UMenuAnchor*                           SortMenuAnchor;                                    // 0xBA8(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   SortMenuButton;                                    // 0xBB0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                SortMenuIcon;                                      // 0xBB8(0x8)(Edit, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                Tab3_Crafting;                                     // 0xBC0(0x8)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Tab3_Creatures;                                    // 0xBC8(0x8)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                Tab3_Inventory;                                    // 0xBD0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UWidgetSwitcher*                       TabBgSwitcher;                                     // 0xBD8(0x8)(Edit, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UImage*                                TabSplitImgCrafting;                               // 0xBE0(0x8)(ExportObject, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                TabSplitImgInventory;                              // 0xBE8(0x8)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            TextBlock_798;                                     // 0xBF0(0x8)(BlueprintVisible, ExportObject, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AssetRegistrySearchable, SimpleDisplay)
	class UCustomButtonWidget*                   ToggleTooltipButton;                               // 0xBF8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   TransferAllButton;                                 // 0xC00(0x8)(Edit, ExportObject, Net, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                TransferAllIcon;                                   // 0xC08(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UInventoryPanel_C* GetDefaultObj();

	enum class ESlateVisibility Get_InventoryText_Visibility(enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue);
	void BndEvt__InventoryPanel_AutoStackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__InventoryPanel_ClearCraftingQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__InventoryPanel_CreaturesButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__InventoryPanel_DropAllButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__InventoryPanel_NewFolderButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__InventoryPanel_ShowAllButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__InventoryPanel_ShowEngramsButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__InventoryPanel_SkinsButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__InventoryPanel_SortMenuButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__InventoryPanel_TransferAllButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__InventoryPanel_CraftingButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_InventoryPanel(int32* EntryPoint);
};

}


