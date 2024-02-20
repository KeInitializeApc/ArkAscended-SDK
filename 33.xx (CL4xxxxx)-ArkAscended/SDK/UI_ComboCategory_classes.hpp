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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x10B0(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UUI_SubMinusCategories_Scroll_C*       SubCategoriesScroll_0;                             // 0x10B8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify)

	static class UClass* StaticClass();
	static class UUI_ComboCategory_C* GetDefaultObj();

	void PreConstruct(bool* IsDesignTime);
	float Tick();
	bool ExecuteUbergraph_UI_ComboCategory(const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
};

}


