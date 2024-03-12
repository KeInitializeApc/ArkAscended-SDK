#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StatsPanel.StatsPanel_C
// (None)

class UClass* UStatsPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatsPanel_C");

	return Clss;
}


// StatsPanel_C StatsPanel.Default__StatsPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatsPanel_C* UStatsPanel_C::GetDefaultObj()
{
	static class UStatsPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatsPanel_C*>(UStatsPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StatsPanel.StatsPanel_C.OnButtonHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStatsPanel_C::OnButtonHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatsPanel_C", "OnButtonHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatsPanel.StatsPanel_C.BndEvt__StatsPanel_PlayerStatsButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UStatsPanel_C::BndEvt__StatsPanel_PlayerStatsButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatsPanel_C", "BndEvt__StatsPanel_PlayerStatsButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatsPanel.StatsPanel_C.BndEvt__StatsPanel_RemoteStatsButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UStatsPanel_C::BndEvt__StatsPanel_RemoteStatsButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatsPanel_C", "BndEvt__StatsPanel_RemoteStatsButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatsPanel.StatsPanel_C.ExecuteUbergraph_StatsPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)

void UStatsPanel_C::ExecuteUbergraph_StatsPanel(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatsPanel_C", "ExecuteUbergraph_StatsPanel");

	Params::UStatsPanel_C_ExecuteUbergraph_StatsPanel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}

}


