#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ASAUI_NewsCarousel_Nav_Right.ASAUI_NewsCarousel_Nav_Right_C
// (None)

class UClass* UASAUI_NewsCarousel_Nav_Right_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAUI_NewsCarousel_Nav_Right_C");

	return Clss;
}


// ASAUI_NewsCarousel_Nav_Right_C ASAUI_NewsCarousel_Nav_Right.Default__ASAUI_NewsCarousel_Nav_Right_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASAUI_NewsCarousel_Nav_Right_C* UASAUI_NewsCarousel_Nav_Right_C::GetDefaultObj()
{
	static class UASAUI_NewsCarousel_Nav_Right_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAUI_NewsCarousel_Nav_Right_C*>(UASAUI_NewsCarousel_Nav_Right_C::StaticClass()->DefaultObject);

	return Default;
}

}


