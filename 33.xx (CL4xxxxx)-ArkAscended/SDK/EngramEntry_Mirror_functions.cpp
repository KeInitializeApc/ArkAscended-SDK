#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Mirror.EngramEntry_Mirror_C
// (None)

class UClass* UEngramEntry_Mirror_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Mirror_C");

	return Clss;
}


// EngramEntry_Mirror_C EngramEntry_Mirror.Default__EngramEntry_Mirror_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Mirror_C* UEngramEntry_Mirror_C::GetDefaultObj()
{
	static class UEngramEntry_Mirror_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Mirror_C*>(UEngramEntry_Mirror_C::StaticClass()->DefaultObject);

	return Default;
}

}


