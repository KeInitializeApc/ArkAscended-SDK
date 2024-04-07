#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_PreservingSalt.EngramEntry_PreservingSalt_C
// (None)

class UClass* UEngramEntry_PreservingSalt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_PreservingSalt_C");

	return Clss;
}


// EngramEntry_PreservingSalt_C EngramEntry_PreservingSalt.Default__EngramEntry_PreservingSalt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_PreservingSalt_C* UEngramEntry_PreservingSalt_C::GetDefaultObj()
{
	static class UEngramEntry_PreservingSalt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_PreservingSalt_C*>(UEngramEntry_PreservingSalt_C::StaticClass()->DefaultObject);

	return Default;
}

}


