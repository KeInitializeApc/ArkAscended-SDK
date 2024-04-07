#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_HoverSkiff.EngramEntry_HoverSkiff_C
// (None)

class UClass* UEngramEntry_HoverSkiff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_HoverSkiff_C");

	return Clss;
}


// EngramEntry_HoverSkiff_C EngramEntry_HoverSkiff.Default__EngramEntry_HoverSkiff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_HoverSkiff_C* UEngramEntry_HoverSkiff_C::GetDefaultObj()
{
	static class UEngramEntry_HoverSkiff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_HoverSkiff_C*>(UEngramEntry_HoverSkiff_C::StaticClass()->DefaultObject);

	return Default;
}

}


