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
// struct FKey                        TheKey                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UUI_Prompt_GoToComments_C::BPGamepadReleased(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_GoToComments_C", "BPGamepadReleased");

	Params::UUI_Prompt_GoToComments_C_BPGamepadReleased_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_Prompt_GoToComments.UI_Prompt_GoToComments_C.BPEscapeClosed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UUI_Prompt_GoToComments_C::BPEscapeClosed(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_GoToComments_C", "BPEscapeClosed");

	Params::UUI_Prompt_GoToComments_C_BPEscapeClosed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function UI_Prompt_GoToComments.UI_Prompt_GoToComments_C.BPHighlightWidgetOnStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UUI_Prompt_GoToComments_C::BPHighlightWidgetOnStart(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_GoToComments_C", "BPHighlightWidgetOnStart");

	Params::UUI_Prompt_GoToComments_C_BPHighlightWidgetOnStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

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
// struct FGeometry                   MyGeometry                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, GlobalConfig, SubobjectReference)

float UUI_Prompt_GoToComments_C::Tick(const struct FGeometry& MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_GoToComments_C", "Tick");

	Params::UUI_Prompt_GoToComments_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;

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
// int32                              EntryPoint                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

float UUI_Prompt_GoToComments_C::ExecuteUbergraph_UI_Prompt_GoToComments(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Prompt_GoToComments_C", "ExecuteUbergraph_UI_Prompt_GoToComments");

	Params::UUI_Prompt_GoToComments_C_ExecuteUbergraph_UI_Prompt_GoToComments_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	return Parms.ReturnValue;

}

}


