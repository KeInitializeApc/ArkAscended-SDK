#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_FurBoots.EngramEntry_FurBoots_C
// (None)

class UClass* UEngramEntry_FurBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_FurBoots_C");

	return Clss;
}


// EngramEntry_FurBoots_C EngramEntry_FurBoots.Default__EngramEntry_FurBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_FurBoots_C* UEngramEntry_FurBoots_C::GetDefaultObj()
{
	static class UEngramEntry_FurBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_FurBoots_C*>(UEngramEntry_FurBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


