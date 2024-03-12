#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalFloor.EngramEntry_MetalFloor_C
// (None)

class UClass* UEngramEntry_MetalFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalFloor_C");

	return Clss;
}


// EngramEntry_MetalFloor_C EngramEntry_MetalFloor.Default__EngramEntry_MetalFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalFloor_C* UEngramEntry_MetalFloor_C::GetDefaultObj()
{
	static class UEngramEntry_MetalFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalFloor_C*>(UEngramEntry_MetalFloor_C::StaticClass()->DefaultObject);

	return Default;
}

}


