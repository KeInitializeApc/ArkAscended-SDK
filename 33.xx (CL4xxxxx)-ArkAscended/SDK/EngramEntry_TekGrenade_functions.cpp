#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekGrenade.EngramEntry_TekGrenade_C
// (None)

class UClass* UEngramEntry_TekGrenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekGrenade_C");

	return Clss;
}


// EngramEntry_TekGrenade_C EngramEntry_TekGrenade.Default__EngramEntry_TekGrenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekGrenade_C* UEngramEntry_TekGrenade_C::GetDefaultObj()
{
	static class UEngramEntry_TekGrenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekGrenade_C*>(UEngramEntry_TekGrenade_C::StaticClass()->DefaultObject);

	return Default;
}

}


