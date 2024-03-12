#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekGravityGrenade.EngramEntry_TekGravityGrenade_C
// (None)

class UClass* UEngramEntry_TekGravityGrenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekGravityGrenade_C");

	return Clss;
}


// EngramEntry_TekGravityGrenade_C EngramEntry_TekGravityGrenade.Default__EngramEntry_TekGravityGrenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekGravityGrenade_C* UEngramEntry_TekGravityGrenade_C::GetDefaultObj()
{
	static class UEngramEntry_TekGravityGrenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekGravityGrenade_C*>(UEngramEntry_TekGravityGrenade_C::StaticClass()->DefaultObject);

	return Default;
}

}


