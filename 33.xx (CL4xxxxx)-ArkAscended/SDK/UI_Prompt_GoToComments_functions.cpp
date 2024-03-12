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
// struct FKey                        TheKey                                                           (ExportObject, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

bool UUI_Prompt_GoToComments_C::BPGamepadReleased(struct FKey* TheKey, bool* CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_GoToComments_C", "BPGamepadReleased");

	Params::UUI_Prompt_GoToComments_C_BPGamepadReleased_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TheKey != nullptr)
		*TheKey = std::move(Parms.TheKey);

	if (CallFunc_EqualEqual_KeyKey_ReturnValue != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_Prompt_GoToComments.UI_Prompt_GoToComments_C.BPEscapeClosed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UUI_Prompt_GoToComments_C::BPEscapeClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_GoToComments_C", "BPEscapeClosed");

	Params::UUI_Prompt_GoToComments_C_BPEscapeClosed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Prompt_GoToComments.UI_Prompt_GoToComments_C.BPHighlightWidgetOnStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UUI_Prompt_GoToComments_C::BPHighlightWidgetOnStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_GoToComments_C", "BPHighlightWidgetOnStart");

	Params::UUI_Prompt_GoToComments_C_BPHighlightWidgetOnStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UUI_Prompt_GoToComments_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_GoToComments_C", "Tick");

	Params::UUI_Prompt_GoToComments_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

void UUI_Prompt_GoToComments_C::ExecuteUbergraph_UI_Prompt_GoToComments(int32* EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_GoToComments_C", "ExecuteUbergraph_UI_Prompt_GoToComments");

	Params::UUI_Prompt_GoToComments_C_ExecuteUbergraph_UI_Prompt_GoToComments_Params Parms{};

	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}

}


