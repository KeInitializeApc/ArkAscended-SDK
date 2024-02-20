#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Prompt_GoToComments.UI_Prompt_GoToComments_C
// (None)

class UClass* UUI_Prompt_GoToComments_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Prompt_GoToComments_C");

	return Clss;
}


// UI_Prompt_GoToComments_C UI_Prompt_GoToComments.Default__UI_Prompt_GoToComments_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Prompt_GoToComments_C* UUI_Prompt_GoToComments_C::GetDefaultObj()
{
	static class UUI_Prompt_GoToComments_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Prompt_GoToComments_C*>(UUI_Prompt_GoToComments_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Prompt_GoToComments.UI_Prompt_GoToComments_C.BPGamepadReleased
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        TheKey                                                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FKey UUI_Prompt_GoToComments_C::BPGamepadReleased(bool ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_GoToComments_C", "BPGamepadReleased");

	Params::UUI_Prompt_GoToComments_C_BPGamepadReleased_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Prompt_GoToComments.UI_Prompt_GoToComments_C.BPEscapeClosed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUI_Prompt_GoToComments_C::BPEscapeClosed(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_GoToComments_C", "BPEscapeClosed");

	Params::UUI_Prompt_GoToComments_C_BPEscapeClosed_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Prompt_GoToComments.UI_Prompt_GoToComments_C.BPHighlightWidgetOnStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUI_Prompt_GoToComments_C::BPHighlightWidgetOnStart(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_GoToComments_C", "BPHighlightWidgetOnStart");

	Params::UUI_Prompt_GoToComments_C_BPHighlightWidgetOnStart_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Prompt_GoToComments.UI_Prompt_GoToComments_C.UpdateThemeSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Prompt_GoToComments_C::UpdateThemeSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_GoToComments_C", "UpdateThemeSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_GoToComments.UI_Prompt_GoToComments_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UUI_Prompt_GoToComments_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_GoToComments_C", "Tick");

	Params::UUI_Prompt_GoToComments_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Prompt_GoToComments.UI_Prompt_GoToComments_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Prompt_GoToComments_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_GoToComments_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Prompt_GoToComments.UI_Prompt_GoToComments_C.ExecuteUbergraph_UI_Prompt_GoToComments
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)

int32 UUI_Prompt_GoToComments_C::ExecuteUbergraph_UI_Prompt_GoToComments(const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_GoToComments_C", "ExecuteUbergraph_UI_Prompt_GoToComments");

	Params::UUI_Prompt_GoToComments_C_ExecuteUbergraph_UI_Prompt_GoToComments_Params Parms{};

	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	return Parms.ReturnValue;

}

}


