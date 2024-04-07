#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekDoor.EngramEntry_TekDoor_C
// (None)

class UClass* UEngramEntry_TekDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekDoor_C");

	return Clss;
}


// EngramEntry_TekDoor_C EngramEntry_TekDoor.Default__EngramEntry_TekDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekDoor_C* UEngramEntry_TekDoor_C::GetDefaultObj()
{
	static class UEngramEntry_TekDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekDoor_C*>(UEngramEntry_TekDoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


