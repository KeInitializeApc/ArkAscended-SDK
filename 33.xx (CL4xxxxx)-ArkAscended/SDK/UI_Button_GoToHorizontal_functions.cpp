#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Button_GoToHorizontal.UI_Button_GoToHorizontal_C
// (None)

class UClass* UUI_Button_GoToHorizontal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Button_GoToHorizontal_C");

	return Clss;
}


// UI_Button_GoToHorizontal_C UI_Button_GoToHorizontal.Default__UI_Button_GoToHorizontal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Button_GoToHorizontal_C* UUI_Button_GoToHorizontal_C::GetDefaultObj()
{
	static class UUI_Button_GoToHorizontal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Button_GoToHorizontal_C*>(UUI_Button_GoToHorizontal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Button_GoToHorizontal.UI_Button_GoToHorizontal_C.BndEvt__UI_Button_ScreenshotNavigation_IMG_PrevImage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_GoToHorizontal_C::BndEvt__UI_Button_ScreenshotNavigation_IMG_PrevImage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_GoToHorizontal_C", "BndEvt__UI_Button_ScreenshotNavigation_IMG_PrevImage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_GoToHorizontal.UI_Button_GoToHorizontal_C.ExecuteUbergraph_UI_Button_GoToHorizontal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UUI_Button_GoToHorizontal_C::ExecuteUbergraph_UI_Button_GoToHorizontal(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_GoToHorizontal_C", "ExecuteUbergraph_UI_Button_GoToHorizontal");

	Params::UUI_Button_GoToHorizontal_C_ExecuteUbergraph_UI_Button_GoToHorizontal_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}


// Function UI_Button_GoToHorizontal.UI_Button_GoToHorizontal_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_GoToHorizontal_C::OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_GoToHorizontal_C", "OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


