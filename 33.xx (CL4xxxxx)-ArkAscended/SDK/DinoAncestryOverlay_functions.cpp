#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DinoAncestryOverlay.DinoAncestryOverlay_C
// (None)

class UClass* UDinoAncestryOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoAncestryOverlay_C");

	return Clss;
}


// DinoAncestryOverlay_C DinoAncestryOverlay.Default__DinoAncestryOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoAncestryOverlay_C* UDinoAncestryOverlay_C::GetDefaultObj()
{
	static class UDinoAncestryOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoAncestryOverlay_C*>(UDinoAncestryOverlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


