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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x10B0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UUI_SubMinusCategories_Scroll_C*       SubCategoriesScroll_0;                             // 0x10B8(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify)

	static class UClass* StaticClass();
	static class UUI_ComboCategory_C* GetDefaultObj();

	bool PreConstruct();
	float Tick(const struct FGeometry& MyGeometry);
	bool ExecuteUbergraph_UI_ComboCategory(int32 EntryPoint, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime);
};

}


