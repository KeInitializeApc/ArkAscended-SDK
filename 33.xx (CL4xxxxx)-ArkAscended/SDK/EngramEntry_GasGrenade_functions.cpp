#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_GasGrenade.EngramEntry_GasGrenade_C
// (None)

class UClass* UEngramEntry_GasGrenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_GasGrenade_C");

	return Clss;
}


// EngramEntry_GasGrenade_C EngramEntry_GasGrenade.Default__EngramEntry_GasGrenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_GasGrenade_C* UEngramEntry_GasGrenade_C::GetDefaultObj()
{
	static class UEngramEntry_GasGrenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_GasGrenade_C*>(UEngramEntry_GasGrenade_C::StaticClass()->DefaultObject);

	return Default;
}

}


