#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DinoHUDStatusBarsWidget.DinoHUDStatusBarsWidget_C
// (None)

class UClass* UDinoHUDStatusBarsWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoHUDStatusBarsWidget_C");

	return Clss;
}


// DinoHUDStatusBarsWidget_C DinoHUDStatusBarsWidget.Default__DinoHUDStatusBarsWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoHUDStatusBarsWidget_C* UDinoHUDStatusBarsWidget_C::GetDefaultObj()
{
	static class UDinoHUDStatusBarsWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoHUDStatusBarsWidget_C*>(UDinoHUDStatusBarsWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DinoHUDStatusBarsWidget.DinoHUDStatusBarsWidget_C.IsCurrentlyActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               NewParam                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (DisableEditOnInstance, SubobjectReference)

bool UDinoHUDStatusBarsWidget_C::IsCurrentlyActive(bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DinoHUDStatusBarsWidget_C", "IsCurrentlyActive");

	Params::UDinoHUDStatusBarsWidget_C_IsCurrentlyActive_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


