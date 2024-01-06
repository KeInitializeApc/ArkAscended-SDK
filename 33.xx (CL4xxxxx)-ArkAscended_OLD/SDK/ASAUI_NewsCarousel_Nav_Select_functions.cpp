#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ASAUI_NewsCarousel_Nav_Select.ASAUI_NewsCarousel_Nav_Select_C
// (None)

class UClass* UASAUI_NewsCarousel_Nav_Select_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAUI_NewsCarousel_Nav_Select_C");

	return Clss;
}


// ASAUI_NewsCarousel_Nav_Select_C ASAUI_NewsCarousel_Nav_Select.Default__ASAUI_NewsCarousel_Nav_Select_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASAUI_NewsCarousel_Nav_Select_C* UASAUI_NewsCarousel_Nav_Select_C::GetDefaultObj()
{
	static class UASAUI_NewsCarousel_Nav_Select_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAUI_NewsCarousel_Nav_Select_C*>(UASAUI_NewsCarousel_Nav_Select_C::StaticClass()->DefaultObject);

	return Default;
}

}


