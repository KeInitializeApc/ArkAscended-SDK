#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CustomizeSlot_ExamineBackground.UI_CustomizeSlot_ExamineBackground_C
// (None)

class UClass* UUI_CustomizeSlot_ExamineBackground_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CustomizeSlot_ExamineBackground_C");

	return Clss;
}


// UI_CustomizeSlot_ExamineBackground_C UI_CustomizeSlot_ExamineBackground.Default__UI_CustomizeSlot_ExamineBackground_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CustomizeSlot_ExamineBackground_C* UUI_CustomizeSlot_ExamineBackground_C::GetDefaultObj()
{
	static class UUI_CustomizeSlot_ExamineBackground_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CustomizeSlot_ExamineBackground_C*>(UUI_CustomizeSlot_ExamineBackground_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CustomizeSlot_ExamineBackground.UI_CustomizeSlot_ExamineBackground_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

void UUI_CustomizeSlot_ExamineBackground_C::SetColor(struct FLinearColor* Color, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeSlot_ExamineBackground_C", "SetColor");

	Params::UUI_CustomizeSlot_ExamineBackground_C_SetColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}


// Function UI_CustomizeSlot_ExamineBackground.UI_CustomizeSlot_ExamineBackground_C.GetColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// struct FCFCoreThemeRowData         CallFunc_GetCurrentTheme_CurrentTheme                            (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, InstancedReference, SubobjectReference)

void UUI_CustomizeSlot_ExamineBackground_C::GetColor(struct FLinearColor* Color, struct FCFCoreThemeRowData* CallFunc_GetCurrentTheme_CurrentTheme)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomizeSlot_ExamineBackground_C", "GetColor");

	Params::UUI_CustomizeSlot_ExamineBackground_C_GetColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (CallFunc_GetCurrentTheme_CurrentTheme != nullptr)
		*CallFunc_GetCurrentTheme_CurrentTheme = std::move(Parms.CallFunc_GetCurrentTheme_CurrentTheme);

}

}


