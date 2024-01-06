#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x378 - 0x378)
// WidgetBlueprintGeneratedClass UI_CustomizeSlot_MainFont.UI_CustomizeSlot_MainFont_C
class UUI_CustomizeSlot_MainFont_C : public UUI_CustomizeColorSlot_C
{
public:

	static class UClass* StaticClass();
	static class UUI_CustomizeSlot_MainFont_C* GetDefaultObj();

	bool SetColor(struct FLinearColor* Color);
	void GetColor(struct FLinearColor* Color, const struct FCFCoreThemeRowData& CallFunc_GetCurrentTheme_CurrentTheme);
};

}


