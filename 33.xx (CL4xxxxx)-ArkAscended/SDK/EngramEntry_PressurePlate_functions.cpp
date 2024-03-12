#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_PressurePlate.EngramEntry_PressurePlate_C
// (None)

class UClass* UEngramEntry_PressurePlate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_PressurePlate_C");

	return Clss;
}


// EngramEntry_PressurePlate_C EngramEntry_PressurePlate.Default__EngramEntry_PressurePlate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_PressurePlate_C* UEngramEntry_PressurePlate_C::GetDefaultObj()
{
	static class UEngramEntry_PressurePlate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_PressurePlate_C*>(UEngramEntry_PressurePlate_C::StaticClass()->DefaultObject);

	return Default;
}

}


