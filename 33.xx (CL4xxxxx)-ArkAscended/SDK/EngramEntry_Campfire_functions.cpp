#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Campfire.EngramEntry_Campfire_C
// (None)

class UClass* UEngramEntry_Campfire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Campfire_C");

	return Clss;
}


// EngramEntry_Campfire_C EngramEntry_Campfire.Default__EngramEntry_Campfire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Campfire_C* UEngramEntry_Campfire_C::GetDefaultObj()
{
	static class UEngramEntry_Campfire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Campfire_C*>(UEngramEntry_Campfire_C::StaticClass()->DefaultObject);

	return Default;
}

}


