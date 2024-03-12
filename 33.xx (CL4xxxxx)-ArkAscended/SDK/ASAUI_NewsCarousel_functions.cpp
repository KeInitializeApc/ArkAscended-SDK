#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ASAUI_NewsCarousel.ASAUI_NewsCarousel_C
// (None)

class UClass* UASAUI_NewsCarousel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAUI_NewsCarousel_C");

	return Clss;
}


// ASAUI_NewsCarousel_C ASAUI_NewsCarousel.Default__ASAUI_NewsCarousel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASAUI_NewsCarousel_C* UASAUI_NewsCarousel_C::GetDefaultObj()
{
	static class UASAUI_NewsCarousel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAUI_NewsCarousel_C*>(UASAUI_NewsCarousel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ASAUI_NewsCarousel.ASAUI_NewsCarousel_C.GetColorAndOpacity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLinearColor UASAUI_NewsCarousel_C::GetColorAndOpacity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarousel_C", "GetColorAndOpacity");

	Params::UASAUI_NewsCarousel_C_GetColorAndOpacity_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ASAUI_NewsCarousel.ASAUI_NewsCarousel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)

bool UASAUI_NewsCarousel_C::PreConstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarousel_C", "PreConstruct");

	Params::UASAUI_NewsCarousel_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ASAUI_NewsCarousel.ASAUI_NewsCarousel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UASAUI_NewsCarousel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarousel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_NewsCarousel.ASAUI_NewsCarousel_C.DoClickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      ActionKey                                                        (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      ActionValue                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UASAUI_NewsCarousel_C::DoClickAction(class FString* ActionKey, const class FString& ActionValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarousel_C", "DoClickAction");

	Params::UASAUI_NewsCarousel_C_DoClickAction_Params Parms{};

	Parms.ActionValue = ActionValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionKey != nullptr)
		*ActionKey = std::move(Parms.ActionKey);

}


// Function ASAUI_NewsCarousel.ASAUI_NewsCarousel_C.ExecuteUbergraph_ASAUI_NewsCarousel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class FString                      K2Node_Event_ActionKey                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      K2Node_Event_ActionValue                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int64                              CallFunc_Conv_StringToInt64_ReturnValue                          (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UASAUI_NewsCarousel_C::ExecuteUbergraph_ASAUI_NewsCarousel(int32* EntryPoint, bool CallFunc_EqualEqual_StriStri_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarousel_C", "ExecuteUbergraph_ASAUI_NewsCarousel");

	Params::UASAUI_NewsCarousel_C_ExecuteUbergraph_ASAUI_NewsCarousel_Params Parms{};

	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	return Parms.ReturnValue;

}


// Function ASAUI_NewsCarousel.ASAUI_NewsCarousel_C.OnModDeeplinkClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ModIDRequested                                                   (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

int64 UASAUI_NewsCarousel_C::OnModDeeplinkClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarousel_C", "OnModDeeplinkClicked__DelegateSignature");

	Params::UASAUI_NewsCarousel_C_OnModDeeplinkClicked__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


