#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StatWidget.StatWidget_C
// (None)

class UClass* UStatWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatWidget_C");

	return Clss;
}


// StatWidget_C StatWidget.Default__StatWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatWidget_C* UStatWidget_C::GetDefaultObj()
{
	static class UStatWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatWidget_C*>(UStatWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StatWidget.StatWidget_C.BndEvt__StatWidget_UpgradeButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UStatWidget_C::BndEvt__StatWidget_UpgradeButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatWidget_C", "BndEvt__StatWidget_UpgradeButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatWidget.StatWidget_C.ExecuteUbergraph_StatWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)

void UStatWidget_C::ExecuteUbergraph_StatWidget(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatWidget_C", "ExecuteUbergraph_StatWidget");

	Params::UStatWidget_C_ExecuteUbergraph_StatWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}

}


