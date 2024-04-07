#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalShield.EngramEntry_MetalShield_C
// (None)

class UClass* UEngramEntry_MetalShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalShield_C");

	return Clss;
}


// EngramEntry_MetalShield_C EngramEntry_MetalShield.Default__EngramEntry_MetalShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalShield_C* UEngramEntry_MetalShield_C::GetDefaultObj()
{
	static class UEngramEntry_MetalShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalShield_C*>(UEngramEntry_MetalShield_C::StaticClass()->DefaultObject);

	return Default;
}

}


