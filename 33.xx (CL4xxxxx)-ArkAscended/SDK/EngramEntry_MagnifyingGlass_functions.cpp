#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MagnifyingGlass.EngramEntry_MagnifyingGlass_C
// (None)

class UClass* UEngramEntry_MagnifyingGlass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MagnifyingGlass_C");

	return Clss;
}


// EngramEntry_MagnifyingGlass_C EngramEntry_MagnifyingGlass.Default__EngramEntry_MagnifyingGlass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MagnifyingGlass_C* UEngramEntry_MagnifyingGlass_C::GetDefaultObj()
{
	static class UEngramEntry_MagnifyingGlass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MagnifyingGlass_C*>(UEngramEntry_MagnifyingGlass_C::StaticClass()->DefaultObject);

	return Default;
}

}


