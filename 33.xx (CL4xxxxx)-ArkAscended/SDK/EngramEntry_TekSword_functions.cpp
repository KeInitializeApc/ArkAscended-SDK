#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekSword.EngramEntry_TekSword_C
// (None)

class UClass* UEngramEntry_TekSword_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekSword_C");

	return Clss;
}


// EngramEntry_TekSword_C EngramEntry_TekSword.Default__EngramEntry_TekSword_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekSword_C* UEngramEntry_TekSword_C::GetDefaultObj()
{
	static class UEngramEntry_TekSword_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekSword_C*>(UEngramEntry_TekSword_C::StaticClass()->DefaultObject);

	return Default;
}

}


