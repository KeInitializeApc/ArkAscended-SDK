#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_EggIncubator.EngramEntry_EggIncubator_C
// (None)

class UClass* UEngramEntry_EggIncubator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_EggIncubator_C");

	return Clss;
}


// EngramEntry_EggIncubator_C EngramEntry_EggIncubator.Default__EngramEntry_EggIncubator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_EggIncubator_C* UEngramEntry_EggIncubator_C::GetDefaultObj()
{
	static class UEngramEntry_EggIncubator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_EggIncubator_C*>(UEngramEntry_EggIncubator_C::StaticClass()->DefaultObject);

	return Default;
}

}


