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
// struct FLinearColor                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UASAUI_NewsCarousel_C::GetColorAndOpacity(const struct FLinearColor& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarousel_C", "GetColorAndOpacity");

	Params::UASAUI_NewsCarousel_C_GetColorAndOpacity_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUI_NewsCarousel.ASAUI_NewsCarousel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UASAUI_NewsCarousel_C::PreConstruct(bool* IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarousel_C", "PreConstruct");

	Params::UASAUI_NewsCarousel_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDesignTime != nullptr)
		*IsDesignTime = Parms.IsDesignTime;

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
// class FString                      ActionKey                                                        (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      ActionValue                                                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UASAUI_NewsCarousel_C::DoClickAction(const class FString& ActionValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarousel_C", "DoClickAction");

	Params::UASAUI_NewsCarousel_C_DoClickAction_Params Parms{};

	Parms.ActionValue = ActionValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ASAUI_NewsCarousel.ASAUI_NewsCarousel_C.ExecuteUbergraph_ASAUI_NewsCarousel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class FString                      K2Node_Event_ActionKey                                           (Edit, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// class FString                      K2Node_Event_ActionValue                                         (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// int64                              CallFunc_Conv_StringToInt64_ReturnValue                          (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)

bool UASAUI_NewsCarousel_C::ExecuteUbergraph_ASAUI_NewsCarousel(class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_NewsCarousel_C", "ExecuteUbergraph_ASAUI_NewsCarousel");

	Params::UASAUI_NewsCarousel_C_ExecuteUbergraph_ASAUI_NewsCarousel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_CreateDynamicMaterialInstance_ReturnValue != nullptr)
		*CallFunc_CreateDynamicMaterialInstance_ReturnValue = Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	return Parms.ReturnValue;

}


// Function ASAUI_NewsCarousel.ASAUI_NewsCarousel_C.OnModDeeplinkClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ModIDRequested                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

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


