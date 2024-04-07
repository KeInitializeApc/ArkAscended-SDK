#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CustomButton_HUB_ASA.CustomButton_HUB_ASA_C
// (None)

class UClass* UCustomButton_HUB_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomButton_HUB_ASA_C");

	return Clss;
}


// CustomButton_HUB_ASA_C CustomButton_HUB_ASA.Default__CustomButton_HUB_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCustomButton_HUB_ASA_C* UCustomButton_HUB_ASA_C::GetDefaultObj()
{
	static class UCustomButton_HUB_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomButton_HUB_ASA_C*>(UCustomButton_HUB_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CustomButton_HUB_ASA.CustomButton_HUB_ASA_C.BPSetToggledState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsToggled                                                        (ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool UCustomButton_HUB_ASA_C::BPSetToggledState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomButton_HUB_ASA_C", "BPSetToggledState");

	Params::UCustomButton_HUB_ASA_C_BPSetToggledState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CustomButton_HUB_ASA.CustomButton_HUB_ASA_C.ExecuteUbergraph_CustomButton_HUB_ASA
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_Event_IsToggled                                           (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

void UCustomButton_HUB_ASA_C::ExecuteUbergraph_CustomButton_HUB_ASA(int32* EntryPoint, bool K2Node_Event_IsToggled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomButton_HUB_ASA_C", "ExecuteUbergraph_CustomButton_HUB_ASA");

	Params::UCustomButton_HUB_ASA_C_ExecuteUbergraph_CustomButton_HUB_ASA_Params Parms{};

	Parms.K2Node_Event_IsToggled = K2Node_Event_IsToggled;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}

}


