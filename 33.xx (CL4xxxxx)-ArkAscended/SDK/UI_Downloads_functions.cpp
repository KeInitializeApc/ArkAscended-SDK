#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Downloads.UI_Downloads_C
// (None)

class UClass* UUI_Downloads_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Downloads_C");

	return Clss;
}


// UI_Downloads_C UI_Downloads.Default__UI_Downloads_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Downloads_C* UUI_Downloads_C::GetDefaultObj()
{
	static class UUI_Downloads_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Downloads_C*>(UUI_Downloads_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Downloads.UI_Downloads_C.SetNumberOfDownloadsText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UUI_Downloads_C::SetNumberOfDownloadsText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Downloads_C", "SetNumberOfDownloadsText");

	Params::UUI_Downloads_C_SetNumberOfDownloadsText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


