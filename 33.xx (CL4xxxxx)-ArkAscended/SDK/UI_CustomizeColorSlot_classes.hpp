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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UBorder*                               BOARDER_Color;                                     // 0x338(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Slot;                                       // 0x340(0x8)(Edit, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_NameOfOption;                                 // 0x348(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ThemeCustomizer_C*                 CustomizerParent;                                  // 0x350(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  Slot_Name;                                         // 0x358(0x18)(Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenu;                                         // 0x370(0x8)(ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_CustomizeColorSlot_C* GetDefaultObj();

	bool GetCurrentTheme(const struct FCFCoreThemeRowData& CurrentTheme);
	void GetColor(struct FLinearColor* Color);
	bool SetColor(struct FLinearColor* Color);
	void OnInitialized();
	void BndEvt__UI_CustomizeColorSlot_Button_Slot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	bool PreConstruct();
	void CustomEvent_0();
	struct FLinearColor ExecuteUbergraph_UI_CustomizeColorSlot(int32* EntryPoint, class UUI_ThemeCustomizer_C* CallFunc_Array_Get_Item);
};

}


