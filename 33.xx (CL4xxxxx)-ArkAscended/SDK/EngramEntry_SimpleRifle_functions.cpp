#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_SimpleRifle.EngramEntry_SimpleRifle_C
// (None)

class UClass* UEngramEntry_SimpleRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_SimpleRifle_C");

	return Clss;
}


// EngramEntry_SimpleRifle_C EngramEntry_SimpleRifle.Default__EngramEntry_SimpleRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_SimpleRifle_C* UEngramEntry_SimpleRifle_C::GetDefaultObj()
{
	static class UEngramEntry_SimpleRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_SimpleRifle_C*>(UEngramEntry_SimpleRifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


