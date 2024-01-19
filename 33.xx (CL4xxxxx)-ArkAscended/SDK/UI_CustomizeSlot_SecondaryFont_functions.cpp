#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CustomizeSlot_SecondaryFont.UI_CustomizeSlot_SecondaryFont_C
// (None)

class UClass* UUI_CustomizeSlot_SecondaryFont_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CustomizeSlot_SecondaryFont_C");

	return Clss;
}


// UI_CustomizeSlot_SecondaryFont_C UI_CustomizeSlot_SecondaryFont.Default__UI_CustomizeSlot_SecondaryFont_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CustomizeSlot_SecondaryFont_C* UUI_CustomizeSlot_SecondaryFont_C::GetDefaultObj()
{
	static class UUI_CustomizeSlot_SecondaryFont_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CustomizeSlot_SecondaryFont_C*>(UUI_CustomizeSlot_SecondaryFont_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CustomizeSlot_SecondaryFont.UI_CustomizeSlot_SecondaryFont_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UUI_CustomizeSlot_SecondaryFont_C::SetColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeSlot_SecondaryFont_C", "SetColor");

	Params::UUI_CustomizeSlot_SecondaryFont_C_SetColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	return Parms.ReturnValue;

}


// Function UI_CustomizeSlot_SecondaryFont.UI_CustomizeSlot_SecondaryFont_C.GetColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// struct FCFCoreThemeRowData         CallFunc_GetCurrentTheme_CurrentTheme                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UUI_CustomizeSlot_SecondaryFont_C::GetColor(struct FLinearColor* Color, struct FCFCoreThemeRowData* CallFunc_GetCurrentTheme_CurrentTheme)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeSlot_SecondaryFont_C", "GetColor");

	Params::UUI_CustomizeSlot_SecondaryFont_C_GetColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (CallFunc_GetCurrentTheme_CurrentTheme != nullptr)
		*CallFunc_GetCurrentTheme_CurrentTheme = std::move(Parms.CallFunc_GetCurrentTheme_CurrentTheme);

}

}


