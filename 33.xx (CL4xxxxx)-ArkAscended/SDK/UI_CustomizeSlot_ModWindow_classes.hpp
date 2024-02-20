#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x378 - 0x378)
// WidgetBlueprintGeneratedClass UI_CustomizeSlot_ModWindow.UI_CustomizeSlot_ModWindow_C
class UUI_CustomizeSlot_ModWindow_C : public UUI_CustomizeColorSlot_C
{
public:

	static class UClass* StaticClass();
	static class UUI_CustomizeSlot_ModWindow_C* GetDefaultObj();

	void SetColor(struct FLinearColor* Color, bool* CallFunc_IsValid_ReturnValue);
	void GetColor(struct FLinearColor* Color, struct FCFCoreThemeRowData* CallFunc_GetCurrentTheme_CurrentTheme);
};

}


