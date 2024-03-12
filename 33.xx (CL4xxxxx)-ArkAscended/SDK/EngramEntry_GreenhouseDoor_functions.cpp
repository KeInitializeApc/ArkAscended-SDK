#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_GreenhouseDoor.EngramEntry_GreenhouseDoor_C
// (None)

class UClass* UEngramEntry_GreenhouseDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_GreenhouseDoor_C");

	return Clss;
}


// EngramEntry_GreenhouseDoor_C EngramEntry_GreenhouseDoor.Default__EngramEntry_GreenhouseDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_GreenhouseDoor_C* UEngramEntry_GreenhouseDoor_C::GetDefaultObj()
{
	static class UEngramEntry_GreenhouseDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_GreenhouseDoor_C*>(UEngramEntry_GreenhouseDoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


