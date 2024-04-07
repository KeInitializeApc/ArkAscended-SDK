#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_GhillieShirt.EngramEntry_GhillieShirt_C
// (None)

class UClass* UEngramEntry_GhillieShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_GhillieShirt_C");

	return Clss;
}


// EngramEntry_GhillieShirt_C EngramEntry_GhillieShirt.Default__EngramEntry_GhillieShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_GhillieShirt_C* UEngramEntry_GhillieShirt_C::GetDefaultObj()
{
	static class UEngramEntry_GhillieShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_GhillieShirt_C*>(UEngramEntry_GhillieShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


