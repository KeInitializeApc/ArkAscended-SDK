#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MachinedSniper.EngramEntry_MachinedSniper_C
// (None)

class UClass* UEngramEntry_MachinedSniper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MachinedSniper_C");

	return Clss;
}


// EngramEntry_MachinedSniper_C EngramEntry_MachinedSniper.Default__EngramEntry_MachinedSniper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MachinedSniper_C* UEngramEntry_MachinedSniper_C::GetDefaultObj()
{
	static class UEngramEntry_MachinedSniper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MachinedSniper_C*>(UEngramEntry_MachinedSniper_C::StaticClass()->DefaultObject);

	return Default;
}

}


