#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PinEntryUI.PinEntryUI_C
// (None)

class UClass* UPinEntryUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PinEntryUI_C");

	return Clss;
}


// PinEntryUI_C PinEntryUI.Default__PinEntryUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPinEntryUI_C* UPinEntryUI_C::GetDefaultObj()
{
	static class UPinEntryUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPinEntryUI_C*>(UPinEntryUI_C::StaticClass()->DefaultObject);

	return Default;
}

}


