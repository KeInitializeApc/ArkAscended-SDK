#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_EmptySlot.UI_EmptySlot_C
// (None)

class UClass* UUI_EmptySlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_EmptySlot_C");

	return Clss;
}


// UI_EmptySlot_C UI_EmptySlot.Default__UI_EmptySlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_EmptySlot_C* UUI_EmptySlot_C::GetDefaultObj()
{
	static class UUI_EmptySlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_EmptySlot_C*>(UUI_EmptySlot_C::StaticClass()->DefaultObject);

	return Default;
}

}


