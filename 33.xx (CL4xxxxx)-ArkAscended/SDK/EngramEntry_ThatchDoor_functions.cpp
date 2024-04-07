#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ThatchDoor.EngramEntry_ThatchDoor_C
// (None)

class UClass* UEngramEntry_ThatchDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ThatchDoor_C");

	return Clss;
}


// EngramEntry_ThatchDoor_C EngramEntry_ThatchDoor.Default__EngramEntry_ThatchDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ThatchDoor_C* UEngramEntry_ThatchDoor_C::GetDefaultObj()
{
	static class UEngramEntry_ThatchDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ThatchDoor_C*>(UEngramEntry_ThatchDoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


