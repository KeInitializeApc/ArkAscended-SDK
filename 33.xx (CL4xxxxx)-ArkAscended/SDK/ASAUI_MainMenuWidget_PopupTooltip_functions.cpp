#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ASAUI_MainMenuWidget_PopupTooltip.ASAUI_MainMenuWidget_PopupTooltip_C
// (None)

class UClass* UASAUI_MainMenuWidget_PopupTooltip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAUI_MainMenuWidget_PopupTooltip_C");

	return Clss;
}


// ASAUI_MainMenuWidget_PopupTooltip_C ASAUI_MainMenuWidget_PopupTooltip.Default__ASAUI_MainMenuWidget_PopupTooltip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASAUI_MainMenuWidget_PopupTooltip_C* UASAUI_MainMenuWidget_PopupTooltip_C::GetDefaultObj()
{
	static class UASAUI_MainMenuWidget_PopupTooltip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAUI_MainMenuWidget_PopupTooltip_C*>(UASAUI_MainMenuWidget_PopupTooltip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ASAUI_MainMenuWidget_PopupTooltip.ASAUI_MainMenuWidget_PopupTooltip_C.show
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_PopupTooltip_C::Show()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_PopupTooltip_C", "show");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_PopupTooltip.ASAUI_MainMenuWidget_PopupTooltip_C.Hide
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_PopupTooltip_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_PopupTooltip_C", "Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_PopupTooltip.ASAUI_MainMenuWidget_PopupTooltip_C.ExecuteUbergraph_ASAUI_MainMenuWidget_PopupTooltip
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, BlueprintVisible, Net, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (Edit, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UASAUI_MainMenuWidget_PopupTooltip_C::ExecuteUbergraph_ASAUI_MainMenuWidget_PopupTooltip(int32 EntryPoint, class UUMGSequencePlayer** CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer** CallFunc_PlayAnimationReverse_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_PopupTooltip_C", "ExecuteUbergraph_ASAUI_MainMenuWidget_PopupTooltip");

	Params::UASAUI_MainMenuWidget_PopupTooltip_C_ExecuteUbergraph_ASAUI_MainMenuWidget_PopupTooltip_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_PlayAnimationForward_ReturnValue != nullptr)
		*CallFunc_PlayAnimationForward_ReturnValue = Parms.CallFunc_PlayAnimationForward_ReturnValue;

	if (CallFunc_PlayAnimationReverse_ReturnValue != nullptr)
		*CallFunc_PlayAnimationReverse_ReturnValue = Parms.CallFunc_PlayAnimationReverse_ReturnValue;

}

}


