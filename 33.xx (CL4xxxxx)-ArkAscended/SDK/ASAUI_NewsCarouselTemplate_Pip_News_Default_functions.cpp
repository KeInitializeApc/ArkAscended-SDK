#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ASAUI_NewsCarouselTemplate_Pip_News_Default.ASAUI_NewsCarouselTemplate_Pip_News_Default_C
// (None)

class UClass* UASAUI_NewsCarouselTemplate_Pip_News_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAUI_NewsCarouselTemplate_Pip_News_Default_C");

	return Clss;
}


// ASAUI_NewsCarouselTemplate_Pip_News_Default_C ASAUI_NewsCarouselTemplate_Pip_News_Default.Default__ASAUI_NewsCarouselTemplate_Pip_News_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASAUI_NewsCarouselTemplate_Pip_News_Default_C* UASAUI_NewsCarouselTemplate_Pip_News_Default_C::GetDefaultObj()
{
	static class UASAUI_NewsCarouselTemplate_Pip_News_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAUI_NewsCarouselTemplate_Pip_News_Default_C*>(UASAUI_NewsCarouselTemplate_Pip_News_Default_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ASAUI_NewsCarouselTemplate_Pip_News_Default.ASAUI_NewsCarouselTemplate_Pip_News_Default_C.EntryFocusStart
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bInstigatedByAutoRollover                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UASAUI_NewsCarouselTemplate_Pip_News_Default_C::EntryFocusStart(bool* bInstigatedByAutoRollover)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Pip_News_Default_C", "EntryFocusStart");

	Params::UASAUI_NewsCarouselTemplate_Pip_News_Default_C_EntryFocusStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bInstigatedByAutoRollover != nullptr)
		*bInstigatedByAutoRollover = Parms.bInstigatedByAutoRollover;

}


// Function ASAUI_NewsCarouselTemplate_Pip_News_Default.ASAUI_NewsCarouselTemplate_Pip_News_Default_C.EntryFocusEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bInstigatedByAutoRollover                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

void UASAUI_NewsCarouselTemplate_Pip_News_Default_C::EntryFocusEnd(bool* bInstigatedByAutoRollover)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Pip_News_Default_C", "EntryFocusEnd");

	Params::UASAUI_NewsCarouselTemplate_Pip_News_Default_C_EntryFocusEnd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bInstigatedByAutoRollover != nullptr)
		*bInstigatedByAutoRollover = Parms.bInstigatedByAutoRollover;

}


// Function ASAUI_NewsCarouselTemplate_Pip_News_Default.ASAUI_NewsCarouselTemplate_Pip_News_Default_C.ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Pip_News_Default
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               K2Node_Event_bInstigatedByAutoRollover_1                         (Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_bInstigatedByAutoRollover                           (Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class UUMGSequencePlayer* UASAUI_NewsCarouselTemplate_Pip_News_Default_C::ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Pip_News_Default()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Pip_News_Default_C", "ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Pip_News_Default");

	Params::UASAUI_NewsCarouselTemplate_Pip_News_Default_C_ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Pip_News_Default_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


