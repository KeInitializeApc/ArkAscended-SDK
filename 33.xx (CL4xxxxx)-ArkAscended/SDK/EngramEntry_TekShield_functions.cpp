#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekShield.EngramEntry_TekShield_C
// (None)

class UClass* UEngramEntry_TekShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekShield_C");

	return Clss;
}


// EngramEntry_TekShield_C EngramEntry_TekShield.Default__EngramEntry_TekShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekShield_C* UEngramEntry_TekShield_C::GetDefaultObj()
{
	static class UEngramEntry_TekShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekShield_C*>(UEngramEntry_TekShield_C::StaticClass()->DefaultObject);

	return Default;
}

}


