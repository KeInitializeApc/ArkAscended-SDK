#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ClampSliderPercentWIdget.ClampSliderPercentWIdget_C
// (None)

class UClass* UClampSliderPercentWIdget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClampSliderPercentWIdget_C");

	return Clss;
}


// ClampSliderPercentWIdget_C ClampSliderPercentWIdget.Default__ClampSliderPercentWIdget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UClampSliderPercentWIdget_C* UClampSliderPercentWIdget_C::GetDefaultObj()
{
	static class UClampSliderPercentWIdget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UClampSliderPercentWIdget_C*>(UClampSliderPercentWIdget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ClampSliderPercentWIdget.ClampSliderPercentWIdget_C.SetEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (Edit, ConstParm, ExportObject, Parm, Transient, Config, DisableEditOnInstance)

void UClampSliderPercentWIdget_C::SetEnabled(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClampSliderPercentWIdget_C", "SetEnabled");

	Params::UClampSliderPercentWIdget_C_SetEnabled_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ClampSliderPercentWIdget.ClampSliderPercentWIdget_C.ExecuteUbergraph_ClampSliderPercentWIdget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_CustomEvent_Enable                                        (BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FLinearColor UClampSliderPercentWIdget_C::ExecuteUbergraph_ClampSliderPercentWIdget(int32* EntryPoint, bool K2Node_CustomEvent_Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClampSliderPercentWIdget_C", "ExecuteUbergraph_ClampSliderPercentWIdget");

	Params::UClampSliderPercentWIdget_C_ExecuteUbergraph_ClampSliderPercentWIdget_Params Parms{};

	Parms.K2Node_CustomEvent_Enable = K2Node_CustomEvent_Enable;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	return Parms.ReturnValue;

}

}


