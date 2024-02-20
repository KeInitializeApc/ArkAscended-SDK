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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UBorder*                               BOARDER_Color;                                     // 0x338(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class UButton*                               Button_Slot;                                       // 0x340(0x8)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class UTextBlock*                            TEXT_NameOfOption;                                 // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class UUI_ThemeCustomizer_C*                 CustomizerParent;                                  // 0x350(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  Slot_Name;                                         // 0x358(0x18)(Edit, ExportObject, Net, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
	class UUI_StoreMenu_C*                       StoreMenu;                                         // 0x370(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UUI_CustomizeColorSlot_C* GetDefaultObj();

	void GetCurrentTheme(struct FCFCoreThemeRowData* CurrentTheme, bool* CallFunc_IsValid_ReturnValue);
	void GetColor(struct FLinearColor* Color);
	void SetColor(struct FLinearColor* Color, bool* CallFunc_IsValid_ReturnValue);
	void OnInitialized();
	void BndEvt__UI_CustomizeColorSlot_Button_Slot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool* IsDesignTime);
	void CustomEvent_0();
	bool ExecuteUbergraph_UI_CustomizeColorSlot(bool* CallFunc_IsValid_ReturnValue, struct FLinearColor* CallFunc_GetColor_Color, struct FLinearColor* CallFunc_GetColor_Color_1);
};

}


