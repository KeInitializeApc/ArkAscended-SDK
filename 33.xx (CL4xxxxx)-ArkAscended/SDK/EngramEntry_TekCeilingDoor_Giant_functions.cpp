#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekCeilingDoor_Giant.EngramEntry_TekCeilingDoor_Giant_C
// (None)

class UClass* UEngramEntry_TekCeilingDoor_Giant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekCeilingDoor_Giant_C");

	return Clss;
}


// EngramEntry_TekCeilingDoor_Giant_C EngramEntry_TekCeilingDoor_Giant.Default__EngramEntry_TekCeilingDoor_Giant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekCeilingDoor_Giant_C* UEngramEntry_TekCeilingDoor_Giant_C::GetDefaultObj()
{
	static class UEngramEntry_TekCeilingDoor_Giant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekCeilingDoor_Giant_C*>(UEngramEntry_TekCeilingDoor_Giant_C::StaticClass()->DefaultObject);

	return Default;
}

}


