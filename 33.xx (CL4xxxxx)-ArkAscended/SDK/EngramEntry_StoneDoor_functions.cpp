#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StoneDoor.EngramEntry_StoneDoor_C
// (None)

class UClass* UEngramEntry_StoneDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StoneDoor_C");

	return Clss;
}


// EngramEntry_StoneDoor_C EngramEntry_StoneDoor.Default__EngramEntry_StoneDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StoneDoor_C* UEngramEntry_StoneDoor_C::GetDefaultObj()
{
	static class UEngramEntry_StoneDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StoneDoor_C*>(UEngramEntry_StoneDoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


