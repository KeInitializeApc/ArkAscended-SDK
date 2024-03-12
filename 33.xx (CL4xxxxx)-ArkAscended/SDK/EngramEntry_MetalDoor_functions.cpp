#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalDoor.EngramEntry_MetalDoor_C
// (None)

class UClass* UEngramEntry_MetalDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalDoor_C");

	return Clss;
}


// EngramEntry_MetalDoor_C EngramEntry_MetalDoor.Default__EngramEntry_MetalDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalDoor_C* UEngramEntry_MetalDoor_C::GetDefaultObj()
{
	static class UEngramEntry_MetalDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalDoor_C*>(UEngramEntry_MetalDoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


