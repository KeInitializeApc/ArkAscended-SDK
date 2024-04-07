#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekSecuirtyConsole.EngramEntry_TekSecuirtyConsole_C
// (None)

class UClass* UEngramEntry_TekSecuirtyConsole_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekSecuirtyConsole_C");

	return Clss;
}


// EngramEntry_TekSecuirtyConsole_C EngramEntry_TekSecuirtyConsole.Default__EngramEntry_TekSecuirtyConsole_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekSecuirtyConsole_C* UEngramEntry_TekSecuirtyConsole_C::GetDefaultObj()
{
	static class UEngramEntry_TekSecuirtyConsole_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekSecuirtyConsole_C*>(UEngramEntry_TekSecuirtyConsole_C::StaticClass()->DefaultObject);

	return Default;
}

}


