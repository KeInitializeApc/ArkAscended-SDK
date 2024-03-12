#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x878 - 0x7E0)
// WidgetBlueprintGeneratedClass CosmeticSelectorPanel.CosmeticSelectorPanel_C
class UCosmeticSelectorPanel_C : public UCosmeticSelectorPanelUI
{
public:
	class UCustomButtonWidget*                   BackToInventoryButton;                             // 0x7E0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   ClearAllowCosmeticFilterButton;                    // 0x7E8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UCustomButtonWidget*                   ClearCustomCosmeticFilterButton;                   // 0x7F0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UComboBoxString*                       FilterCombo_Cosmetics;                             // 0x7F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UComboBoxString*                       FilterCombo_Items;                                 // 0x800(0x8)(ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            FilterSelectedAllowCosmeticLabel;                  // 0x808(0x8)(ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            FilterSelectedCustomCosmeticsLabel;                // 0x810(0x8)(Edit, ConstParm, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                Image;                                             // 0x818(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UImage*                                Image_117;                                         // 0x820(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp, NonTransactional, NoDestructor, AutoWeak)
	class UImage*                                Image_151;                                         // 0x828(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditorOnly, NoDestructor, ContainsInstancedReference)
	class UTextBlock*                            InventoryText;                                     // 0x830(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UTextBlock*                            InventoryText_1;                                   // 0x838(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	class UTextBlock*                            InventoryText_2;                                   // 0x840(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	class UTextBlock*                            InventoryText_3;                                   // 0x848(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	class UTextBlock*                            InventoryText_6;                                   // 0x850(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
	class UEditableTextBox*                      SearchCosmeticTextBox;                             // 0x858(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UEditableTextBox*                      SearchItemTextBox;                                 // 0x860(0x8)(Edit, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                TransferAllIcon;                                   // 0x868(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	class UImage*                                TransferAllIcon_1;                                 // 0x870(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)

	static class UClass* StaticClass();
	static class UCosmeticSelectorPanel_C* GetDefaultObj();

};

}


