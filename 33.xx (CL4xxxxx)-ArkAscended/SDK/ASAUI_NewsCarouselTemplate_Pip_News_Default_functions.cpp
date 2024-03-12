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
// bool                               bInstigatedByAutoRollover                                        (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool UASAUI_NewsCarouselTemplate_Pip_News_Default_C::EntryFocusStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Pip_News_Default_C", "EntryFocusStart");

	Params::UASAUI_NewsCarouselTemplate_Pip_News_Default_C_EntryFocusStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ASAUI_NewsCarouselTemplate_Pip_News_Default.ASAUI_NewsCarouselTemplate_Pip_News_Default_C.EntryFocusEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bInstigatedByAutoRollover                                        (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool UASAUI_NewsCarouselTemplate_Pip_News_Default_C::EntryFocusEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Pip_News_Default_C", "EntryFocusEnd");

	Params::UASAUI_NewsCarouselTemplate_Pip_News_Default_C_EntryFocusEnd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ASAUI_NewsCarouselTemplate_Pip_News_Default.ASAUI_NewsCarouselTemplate_Pip_News_Default_C.ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Pip_News_Default
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_Event_bInstigatedByAutoRollover_1                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_bInstigatedByAutoRollover                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

class UUMGSequencePlayer* UASAUI_NewsCarouselTemplate_Pip_News_Default_C::ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Pip_News_Default(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarouselTemplate_Pip_News_Default_C", "ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Pip_News_Default");

	Params::UASAUI_NewsCarouselTemplate_Pip_News_Default_C_ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Pip_News_Default_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	return Parms.ReturnValue;

}

}


