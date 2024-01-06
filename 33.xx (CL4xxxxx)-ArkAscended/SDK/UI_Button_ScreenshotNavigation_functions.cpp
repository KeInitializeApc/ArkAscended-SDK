#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Button_ScreenshotNavigation.UI_Button_ScreenshotNavigation_C
// (None)

class UClass* UUI_Button_ScreenshotNavigation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Button_ScreenshotNavigation_C");

	return Clss;
}


// UI_Button_ScreenshotNavigation_C UI_Button_ScreenshotNavigation.Default__UI_Button_ScreenshotNavigation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Button_ScreenshotNavigation_C* UUI_Button_ScreenshotNavigation_C::GetDefaultObj()
{
	static class UUI_Button_ScreenshotNavigation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Button_ScreenshotNavigation_C*>(UUI_Button_ScreenshotNavigation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Button_ScreenshotNavigation.UI_Button_ScreenshotNavigation_C.BndEvt__UI_Button_ScreenshotNavigation_IMG_PrevImage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_ScreenshotNavigation_C::BndEvt__UI_Button_ScreenshotNavigation_IMG_PrevImage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_ScreenshotNavigation_C", "BndEvt__UI_Button_ScreenshotNavigation_IMG_PrevImage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_ScreenshotNavigation.UI_Button_ScreenshotNavigation_C.ExecuteUbergraph_UI_Button_ScreenshotNavigation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, BlueprintVisible, Net, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UUI_Button_ScreenshotNavigation_C::ExecuteUbergraph_UI_Button_ScreenshotNavigation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_ScreenshotNavigation_C", "ExecuteUbergraph_UI_Button_ScreenshotNavigation");

	Params::UUI_Button_ScreenshotNavigation_C_ExecuteUbergraph_UI_Button_ScreenshotNavigation_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_ScreenshotNavigation.UI_Button_ScreenshotNavigation_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_ScreenshotNavigation_C::OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_ScreenshotNavigation_C", "OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


