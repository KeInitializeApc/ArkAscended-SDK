#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C
// (None)

class UClass* UASAUI_NewsCarouselTemplate_Entry_CTA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAUI_NewsCarouselTemplate_Entry_CTA_C");

	return Clss;
}


// ASAUI_NewsCarouselTemplate_Entry_CTA_C ASAUI_NewsCarouselTemplate_Entry_CTA.Default__ASAUI_NewsCarouselTemplate_Entry_CTA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASAUI_NewsCarouselTemplate_Entry_CTA_C* UASAUI_NewsCarouselTemplate_Entry_CTA_C::GetDefaultObj()
{
	static class UASAUI_NewsCarouselTemplate_Entry_CTA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAUI_NewsCarouselTemplate_Entry_CTA_C*>(UASAUI_NewsCarouselTemplate_Entry_CTA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C.BlueprintInit
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      RawExtraData                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

class FString UASAUI_NewsCarouselTemplate_Entry_CTA_C::BlueprintInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Entry_CTA_C", "BlueprintInit");

	Params::UASAUI_NewsCarouselTemplate_Entry_CTA_C_BlueprintInit_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C.EntryFocusStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bInstigatedByAutoRollover                                        (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool UASAUI_NewsCarouselTemplate_Entry_CTA_C::EntryFocusStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Entry_CTA_C", "EntryFocusStart");

	Params::UASAUI_NewsCarouselTemplate_Entry_CTA_C_EntryFocusStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C.EntryFocusEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bInstigatedByAutoRollover                                        (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool UASAUI_NewsCarouselTemplate_Entry_CTA_C::EntryFocusEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Entry_CTA_C", "EntryFocusEnd");

	Params::UASAUI_NewsCarouselTemplate_Entry_CTA_C_EntryFocusEnd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C.EntryFocusTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UASAUI_NewsCarouselTemplate_Entry_CTA_C::EntryFocusTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Entry_CTA_C", "EntryFocusTick");

	Params::UASAUI_NewsCarouselTemplate_Entry_CTA_C_EntryFocusTick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C.ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_CTA
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class FString                      K2Node_Event_RawExtraData                                        (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_bInstigatedByAutoRollover_1                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_Event_bInstigatedByAutoRollover                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// float                              K2Node_Event_DeltaTime                                           (Edit, BlueprintVisible, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)

bool UASAUI_NewsCarouselTemplate_Entry_CTA_C::ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_CTA(int32* EntryPoint, float K2Node_Event_DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Entry_CTA_C", "ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_CTA");

	Params::UASAUI_NewsCarouselTemplate_Entry_CTA_C_ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_CTA_Params Parms{};

	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	return Parms.ReturnValue;

}

}


