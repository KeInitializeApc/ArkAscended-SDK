#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_PaginationLeftRight.UI_PaginationLeftRight_C
// (None)

class UClass* UUI_PaginationLeftRight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_PaginationLeftRight_C");

	return Clss;
}


// UI_PaginationLeftRight_C UI_PaginationLeftRight.Default__UI_PaginationLeftRight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_PaginationLeftRight_C* UUI_PaginationLeftRight_C::GetDefaultObj()
{
	static class UUI_PaginationLeftRight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_PaginationLeftRight_C*>(UUI_PaginationLeftRight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_PaginationLeftRight.UI_PaginationLeftRight_C.BndEvt__UI_PaginationLeftRight_Button_PrevPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_PaginationLeftRight_C::BndEvt__UI_PaginationLeftRight_Button_PrevPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PaginationLeftRight_C", "BndEvt__UI_PaginationLeftRight_Button_PrevPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PaginationLeftRight.UI_PaginationLeftRight_C.ExecuteUbergraph_UI_PaginationLeftRight
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, BlueprintVisible, Net, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UUI_PaginationLeftRight_C::ExecuteUbergraph_UI_PaginationLeftRight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PaginationLeftRight_C", "ExecuteUbergraph_UI_PaginationLeftRight");

	Params::UUI_PaginationLeftRight_C_ExecuteUbergraph_UI_PaginationLeftRight_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PaginationLeftRight.UI_PaginationLeftRight_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_PaginationLeftRight_C::OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PaginationLeftRight_C", "OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


