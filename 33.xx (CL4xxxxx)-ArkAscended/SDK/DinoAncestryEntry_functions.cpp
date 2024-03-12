#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DinoAncestryEntry.DinoAncestryEntry_C
// (None)

class UClass* UDinoAncestryEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoAncestryEntry_C");

	return Clss;
}


// DinoAncestryEntry_C DinoAncestryEntry.Default__DinoAncestryEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoAncestryEntry_C* UDinoAncestryEntry_C::GetDefaultObj()
{
	static class UDinoAncestryEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoAncestryEntry_C*>(UDinoAncestryEntry_C::StaticClass()->DefaultObject);

	return Default;
}

}


