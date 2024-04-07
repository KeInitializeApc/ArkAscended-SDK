#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_BeerBarrel.EngramEntry_BeerBarrel_C
// (None)

class UClass* UEngramEntry_BeerBarrel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_BeerBarrel_C");

	return Clss;
}


// EngramEntry_BeerBarrel_C EngramEntry_BeerBarrel.Default__EngramEntry_BeerBarrel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_BeerBarrel_C* UEngramEntry_BeerBarrel_C::GetDefaultObj()
{
	static class UEngramEntry_BeerBarrel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_BeerBarrel_C*>(UEngramEntry_BeerBarrel_C::StaticClass()->DefaultObject);

	return Default;
}

}


