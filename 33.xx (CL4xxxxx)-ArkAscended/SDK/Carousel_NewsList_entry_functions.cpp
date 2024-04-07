#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Carousel_NewsList_entry.Carousel_NewsList_entry_C
// (None)

class UClass* UCarousel_NewsList_entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Carousel_NewsList_entry_C");

	return Clss;
}


// Carousel_NewsList_entry_C Carousel_NewsList_entry.Default__Carousel_NewsList_entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCarousel_NewsList_entry_C* UCarousel_NewsList_entry_C::GetDefaultObj()
{
	static class UCarousel_NewsList_entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCarousel_NewsList_entry_C*>(UCarousel_NewsList_entry_C::StaticClass()->DefaultObject);

	return Default;
}

}


