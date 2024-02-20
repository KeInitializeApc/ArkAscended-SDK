#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_DownloadSize.UI_DownloadSize_C
// (None)

class UClass* UUI_DownloadSize_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_DownloadSize_C");

	return Clss;
}


// UI_DownloadSize_C UI_DownloadSize.Default__UI_DownloadSize_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_DownloadSize_C* UUI_DownloadSize_C::GetDefaultObj()
{
	static class UUI_DownloadSize_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_DownloadSize_C*>(UUI_DownloadSize_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_DownloadSize.UI_DownloadSize_C.SetSizeText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

void UUI_DownloadSize_C::SetSizeText(class FText* InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_DownloadSize_C", "SetSizeText");

	Params::UUI_DownloadSize_C_SetSizeText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InText != nullptr)
		*InText = Parms.InText;

}

}


