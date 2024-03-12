#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ClusterListSessions.ClusterListSessions_C
// (None)

class UClass* UClusterListSessions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClusterListSessions_C");

	return Clss;
}


// ClusterListSessions_C ClusterListSessions.Default__ClusterListSessions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UClusterListSessions_C* UClusterListSessions_C::GetDefaultObj()
{
	static class UClusterListSessions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UClusterListSessions_C*>(UClusterListSessions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ClusterListSessions.ClusterListSessions_C.BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

void UClusterListSessions_C::BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClusterListSessions_C", "BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UClusterListSessions_C_BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsChecked != nullptr)
		*bIsChecked = Parms.bIsChecked;

}


// Function ClusterListSessions.ClusterListSessions_C.BndEvt__ClusterListSessions_SessionOrderName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UClusterListSessions_C::BndEvt__ClusterListSessions_SessionOrderName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClusterListSessions_C", "BndEvt__ClusterListSessions_SessionOrderName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClusterListSessions.ClusterListSessions_C.BndEvt__ClusterListSessions_PlayerOrder_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UClusterListSessions_C::BndEvt__ClusterListSessions_PlayerOrder_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClusterListSessions_C", "BndEvt__ClusterListSessions_PlayerOrder_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClusterListSessions.ClusterListSessions_C.BndEvt__ClusterListSessions_DayOrder_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UClusterListSessions_C::BndEvt__ClusterListSessions_DayOrder_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClusterListSessions_C", "BndEvt__ClusterListSessions_DayOrder_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClusterListSessions.ClusterListSessions_C.BndEvt__ClusterListSessions_PingOrder_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UClusterListSessions_C::BndEvt__ClusterListSessions_PingOrder_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClusterListSessions_C", "BndEvt__ClusterListSessions_PingOrder_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ClusterListSessions.ClusterListSessions_C.ExecuteUbergraph_ClusterListSessions
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (Edit, ExportObject, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)

void UClusterListSessions_C::ExecuteUbergraph_ClusterListSessions(int32* EntryPoint, bool K2Node_ComponentBoundEvent_bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClusterListSessions_C", "ExecuteUbergraph_ClusterListSessions");

	Params::UClusterListSessions_C_ExecuteUbergraph_ClusterListSessions_Params Parms{};

	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}

}


