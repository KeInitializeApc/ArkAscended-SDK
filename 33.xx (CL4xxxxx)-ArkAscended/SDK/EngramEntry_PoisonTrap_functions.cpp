#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_PoisonTrap.EngramEntry_PoisonTrap_C
// (None)

class UClass* UEngramEntry_PoisonTrap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_PoisonTrap_C");

	return Clss;
}


// EngramEntry_PoisonTrap_C EngramEntry_PoisonTrap.Default__EngramEntry_PoisonTrap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_PoisonTrap_C* UEngramEntry_PoisonTrap_C::GetDefaultObj()
{
	static class UEngramEntry_PoisonTrap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_PoisonTrap_C*>(UEngramEntry_PoisonTrap_C::StaticClass()->DefaultObject);

	return Default;
}

}


