#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x378 - 0x330)
// WidgetBlueprintGeneratedClass UI_CustomizeColorSlot.UI_CustomizeColorSlot_C
class UUI_CustomizeColorSlot_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	class UBorder*                               BOARDER_Color;                                     // 0x338(0x8)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, InstancedReference, SubobjectReference)
	class UButton*                               Button_Slot;                                       // 0x340(0x8)(ConstParm, Net, OutParm, Transient, InstancedReference, SubobjectReference)
	class UTextBlock*                            TEXT_NameOfOption;                                 // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, InstancedReference, SubobjectReference)
	class UUI_ThemeCustomizer_C*                 CustomizerParent;                                  // 0x350(0x8)(ConstParm, EditFixedSize, OutParm, Transient, InstancedReference, SubobjectReference)
	class FText                                  Slot_Name;                                         // 0x358(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, InstancedReference, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenu;                                         // 0x370(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_CustomizeColorSlot_C* GetDefaultObj();

	struct FCFCoreThemeRowData GetCurrentTheme(bool* CallFunc_IsValid_ReturnValue);
	void GetColor(struct FLinearColor* Color);
	void SetColor(struct FLinearColor* Color, bool* CallFunc_IsValid_ReturnValue);
	void OnInitialized();
	void BndEvt__UI_CustomizeColorSlot_Button_Slot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void CustomEvent_0();
	bool ExecuteUbergraph_UI_CustomizeColorSlot(bool* CallFunc_IsValid_ReturnValue, TArray<class UUI_ThemeCustomizer_C*>* CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_ThemeCustomizer_C** CallFunc_Array_Get_Item, struct FLinearColor* CallFunc_GetColor_Color, struct FLinearColor* CallFunc_GetColor_Color_1);
};

}


