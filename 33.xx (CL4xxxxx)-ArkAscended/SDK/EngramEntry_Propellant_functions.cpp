#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Propellant.EngramEntry_Propellant_C
// (None)

class UClass* UEngramEntry_Propellant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Propellant_C");

	return Clss;
}


// EngramEntry_Propellant_C EngramEntry_Propellant.Default__EngramEntry_Propellant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Propellant_C* UEngramEntry_Propellant_C::GetDefaultObj()
{
	static class UEngramEntry_Propellant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Propellant_C*>(UEngramEntry_Propellant_C::StaticClass()->DefaultObject);

	return Default;
}

}


