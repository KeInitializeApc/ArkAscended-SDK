#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WoodDoor.EngramEntry_WoodDoor_C
// (None)

class UClass* UEngramEntry_WoodDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WoodDoor_C");

	return Clss;
}


// EngramEntry_WoodDoor_C EngramEntry_WoodDoor.Default__EngramEntry_WoodDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WoodDoor_C* UEngramEntry_WoodDoor_C::GetDefaultObj()
{
	static class UEngramEntry_WoodDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WoodDoor_C*>(UEngramEntry_WoodDoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


