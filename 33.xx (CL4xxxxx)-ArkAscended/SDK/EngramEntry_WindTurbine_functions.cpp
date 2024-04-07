#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WindTurbine.EngramEntry_WindTurbine_C
// (None)

class UClass* UEngramEntry_WindTurbine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WindTurbine_C");

	return Clss;
}


// EngramEntry_WindTurbine_C EngramEntry_WindTurbine.Default__EngramEntry_WindTurbine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WindTurbine_C* UEngramEntry_WindTurbine_C::GetDefaultObj()
{
	static class UEngramEntry_WindTurbine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WindTurbine_C*>(UEngramEntry_WindTurbine_C::StaticClass()->DefaultObject);

	return Default;
}

}


