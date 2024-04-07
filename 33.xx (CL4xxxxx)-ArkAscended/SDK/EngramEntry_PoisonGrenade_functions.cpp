#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_PoisonGrenade.EngramEntry_PoisonGrenade_C
// (None)

class UClass* UEngramEntry_PoisonGrenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_PoisonGrenade_C");

	return Clss;
}


// EngramEntry_PoisonGrenade_C EngramEntry_PoisonGrenade.Default__EngramEntry_PoisonGrenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_PoisonGrenade_C* UEngramEntry_PoisonGrenade_C::GetDefaultObj()
{
	static class UEngramEntry_PoisonGrenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_PoisonGrenade_C*>(UEngramEntry_PoisonGrenade_C::StaticClass()->DefaultObject);

	return Default;
}

}


