#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ASAUI_NewsCarousel_Nav_Left.ASAUI_NewsCarousel_Nav_Left_C
// (None)

class UClass* UASAUI_NewsCarousel_Nav_Left_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAUI_NewsCarousel_Nav_Left_C");

	return Clss;
}


// ASAUI_NewsCarousel_Nav_Left_C ASAUI_NewsCarousel_Nav_Left.Default__ASAUI_NewsCarousel_Nav_Left_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASAUI_NewsCarousel_Nav_Left_C* UASAUI_NewsCarousel_Nav_Left_C::GetDefaultObj()
{
	static class UASAUI_NewsCarousel_Nav_Left_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAUI_NewsCarousel_Nav_Left_C*>(UASAUI_NewsCarousel_Nav_Left_C::StaticClass()->DefaultObject);

	return Default;
}

}


