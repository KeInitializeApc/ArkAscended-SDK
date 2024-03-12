#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Polymer.EngramEntry_Polymer_C
// (None)

class UClass* UEngramEntry_Polymer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Polymer_C");

	return Clss;
}


// EngramEntry_Polymer_C EngramEntry_Polymer.Default__EngramEntry_Polymer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Polymer_C* UEngramEntry_Polymer_C::GetDefaultObj()
{
	static class UEngramEntry_Polymer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Polymer_C*>(UEngramEntry_Polymer_C::StaticClass()->DefaultObject);

	return Default;
}

}


