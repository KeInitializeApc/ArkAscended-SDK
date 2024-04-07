#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PingSelectorOnMap.PingSelectorOnMap_C
// (None)

class UClass* UPingSelectorOnMap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PingSelectorOnMap_C");

	return Clss;
}


// PingSelectorOnMap_C PingSelectorOnMap.Default__PingSelectorOnMap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPingSelectorOnMap_C* UPingSelectorOnMap_C::GetDefaultObj()
{
	static class UPingSelectorOnMap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPingSelectorOnMap_C*>(UPingSelectorOnMap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PingSelectorOnMap.PingSelectorOnMap_C.BndEvt__PingSelectorOnMap_GoHere_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPingSelectorOnMap_C::BndEvt__PingSelectorOnMap_GoHere_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PingSelectorOnMap_C", "BndEvt__PingSelectorOnMap_GoHere_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PingSelectorOnMap.PingSelectorOnMap_C.BndEvt__PingSelectorOnMap_Attack_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPingSelectorOnMap_C::BndEvt__PingSelectorOnMap_Attack_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PingSelectorOnMap_C", "BndEvt__PingSelectorOnMap_Attack_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PingSelectorOnMap.PingSelectorOnMap_C.BndEvt__PingSelectorOnMap_Danger_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPingSelectorOnMap_C::BndEvt__PingSelectorOnMap_Danger_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PingSelectorOnMap_C", "BndEvt__PingSelectorOnMap_Danger_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PingSelectorOnMap.PingSelectorOnMap_C.BndEvt__PingSelectorOnMap_Follow_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPingSelectorOnMap_C::BndEvt__PingSelectorOnMap_Follow_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PingSelectorOnMap_C", "BndEvt__PingSelectorOnMap_Follow_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PingSelectorOnMap.PingSelectorOnMap_C.BndEvt__PingSelectorOnMap_RallyPointButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPingSelectorOnMap_C::BndEvt__PingSelectorOnMap_RallyPointButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PingSelectorOnMap_C", "BndEvt__PingSelectorOnMap_RallyPointButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PingSelectorOnMap.PingSelectorOnMap_C.ExecuteUbergraph_PingSelectorOnMap
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)

void UPingSelectorOnMap_C::ExecuteUbergraph_PingSelectorOnMap(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PingSelectorOnMap_C", "ExecuteUbergraph_PingSelectorOnMap");

	Params::UPingSelectorOnMap_C_ExecuteUbergraph_PingSelectorOnMap_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}


// Function PingSelectorOnMap.PingSelectorOnMap_C.CallPing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETeamPingType           PingType                                                         (BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UPingSelectorOnMap_C::CallPing__DelegateSignature(enum class ETeamPingType PingType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PingSelectorOnMap_C", "CallPing__DelegateSignature");

	Params::UPingSelectorOnMap_C_CallPing__DelegateSignature_Params Parms{};

	Parms.PingType = PingType;

	UObject::ProcessEvent(Func, &Parms);

}

}


