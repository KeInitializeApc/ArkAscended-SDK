#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WoodFloor.EngramEntry_WoodFloor_C
// (None)

class UClass* UEngramEntry_WoodFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WoodFloor_C");

	return Clss;
}


// EngramEntry_WoodFloor_C EngramEntry_WoodFloor.Default__EngramEntry_WoodFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WoodFloor_C* UEngramEntry_WoodFloor_C::GetDefaultObj()
{
	static class UEngramEntry_WoodFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WoodFloor_C*>(UEngramEntry_WoodFloor_C::StaticClass()->DefaultObject);

	return Default;
}

}


