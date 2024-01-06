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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	class UCheckBox*                             CheckBox_285;                                      // 0x338(0x8)(Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, Interp, NonTransactional, EditorOnly, NoDestructor, AssetRegistrySearchable)
	class UTextBlock*                            TEXT_NameOfOption;                                 // 0x340(0x8)(Edit, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UUI_ThemeCustomizer_C*                 CustomizerParent;                                  // 0x348(0x8)(BlueprintReadOnly, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class FText                                  Slot_Name;                                         // 0x350(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenu;                                         // 0x368(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_CustomizeBoolSlot_C* GetDefaultObj();

	bool GetCurrentTheme();
	void GetColor(struct FLinearColor* Color);
	void SetColor(struct FLinearColor* Color);
	void OnInitialized();
	bool PreConstruct();
	void BndEvt__UI_CustomizeBoolSlot_CheckBox_285_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked);
	bool ExecuteUbergraph_UI_CustomizeBoolSlot(int32* EntryPoint, bool* Temp_bool_Variable, enum class ECheckBoxState* Temp_byte_Variable, enum class ECheckBoxState* Temp_byte_Variable_1, enum class ECheckBoxState* K2Node_Select_Default, const TArray<class UUI_ThemeCustomizer_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets);
};

}


