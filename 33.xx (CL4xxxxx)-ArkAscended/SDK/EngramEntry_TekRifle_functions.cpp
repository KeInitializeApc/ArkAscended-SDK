#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekRifle.EngramEntry_TekRifle_C
// (None)

class UClass* UEngramEntry_TekRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekRifle_C");

	return Clss;
}


// EngramEntry_TekRifle_C EngramEntry_TekRifle.Default__EngramEntry_TekRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekRifle_C* UEngramEntry_TekRifle_C::GetDefaultObj()
{
	static class UEngramEntry_TekRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekRifle_C*>(UEngramEntry_TekRifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


