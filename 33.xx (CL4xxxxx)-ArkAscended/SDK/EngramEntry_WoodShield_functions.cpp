#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WoodShield.EngramEntry_WoodShield_C
// (None)

class UClass* UEngramEntry_WoodShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WoodShield_C");

	return Clss;
}


// EngramEntry_WoodShield_C EngramEntry_WoodShield.Default__EngramEntry_WoodShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WoodShield_C* UEngramEntry_WoodShield_C::GetDefaultObj()
{
	static class UEngramEntry_WoodShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WoodShield_C*>(UEngramEntry_WoodShield_C::StaticClass()->DefaultObject);

	return Default;
}

}


