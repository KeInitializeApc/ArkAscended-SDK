#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekSniper.EngramEntry_TekSniper_C
// (None)

class UClass* UEngramEntry_TekSniper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekSniper_C");

	return Clss;
}


// EngramEntry_TekSniper_C EngramEntry_TekSniper.Default__EngramEntry_TekSniper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekSniper_C* UEngramEntry_TekSniper_C::GetDefaultObj()
{
	static class UEngramEntry_TekSniper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekSniper_C*>(UEngramEntry_TekSniper_C::StaticClass()->DefaultObject);

	return Default;
}

}


