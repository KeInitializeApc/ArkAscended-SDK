#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_BasePage.UI_BasePage_C
// (None)

class UClass* UUI_BasePage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_BasePage_C");

	return Clss;
}


// UI_BasePage_C UI_BasePage.Default__UI_BasePage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_BasePage_C* UUI_BasePage_C::GetDefaultObj()
{
	static class UUI_BasePage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_BasePage_C*>(UUI_BasePage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_BasePage.UI_BasePage_C.ReloadPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_BasePage_C::ReloadPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BasePage_C", "ReloadPage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BasePage.UI_BasePage_C.ConstructPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_BasePage_C::ConstructPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BasePage_C", "ConstructPage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BasePage.UI_BasePage_C.ExecuteUbergraph_UI_BasePage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UUI_BasePage_C::ExecuteUbergraph_UI_BasePage(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BasePage_C", "ExecuteUbergraph_UI_BasePage");

	Params::UUI_BasePage_C_ExecuteUbergraph_UI_BasePage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}

}


