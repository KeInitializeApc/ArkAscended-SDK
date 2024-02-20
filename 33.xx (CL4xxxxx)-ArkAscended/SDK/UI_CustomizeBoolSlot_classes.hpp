#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x370 - 0x330)
// WidgetBlueprintGeneratedClass UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C
class UUI_CustomizeBoolSlot_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UCheckBox*                             CheckBox_285;                                      // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, Interp, NonTransactional, EditorOnly, NoDestructor, AssetRegistrySearchable)
	class UTextBlock*                            TEXT_NameOfOption;                                 // 0x340(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ThemeCustomizer_C*                 CustomizerParent;                                  // 0x348(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  Slot_Name;                                         // 0x350(0x18)(Edit, ExportObject, Net, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenu;                                         // 0x368(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_CustomizeBoolSlot_C* GetDefaultObj();

	void GetCurrentTheme(struct FCFCoreThemeRowData* CurrentTheme, bool* CallFunc_IsValid_ReturnValue);
	void GetColor(struct FLinearColor* Color);
	void SetColor(struct FLinearColor* Color);
	void OnInitialized();
	void PreConstruct(bool* IsDesignTime);
	bool BndEvt__UI_CustomizeBoolSlot_CheckBox_285_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature();
	class UUI_ThemeCustomizer_C* ExecuteUbergraph_UI_CustomizeBoolSlot(bool* Temp_bool_Variable, enum class ECheckBoxState* Temp_byte_Variable, enum class ECheckBoxState* Temp_byte_Variable_1, enum class ECheckBoxState* K2Node_Select_Default, bool* K2Node_ComponentBoundEvent_bIsChecked, bool* CallFunc_IsValid_ReturnValue);
};

}


