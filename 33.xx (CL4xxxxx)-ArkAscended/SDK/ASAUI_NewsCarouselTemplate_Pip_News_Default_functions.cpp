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
// bool                               bInstigatedByAutoRollover                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// bool                               bInstigatedByAutoRollover                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_Event_bInstigatedByAutoRollover_1                         (Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_bInstigatedByAutoRollover                           (Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UASAUI_NewsCarouselTemplate_Pip_News_Default_C::ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Pip_News_Default(class UUMGSequencePlayer** CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer** CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Pip_News_Default_C", "ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Pip_News_Default");

	Params::UASAUI_NewsCarouselTemplate_Pip_News_Default_C_ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Pip_News_Default_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_PlayAnimationReverse_ReturnValue != nullptr)
		*CallFunc_PlayAnimationReverse_ReturnValue = Parms.CallFunc_PlayAnimationReverse_ReturnValue;

	if (CallFunc_PlayAnimationForward_ReturnValue != nullptr)
		*CallFunc_PlayAnimationForward_ReturnValue = Parms.CallFunc_PlayAnimationForward_ReturnValue;

	return Parms.ReturnValue;

}

}


