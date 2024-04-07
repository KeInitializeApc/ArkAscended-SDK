#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CustomizeSlot_BUTTON_SignIn.UI_CustomizeSlot_BUTTON_SignIn_C
// (None)

class UClass* UUI_CustomizeSlot_BUTTON_SignIn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CustomizeSlot_BUTTON_SignIn_C");

	return Clss;
}


// UI_CustomizeSlot_BUTTON_SignIn_C UI_CustomizeSlot_BUTTON_SignIn.Default__UI_CustomizeSlot_BUTTON_SignIn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CustomizeSlot_BUTTON_SignIn_C* UUI_CustomizeSlot_BUTTON_SignIn_C::GetDefaultObj()
{
	static class UUI_CustomizeSlot_BUTTON_SignIn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CustomizeSlot_BUTTON_SignIn_C*>(UUI_CustomizeSlot_BUTTON_SignIn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CustomizeSlot_BUTTON_SignIn.UI_CustomizeSlot_BUTTON_SignIn_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_CustomizeSlot_BUTTON_SignIn_C::SetColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeSlot_BUTTON_SignIn_C", "SetColor");

	Params::UUI_CustomizeSlot_BUTTON_SignIn_C_SetColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	return Parms.ReturnValue;

}


// Function UI_CustomizeSlot_BUTTON_SignIn.UI_CustomizeSlot_BUTTON_SignIn_C.GetColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// struct FCFCoreThemeRowData         CallFunc_GetCurrentTheme_CurrentTheme                            (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

struct FCFCoreThemeRowData UUI_CustomizeSlot_BUTTON_SignIn_C::GetColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeSlot_BUTTON_SignIn_C", "GetColor");

	Params::UUI_CustomizeSlot_BUTTON_SignIn_C_GetColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	return Parms.ReturnValue;

}

}


