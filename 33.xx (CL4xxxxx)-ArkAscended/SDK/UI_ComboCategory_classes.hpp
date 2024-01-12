#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10C0 - 0x10B0)
// WidgetBlueprintGeneratedClass UI_ComboCategory.UI_ComboCategory_C
class UUI_ComboCategory_C : public UUI_CustomComboBoxOption_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x10B0(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UUI_SubMinusCategories_Scroll_C*       SubCategoriesScroll_0;                             // 0x10B8(0x8)(BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference, RepNotify)

	static class UClass* StaticClass();
	static class UUI_ComboCategory_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	float Tick(struct FGeometry* MyGeometry);
	bool ExecuteUbergraph_UI_ComboCategory(struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
};

}


