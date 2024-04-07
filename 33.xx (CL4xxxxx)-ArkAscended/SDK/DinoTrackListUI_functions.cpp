#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DinoTrackListUI.DinoTrackListUI_C
// (None)

class UClass* UDinoTrackListUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoTrackListUI_C");

	return Clss;
}


// DinoTrackListUI_C DinoTrackListUI.Default__DinoTrackListUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoTrackListUI_C* UDinoTrackListUI_C::GetDefaultObj()
{
	static class UDinoTrackListUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoTrackListUI_C*>(UDinoTrackListUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DinoTrackListUI.DinoTrackListUI_C.BndEvt__DinoTrackListUI_GoToDinoGroups_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UDinoTrackListUI_C::BndEvt__DinoTrackListUI_GoToDinoGroups_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DinoTrackListUI_C", "BndEvt__DinoTrackListUI_GoToDinoGroups_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DinoTrackListUI.DinoTrackListUI_C.BndEvt__DinoTrackListUI_GoToTrackingList_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UDinoTrackListUI_C::BndEvt__DinoTrackListUI_GoToTrackingList_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DinoTrackListUI_C", "BndEvt__DinoTrackListUI_GoToTrackingList_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DinoTrackListUI.DinoTrackListUI_C.ExecuteUbergraph_DinoTrackListUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)

struct FSlateColor UDinoTrackListUI_C::ExecuteUbergraph_DinoTrackListUI(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DinoTrackListUI_C", "ExecuteUbergraph_DinoTrackListUI");

	Params::UDinoTrackListUI_C_ExecuteUbergraph_DinoTrackListUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	return Parms.ReturnValue;

}

}


