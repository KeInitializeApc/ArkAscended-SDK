#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CustomizeSlot_BUTTON_Install.UI_CustomizeSlot_BUTTON_Install_C
// (None)

class UClass* UUI_CustomizeSlot_BUTTON_Install_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CustomizeSlot_BUTTON_Install_C");

	return Clss;
}


// UI_CustomizeSlot_BUTTON_Install_C UI_CustomizeSlot_BUTTON_Install.Default__UI_CustomizeSlot_BUTTON_Install_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CustomizeSlot_BUTTON_Install_C* UUI_CustomizeSlot_BUTTON_Install_C::GetDefaultObj()
{
	static class UUI_CustomizeSlot_BUTTON_Install_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CustomizeSlot_BUTTON_Install_C*>(UUI_CustomizeSlot_BUTTON_Install_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CustomizeSlot_BUTTON_Install.UI_CustomizeSlot_BUTTON_Install_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UUI_CustomizeSlot_BUTTON_Install_C::SetColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeSlot_BUTTON_Install_C", "SetColor");

	Params::UUI_CustomizeSlot_BUTTON_Install_C_SetColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	return Parms.ReturnValue;

}


// Function UI_CustomizeSlot_BUTTON_Install.UI_CustomizeSlot_BUTTON_Install_C.GetColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// struct FCFCoreThemeRowData         CallFunc_GetCurrentTheme_CurrentTheme                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

void UUI_CustomizeSlot_BUTTON_Install_C::GetColor(struct FLinearColor* Color, const struct FCFCoreThemeRowData& CallFunc_GetCurrentTheme_CurrentTheme)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeSlot_BUTTON_Install_C", "GetColor");

	Params::UUI_CustomizeSlot_BUTTON_Install_C_GetColor_Params Parms{};

	Parms.CallFunc_GetCurrentTheme_CurrentTheme = CallFunc_GetCurrentTheme_CurrentTheme;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}

}

